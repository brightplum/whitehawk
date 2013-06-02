<?php

class WHGFeesMigration extends WHGNodeMigration {
    public function __construct(array $arguments) {
        $this->sourceFields['ref_record_uid'] = 'Referenced user record uid';

        parent::__construct($arguments);

        $this->addFieldMapping('field_ncf_coaching_fee_amount', 'field_non_coaching_fee_amount');
        $this->addFieldMapping('field_ncf_remarks', 'field_remarks');
        $this->addFieldMapping('field_ncf_date_of_service', 'field_service_date');
        $this->addFieldMapping('field_ncf_d6_record', 'field_case');
        $this->addFieldMapping('field_ncf_associated_record', 'ref_record_uid');

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
                $this->saveMessage(t('No user account in record data for ncf node with nid !nid',
                        array('!nid' => $cfc->field_case_nid)));
            }
        }
        return TRUE;
    }
}
