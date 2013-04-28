<?php

class WHGRecordMigration extends Migration {
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate record nodes to user data.');
    $this->dependencies = array('WHGUser');

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

    $query = db_select('whitehawkd6.node', 'n')
      ->fields('n', array('nid', 'type'))
      ->condition('n.type', 'record', '=');
    $query->join('whitehawkd6.content_type_record', 'ctr', 'n.nid = ctr.nid');
    $query->addField('ctr', 'field_client_level_value');

    $source_fields = array(
      'nid' => t('The node ID of the record'),
      'uid' => t('The user ID of a user'),
    );

    $this->source = new MigrateSourceSQL($query, $source_fields);

    $this->destination = new DrupalDestinationUser();

    $this->addFieldMapping('field_user_client_level', 'field_client_level_value');

  }
}
