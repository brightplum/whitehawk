<?php
/**
 * @file
 * whg_features.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function whg_features_field_default_fields() {
  $fields = array();

  // Exported field: 'bean-freetext-field_bean_freetext_content'.
  $fields['bean-freetext-field_bean_freetext_content'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_bean_freetext_content',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'freetext',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'bean',
      'field_name' => 'field_bean_freetext_content',
      'label' => 'Content',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '-4',
      ),
    ),
  );

  // Exported field: 'node-page-body'.
  $fields['node-page-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-page-field_left_sidebar'.
  $fields['node-page-field_left_sidebar'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_left_sidebar',
      'foreign keys' => array(
        'bid' => array(
          'columns' => array(
            'bid' => 'bid',
          ),
          'table' => 'block',
        ),
      ),
      'indexes' => array(
        'bid' => array(
          0 => 'bid',
        ),
      ),
      'locked' => '0',
      'module' => 'blockreference',
      'settings' => array(
        'referenceable_modules' => array(
          'bean' => 'bean',
          'block' => 0,
          'comment' => 0,
          'menu' => 0,
          'node' => 0,
          'search' => 0,
          'shortcut' => 0,
          'system' => 0,
          'user' => 0,
        ),
        'referenceable_operator' => 'AND',
        'referenceable_regions' => array(
          '' => 0,
          'closure' => 0,
          'content' => 0,
          'content_bottom' => 0,
          'content_top' => 0,
          'dashboard_inactive' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'help' => 0,
          'highlighted' => 0,
          'left_sidebar' => 0,
          'navigation' => 0,
          'page_bottom' => 0,
          'page_top' => 0,
          'right_sidebar' => 0,
        ),
        'referenceable_theme' => 'default',
        'respect_visibility' => 0,
      ),
      'translatable' => '0',
      'type' => 'blockreference',
    ),
    'field_instance' => array(
      'bundle' => 'page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'blockreference',
          'settings' => array(),
          'type' => 'blockreference_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_left_sidebar',
      'label' => 'Left Sidebar',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'blockreference',
        'settings' => array(
          'autocomplete_path' => 'blockreference/autocomplete',
          'size' => '60',
        ),
        'type' => 'blockreference_autocomplete',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-page-field_main_nav'.
  $fields['node-page-field_main_nav'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_main_nav',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'page',
      'default_value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_main_nav',
      'label' => 'Show Top Navigation',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-page-field_privacy'.
  $fields['node-page-field_privacy'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_privacy',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Private',
          1 => 'Public',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'page',
      'default_value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_privacy',
      'label' => 'Privacy',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-page-field_right_sidebar'.
  $fields['node-page-field_right_sidebar'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_right_sidebar',
      'foreign keys' => array(
        'bid' => array(
          'columns' => array(
            'bid' => 'bid',
          ),
          'table' => 'block',
        ),
      ),
      'indexes' => array(
        'bid' => array(
          0 => 'bid',
        ),
      ),
      'locked' => '0',
      'module' => 'blockreference',
      'settings' => array(
        'referenceable_modules' => array(
          'bean' => 'bean',
          'block' => 0,
          'comment' => 0,
          'menu' => 0,
          'node' => 0,
          'search' => 0,
          'shortcut' => 0,
          'system' => 0,
          'user' => 0,
        ),
        'referenceable_operator' => 'AND',
        'referenceable_regions' => array(
          '' => 0,
          'closure' => 0,
          'content' => 0,
          'content_bottom' => 0,
          'content_top' => 0,
          'dashboard_inactive' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'help' => 0,
          'highlighted' => 0,
          'left_sidebar' => 0,
          'navigation' => 0,
          'page_bottom' => 0,
          'page_top' => 0,
          'right_sidebar' => 0,
        ),
        'referenceable_theme' => 'default',
        'respect_visibility' => 0,
      ),
      'translatable' => '0',
      'type' => 'blockreference',
    ),
    'field_instance' => array(
      'bundle' => 'page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'blockreference',
          'settings' => array(),
          'type' => 'blockreference_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_right_sidebar',
      'label' => 'Right Sidebar',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'blockreference',
        'settings' => array(
          'autocomplete_path' => 'blockreference/autocomplete',
          'size' => '60',
        ),
        'type' => 'blockreference_autocomplete',
        'weight' => '5',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Content');
  t('Left Sidebar');
  t('Privacy');
  t('Right Sidebar');
  t('Show Top Navigation');

  return $fields;
}
