<?php

class WHGNameMigration extends Migration {
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate legacy, name data from record nodes to user data.');
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
    $query->addField('ctr', 'field_user_account_uid');
    $query->join('content_field_legacy_id', 'cfli', 'n.nid = cfli.nid');
    $query->addField('cfli', 'field_legacy_id_value');
    $query->join('content_field_lname', 'cfln', 'n.nid = cfln.nid');
    $query->addField('cfln', 'field_lname_value');
    $query->join('content_field_fname', 'cffn', 'n.nid = cffn.nid');
    $query->addField('cffn', 'field_fname_value');

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
      'field_user_client_eid:language',
      'field_user_region:language',
      'field_user_department:language',
      'field_user_supervisor_name:language',
      'field_user_supervisor_title:language',
      'field_user_supervisor_phone:language',
      'field_user_coach',
      'field_user_client_id',
      'field_user_firstname:language',
      'field_user_lastname:language',
      'field_user_address',
      'field_user_phone',
      'field_user_phone:language',
      'field_user_gender',
      'field_user_language',
      'field_user_follow_up',
      'field_user_follow_up_notes',
      'field_user_follow_up_notes:format',
      'field_user_worksheet_received',
      'field_user_waiver_auth_received',
      'field_user_letter_presented',
      'field_user_separation_date',
      'field_user_assignment_date',
      'field_user_client_level',
      'field_user_client_eid',
      'field_user_region',
      'field_user_department',
      'field_user_supervisor_name',
      'field_user_supervisor_title',
      'field_user_supervisor_email',
      'field_user_supervisor_phone',
      'field_user_coach_designation',
      'field_user_coach_designation:language',
      'field_user_coach_biography',
      'field_user_coach_biography:format',
      'field_user_coach_biography:language',
      'field_user_coach_experience',
      'field_user_coach_experience:format',
      'field_user_coach_experience:language',
      'field_user_coach_expertise',
      'field_user_coach_expertise:format',
      'field_user_coach_expertise:language',
      'field_user_coach_education',
      'field_user_coach_education:language',
      'field_user_coach_education:format',
      'field_user_client_id_legacy',
      'field_user_client_id_legacy:language',
      'field_user_company',
      'field_user_personal_email',
      'field_user_coach_publication',
      'field_user_coach_publication:format',
      'field_user_coach_publication:language',
      'field_user_alt_phone',
      'field_user_alt_phone:language',
      'field_user_fax',
      'field_user_fax:language',
      'field_user_coach_membership',
      'field_user_coach_membership:language',
      'field_user_coach_membership:format',
    ), t('Do Not Migrate'));
  }

  public function prepareRow($current_row) {
    $current_row->ref_account_uid = whg_migrate_get_new_id('whguser', $current_row->field_user_account_uid);
    return TRUE;
  }
}
