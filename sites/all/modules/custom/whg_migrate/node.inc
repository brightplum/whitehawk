<?php

/**
 * Common mappings for the Drupal 6 node migrations.
 */
abstract class WHGNodeMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);
  }
}

class WHGNodeActualMigration extends WHGNodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    $this->sourceFields['lead_graphic'] = 'Lead graphic string from D6';
    $this->sourceFields['summary'] = 'Summary string from D6';

    parent::__construct($arguments);

    $this->addFieldMapping('field_image', 'field_lead_graphic')
         ->sourceMigration('Image');
    // Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_countries', '1')
         ->sourceMigration('Countries')
         ->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_topics', '2')
         ->sourceMigration('Topics')
         ->arguments(array('source_type' => 'tid'));
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

    $image_row = Database::getConnection('default', $this->sourceConnection)
      ->select('custom_image_table', 'i')
      ->fields('i', array('copyright', 'filename'))
      ->condition('vid', $row->vid)
      ->execute()
      ->fetchObject();
    if ($image_row) {
      $row->copyright = $image_row->copyright;
      $row->filename = $image_row->filename;
    }
    else {
      $this->saveMessage(t('No custom_image_table data for image node with vid !vid',
        array('!vid' => $row->vid)));
    }
  }
}
