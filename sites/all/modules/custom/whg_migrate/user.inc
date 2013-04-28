<?php

/**
 * Common mappings for the Drupal 6 node migrations.
 */
abstract class WHGUserMigration extends DrupalUser6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);
  }
}

class WHGUserActualMigration extends WHGUserMigration {
  public function __construct(array $arguments) {

    parent::__construct($arguments);

    $this->addFieldMapping('field_user_firstname', 'field_fname');
    $this->addFieldMapping('field_user_lastname', 'field_lname');
    $this->addFieldMapping('field_user_phone', 'field_phone');
    $this->addFieldMapping('field_user_coach_designation', 'field_designation');
    $this->addFieldMapping('field_user_coach_biography', 'field_bio');
    $this->addFieldMapping('field_user_coach_experience', 'field_experience');
    $this->addFieldMapping('field_user_personal_email', 'field_personal_email');
    $this->addFieldMapping('field_user_coach_expertise', 'field_expertise');
    $this->addFieldMapping('field_user_coach_education', 'field_education');
    $this->addFieldMapping('field_user_coach_membershp', 'field_membership');
    $this->addFieldMapping('field_user_coach_publication', 'field_publication');
    $this->addFieldMapping('field_user_fax', 'field_fax');
    $this->addFieldMapping('field_user_alt_phone', 'field_alt_phone');
    $this->addFieldMapping('field_user_legacy_id', 'field_legacy_id');
    $this->addFieldMapping('field_user_coach', 'field_coach_manager')
      ->sourceMigration('WHGUser');

    // Address field.
    $arguments = array(
      'thoroughfare' => array('source_field' => 'field_address_1'),
      'premise' => array('source_field' => 'field_address_2'),
      'locality' => array('source_field' => 'field_city'),
      'administrative_area' => array('source_field' => 'field_state'),
      'postal_code' => array('source_field' => 'field_zip'),
    );
    // Note that of the country field is NULL, none of the values will be migrated!
    $this->addFieldMapping('field_user_address', 'US')->arguments($arguments);

    $this->addFieldMapping(NULL, 'field_address_1');
    $this->addFieldMapping(NULL, 'field_address_2');
    $this->addFieldMapping(NULL, 'field_city');
    $this->addFieldMapping(NULL, 'field_state');
    $this->addFieldMapping(NULL, 'field_zip');

    $this->addUnmigratedSources(array(
      'field_bio:format',
      'field_experience:format',
      'field_expertise:format',
      'field_education:format',
      'field_membership:format',
      'field_publication:format',
      'field_active',
      'field_country',
    ), t('Do Not Migrate'));
  }

  /**
   * Prepare the rows going into the users.
   *
   * @param $current_row
   * @return bool
   */
  public function prepareRow($current_row) {
    $source_id = $current_row->uid;
    $query = Database::getConnection('default', 'legacy')
      ->select('users_roles', 'r')
      ->fields('r', array('uid', 'rid'))
      ->condition('r.uid', $source_id, '=');
    $results = $query->execute();
    // add the Authenticated role for everyone
    $roles = array('2' => '2');
    foreach ($results as $row) {
      switch ($row->rid) {
        // coach
        case 3:
          $rid = 9;
          break;

        // admin, super admin
        case 5:
        case 6:
          $rid = 3;
          break;

        // case manager
        case 7:
          $rid = 10;
          break;

        // reviewer
        case 9:
          $rid = 11;
          break;

        default:
          $rid = $row->rid;
          break;
      }
      $roles[$rid] = $rid;
    }
    $current_row->roles = $roles;
    return TRUE;
    // return FALSE if you wish to skip a particular row
  }
}
