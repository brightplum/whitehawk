<?php

class WHGProfileMigration extends Migration {
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate member profile nodes to user data.');
    $this->dependencies = array('WHGUser');

    $this->systemOfRecord = Migration::DESTINATION;

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'nid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D6 Unique Node ID',
          'alias' => 'n',
        )
      ),
      DrupalDestinationUser::getKeySchema()
    );

    $query = Database::getConnection('default', 'legacy')
      ->select('node', 'n')
      ->fields('n', array('nid', 'uid'))
      ->condition('n.type', 'member_profile', '=')
      ->condition('n.status', 1, '=');
    $query->join('content_type_member_profile', 'ctmp', 'n.nid = ctmp.nid');
    $query->addField('ctmp', 'field_personal_email_email');
    $query->addField('ctmp', 'field_designation_value');
    $query->addField('ctmp', 'field_bio_value');
    $query->addField('ctmp', 'field_experience_value');
    $query->addField('ctmp', 'field_expertise_value');
    $query->addField('ctmp', 'field_education_value');
    $query->addField('ctmp', 'field_membership_value');
    $query->addField('ctmp', 'field_publication_value');
    $query->addField('ctmp', 'field_alt_phone_value');
    $query->addField('ctmp', 'field_fax_value');
    $query->addField('ctmp', 'field_coach_manager_uid');
    $query->join('content_field_fname', 'cff', 'n.nid = cff.nid');
    $query->addField('cff', 'field_fname_value');
    $query->join('content_field_lname', 'cfl', 'n.nid = cfl.nid');
    $query->addField('cfl', 'field_lname_value');
    $query->join('content_field_address_1', 'cfa1', 'n.nid = cfa1.nid');
    $query->addField('cfa1', 'field_address_1_value');
    $query->join('content_field_address_2', 'cfa2', 'n.nid = cfa2.nid');
    $query->addField('cfa2', 'field_address_2_value');
    $query->join('content_field_city', 'cfcity', 'n.nid = cfcity.nid');
    $query->addField('cfcity', 'field_city_value');
    $query->join('content_field_state', 'cfstate', 'n.nid = cfstate.nid');
    $query->addField('cfstate', 'field_state_value');
    $query->join('content_field_zip', 'cfzip', 'n.nid = cfzip.nid');
    $query->addField('cfzip', 'field_zip_value');
    $query->join('content_field_legacy_id', 'cfli', 'n.nid = cfli.nid');
    $query->addField('cfli', 'field_legacy_id_value');

    // Add source fields which not queried in $query, will be populated in prepareRow()
    $source_fields = array(
      'ref_account_uid' => t('user reference on record'),
    );

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query, $source_fields);

    $this->destination = new DrupalDestinationUser();

    $this->addFieldMapping('uid', 'ref_account_uid');
    $this->addFieldMapping('field_user_firstname', 'field_fname_value');
    $this->addFieldMapping('field_user_lastname', 'field_lname_value');
    $this->addFieldMapping('field_user_personal_email', 'field_personal_email_email');
    $this->addFieldMapping('field_user_coach_designation', 'field_designation_value');
    $this->addFieldMapping('field_user_coach_biography', 'field_bio_value');
    $this->addFieldMapping('field_user_coach_experience', 'field_experience_value');
    $this->addFieldMapping('field_user_coach_expertise', 'field_expertise_value');
    $this->addFieldMapping('field_user_coach_education', 'field_education_value');
    $this->addFieldMapping('field_user_coach_membership', 'field_membership_value');
    $this->addFieldMapping('field_user_coach_publication', 'field_publication_value');
    $this->addFieldMapping('field_user_alt_phone', 'field_alt_phone_value');
    $this->addFieldMapping('field_user_fax', 'field_fax_value');
    $this->addFieldMapping('field_user_client_id_legacy', 'field_legacy_id_value');
    $this->addFieldMapping('field_user_coach', 'field_coach_manager_uid')
      ->sourceMigration('WHGUser');

    // Address field.
    $arguments = array(
      'thoroughfare' => array('source_field' => 'field_address_1_value'),
      'premise' => array('source_field' => 'field_address_2_value'),
      'locality' => array('source_field' => 'field_city_value'),
      'administrative_area' => array('source_field' => 'field_state_value'),
      'postal_code' => array('source_field' => 'field_zip_value'),
    );
    // Note that of the country field is NULL, none of the values will be migrated!
    $this->addFieldMapping('field_user_address', 'US')->arguments($arguments);
    $this->addFieldMapping(NULL, 'field_address_1_value');
    $this->addFieldMapping(NULL, 'field_address_2_value');
    $this->addFieldMapping(NULL, 'field_city_value');
    $this->addFieldMapping(NULL, 'field_state_value');
    $this->addFieldMapping(NULL, 'field_zip_value');

    $this->addUnmigratedDestinations(array(
      'is_new',
      'mail',
      'name',
      'pass',
      'status',
      'created',
      'access',
      'login',
      'roles',
      'picture',
      'role_names',
      'signature',
      'signature_format',
      'timezone',
      'language',
      'theme',
      'init',
      'data',
      'path',
      'pathauto',
      'field_user_language:language',
      'field_user_follow_up_notes:language',
      'field_user_company:language',
      'field_user_client_eid:language',
      'field_user_region:language',
      'field_user_department:language',
      'field_user_supervisor_name:language',
      'field_user_supervisor_title:language',
      'field_user_supervisor_phone:language',
    ), t('Do Not Migrate'));
  }

  public function prepareRow($current_row) {
    $current_row->ref_account_uid = whg_migrate_get_new_id('whguser', $current_row->uid);
    return TRUE;
  }
}
