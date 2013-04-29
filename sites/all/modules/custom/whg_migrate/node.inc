<?php

/**
 * Common mappings for the Drupal 6 node migrations.
 */
abstract class WHGNodeMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);
  }
}

class WHGCMRMigration extends WHGNodeMigration {
  public function __construct(array $arguments) {
    $this->sourceFields['ref_record_uid'] = 'Referenced user record uid';

    parent::__construct($arguments);

    $this->addFieldMapping('field_cmr_final', 'field_final');
    $this->addFieldMapping('field_cmr_last_contact', 'field_last_contact');
    $this->addFieldMapping('field_cmr_status_code', 'field_status_code');
    $this->addFieldMapping('field_cmr_phase', 'field_phase');
    $this->addFieldMapping('field_cmr_service_fee', 'field_service_fee');
    $this->addFieldMapping('field_cmr_hours', 'field_hours');
    $this->addFieldMapping('field_cmr_remarks', 'field_remarks');
    $this->addFieldMapping('field_cmr_inactivation_date', 'field_inactivation_date');
    $this->addFieldMapping('field_cmr_service_started', 'field_service_started');
    $this->addFieldMapping('field_cmr_computed_into_record', 'field_computed_into_record');
    $this->addFieldMapping('field_cmr_d6_record', 'field_case');
    $this->addFieldMapping('field_cmr_associated_record', 'ref_record_uid');

    $this->addUnmigratedSources(
      array(
        'field_remarks:format',
        'field_report_date',
      )
    );

    $this->addUnmigratedDestinations(
      array(
        'field_cmr_remarks:language',
      )
    );
  }

  /**
   * Implementation of Migration::prepareRow().
   *
   * Here we pull in additional data from a non-core, non-CCK table.
   *
   * @param $row
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $cfc = Database::getConnection('default', 'legacy')
      ->select('content_field_case', 'cfc')
      ->fields('cfc', array('field_case_nid'))
      ->condition('cfc.nid', $row->nid)
      ->execute()->fetchObject();
    if ($cfc) {
      $ctr = Database::getConnection('default', 'legacy')
        ->select('content_type_record', 'ctr')
        ->fields('ctr', array('field_user_account_uid'))
        ->condition('ctr.nid', $cfc->field_case_nid)
        ->execute()->fetchObject();
      if ($ctr && !empty($ctr->field_user_account_uid)) {
        $row->ref_record_uid = whg_migrate_get_new_id('whguser', $ctr->field_user_account_uid);
      }
      else {
        $this->saveMessage(t('No user account in record data for cmr node with nid !nid',
          array('!nid' => $cfc->field_case_nid)));
      }
    }
    return TRUE;
  }
}
