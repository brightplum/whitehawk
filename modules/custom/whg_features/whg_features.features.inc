<?php
/**
 * @file
 * whg_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function whg_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}

/**
 * Implements hook_views_api().
 */
function whg_features_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function whg_features_node_info() {
  $items = array(
    'cmr' => array(
      'name' => t('Case Management Report'),
      'base' => 'node_content',
      'description' => t('A case management report is filed against Records by Coaches. It includes updated information about a Record.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'non_coaching_fees' => array(
      'name' => t('Non-Coaching Fees'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
