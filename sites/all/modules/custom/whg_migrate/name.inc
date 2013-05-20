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
    return TRUE;
  }
}
