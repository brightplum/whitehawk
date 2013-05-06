<?php

class WHGRecordMigration extends Migration {
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate record nodes to user data.');
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
      ->fields('n', array('nid'))
      ->condition('n.type', 'record', '=')
      ->condition('n.status', 1, '=');
    $query->join('content_type_record', 'ctr', 'n.nid = ctr.nid');
    $query->addField('ctr', 'field_client_level_value');
    $query->addField('ctr', 'field_user_account_uid');
    $query->addField('ctr', 'field_gender_value');
    $query->addField('ctr', 'field_language_preference_value');
    $query->join('content_field_follow_up', 'cffu', 'n.nid = cffu.nid');
    $query->addField('cffu', 'field_follow_up_value');
    $query->addField('ctr', 'field_follow_up_notes_value');
    $query->addField('ctr', 'field_company_value');
    $query->addField('ctr', 'field_worksheet_date_value');
    $query->addField('ctr', 'field_waiver_date_value');
    $query->addField('ctr', 'field_letter_presented_value');
    $query->addField('ctr', 'field_sep_date_value');
    $query->addField('ctr', 'field_assignment_date_value');
    $query->addField('ctr', 'field_eid_value');
    $query->addField('ctr', 'field_region_value');
    $query->addField('ctr', 'field_department_value');
    $query->addField('ctr', 'field_supervisor_name_value');
    $query->addField('ctr', 'field_supervisor_title_value');
    $query->addField('ctr', 'field_supervisor_email_email');
    $query->addField('ctr', 'field_supervisor_phone_value');
    $query->addField('ctr', 'field_client_id_legacy_value');
    $query->addField('ctr', 'field_coach_profile_nid');
    $query->join('content_field_legacy_id', 'cfli', 'n.nid = cfli.nid');
    $query->addField('cfli', 'field_legacy_id_value');
    $query->join('content_field_lname', 'cfln', 'n.nid = cfln.nid');
    $query->addField('cfln', 'field_lname_value');
    $query->join('content_field_fname', 'cffn', 'n.nid = cffn.nid');
    $query->addField('cffn', 'field_fname_value');

    // Add source fields which not queried in $query, will be populated in prepareRow()
    $source_fields = array(
      'ref_account_uid' => t('user reference on record'),
      'ref_coach_uid' => t('coach user reference on record'),
    );

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query, $source_fields);

    $this->destination = new DrupalDestinationUser();

    $this->addFieldMapping('uid', 'ref_account_uid');
    $this->addFieldMapping('field_user_coach', 'ref_coach_uid');
    $this->addFieldMapping('field_user_firstname', 'field_fname_value');
    $this->addFieldMapping('field_user_lastname', 'field_lname_value');
    $this->addFieldMapping('field_user_client_level', 'field_client_level_value');
    $this->addFieldMapping('field_user_client_id', 'nid');
    $this->addFieldMapping('field_user_gender', 'field_gender_value');
    $this->addFieldMapping('field_user_language', 'field_language_preference_value');
    $this->addFieldMapping('field_user_follow_up', 'field_follow_up_value');
    $this->addFieldMapping('field_user_follow_up_notes', 'field_follow_up_notes_value');
    $this->addFieldMapping('field_user_company', 'field_company_value');
    $this->addFieldMapping('field_user_worksheet_received', 'field_worksheet_date_value');
    $this->addFieldMapping('field_user_waiver_auth_received', 'field_waiver_date_value');
    $this->addFieldMapping('field_user_letter_presented', 'field_letter_presented_value');
    $this->addFieldMapping('field_user_separation_date', 'field_sep_date_value');
    $this->addFieldMapping('field_user_assignment_date', 'field_assignment_date_value');
    $this->addFieldMapping('field_user_client_eid', 'field_eid_value');
    $this->addFieldMapping('field_user_region', 'field_region_value');
    $this->addFieldMapping('field_user_department', 'field_department_value');
    $this->addFieldMapping('field_user_supervisor_name', 'field_supervisor_name_value');
    $this->addFieldMapping('field_user_supervisor_title', 'field_supervisor_title_value');
    $this->addFieldMapping('field_user_supervisor_email', 'field_supervisor_email_email');
    $this->addFieldMapping('field_user_supervisor_phone', 'field_supervisor_phone_value');
    $this->addFieldMapping('field_user_client_id_legacy', 'field_client_id_legacy_value');
    $this->addFieldMapping('field_user_legacy_id', 'field_legacy_id_value');

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
    $current_row->ref_account_uid = whg_migrate_get_new_id('whguser', $current_row->field_user_account_uid);

    $ctr = Database::getConnection('default', 'legacy')
      ->select('content_type_record', 'ctr')
      ->fields('ctr', array('field_coach_profile_nid'))
      ->condition('ctr.nid', $current_row->nid)
      ->execute()->fetchObject();
    if ($ctr) {
      $node = Database::getConnection('default', 'legacy')
        ->select('node', 'n')
        ->fields('n', array('uid'))
        ->condition('n.nid', $ctr->field_coach_profile_nid)
        ->execute()->fetchObject();
      if ($node && !empty($node->uid)) {
        $current_row->ref_coach_uid = whg_migrate_get_new_id('whguser', $node->uid);
      }
      else {
        $this->saveMessage(t('No user account in record data for cmr node with nid !nid',
          array('!nid' => $ctr->field_coach_profile_nid)));
      }
    }
    return TRUE;
  }
}
