<?php
/**
 * @file
 * whg_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function whg_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'active_clients';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Active Clients';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Clients';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_user_client_id' => 'field_user_client_id',
    'name' => 'name',
    'field_user_company' => 'field_user_company',
    'field_user_worksheet_received' => 'field_user_worksheet_received',
    'field_user_waiver_auth_received' => 'field_user_waiver_auth_received',
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_client_level' => 'field_user_client_level',
    'field_cmr_status_code' => 'field_cmr_status_code',
    'field_user_coach' => 'field_user_coach',
  );
  $handler->display->display_options['style_options']['default'] = 'field_user_client_id';
  $handler->display->display_options['style_options']['info'] = array(
    'field_user_client_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_company' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_worksheet_received' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_waiver_auth_received' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_client_level' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_status_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_coach' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: User: Associated Record (field_cmr_associated_record) - reverse */
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['id'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['field'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['label'] = 'cmr';
  /* Relationship: User: Coach (field_user_coach) */
  $handler->display->display_options['relationships']['field_user_coach_uid']['id'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['field'] = 'field_user_coach_uid';
  /* Field: User: Client ID */
  $handler->display->display_options['fields']['field_user_client_id']['id'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['table'] = 'field_data_field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['field'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  /* Field: User: Worksheet Received */
  $handler->display->display_options['fields']['field_user_worksheet_received']['id'] = 'field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['table'] = 'field_data_field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['field'] = 'field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Waiver Authorization Received */
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['id'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['table'] = 'field_data_field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['field'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  /* Field: User: Client Level */
  $handler->display->display_options['fields']['field_user_client_level']['id'] = 'field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['table'] = 'field_data_field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['field'] = 'field_user_client_level';
  /* Field: Content: Status Code */
  $handler->display->display_options['fields']['field_cmr_status_code']['id'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['field'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['relationship'] = 'reverse_field_cmr_associated_record_node';
  /* Field: User: Coach */
  $handler->display->display_options['fields']['field_user_coach']['id'] = 'field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['field'] = 'field_user_coach';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Status Code */
  $handler->display->display_options['fields']['field_cmr_status_code_1']['id'] = 'field_cmr_status_code_1';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['field'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['relationship'] = 'reverse_field_cmr_associated_record_node';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: User: Last Name (field_user_lastname) */
  $handler->display->display_options['sorts']['field_user_lastname_value']['id'] = 'field_user_lastname_value';
  $handler->display->display_options['sorts']['field_user_lastname_value']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['sorts']['field_user_lastname_value']['field'] = 'field_user_lastname_value';
  $handler->display->display_options['sorts']['field_user_lastname_value']['expose']['label'] = 'Last Name';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  /* Filter criterion: Content: Status Code (field_cmr_status_code) */
  $handler->display->display_options['filters']['field_cmr_status_code_value']['id'] = 'field_cmr_status_code_value';
  $handler->display->display_options['filters']['field_cmr_status_code_value']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['filters']['field_cmr_status_code_value']['field'] = 'field_cmr_status_code_value';
  $handler->display->display_options['filters']['field_cmr_status_code_value']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['filters']['field_cmr_status_code_value']['value'] = array(
    'A' => 'A',
    'A-H' => 'A-H',
    'NA' => 'NA',
    'NC' => 'NC',
    'PN' => 'PN',
    'PN-A' => 'PN-A',
    'A-1' => 'A-1',
    'PN-4' => 'PN-4',
    'PN-5' => 'PN-5',
    'PN-A-1' => 'PN-A-1',
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['filters']['field_cmr_status_code_value']['expose']['operator_id'] = 'field_cmr_status_code_value_op';
  $handler->display->display_options['filters']['field_cmr_status_code_value']['expose']['label'] = 'Status Code (field_cmr_status_code)';
  $handler->display->display_options['filters']['field_cmr_status_code_value']['expose']['operator'] = 'field_cmr_status_code_value_op';
  $handler->display->display_options['filters']['field_cmr_status_code_value']['expose']['identifier'] = 'field_cmr_status_code_value';
  /* Filter criterion: User: Last Name (field_user_lastname) */
  $handler->display->display_options['filters']['field_user_lastname_value']['id'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['filters']['field_user_lastname_value']['field'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_lastname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['operator_id'] = 'field_user_lastname_value_op';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['operator'] = 'field_user_lastname_value_op';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['identifier'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    9 => 0,
    3 => 0,
    10 => 0,
    8 => 0,
    11 => 0,
  );

  /* Display: Active Clients Page */
  $handler = $view->new_display('page', 'Active Clients Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_user_client_id' => 'field_user_client_id',
    'name' => 'name',
    'field_user_company' => 'field_user_company',
    'field_user_worksheet_received' => 'field_user_worksheet_received',
    'field_user_waiver_auth_received' => 'field_user_waiver_auth_received',
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_client_level' => 'field_user_client_level',
    'field_cmr_status_code' => 'field_cmr_status_code',
    'field_user_firstname_1' => 'field_user_firstname_1',
    'field_user_lastname_1' => 'field_user_firstname_1',
    'field_user_coach' => 'field_user_firstname_1',
    'changed' => 'changed',
    'field_cmr_status_code_1' => 'field_cmr_status_code_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_user_client_id';
  $handler->display->display_options['style_options']['info'] = array(
    'field_user_client_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_company' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_worksheet_received' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_waiver_auth_received' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_client_level' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_status_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_user_lastname_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_coach' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_status_code_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Associated Record (field_cmr_associated_record) - reverse */
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['id'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['field'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['label'] = 'cmr';
  /* Relationship: User: Coach (field_user_coach) */
  $handler->display->display_options['relationships']['field_user_coach_uid']['id'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['field'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['label'] = 'coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Client ID */
  $handler->display->display_options['fields']['field_user_client_id']['id'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['table'] = 'field_data_field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['field'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  /* Field: User: Worksheet Received */
  $handler->display->display_options['fields']['field_user_worksheet_received']['id'] = 'field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['table'] = 'field_data_field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['field'] = 'field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Waiver Authorization Received */
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['id'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['table'] = 'field_data_field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['field'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  /* Field: User: Client Level */
  $handler->display->display_options['fields']['field_user_client_level']['id'] = 'field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['table'] = 'field_data_field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['field'] = 'field_user_client_level';
  /* Field: Content: Status Code */
  $handler->display->display_options['fields']['field_cmr_status_code']['id'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['field'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['relationship'] = 'reverse_field_cmr_associated_record_node';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname_1']['id'] = 'field_user_firstname_1';
  $handler->display->display_options['fields']['field_user_firstname_1']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname_1']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname_1']['relationship'] = 'field_user_coach_uid';
  $handler->display->display_options['fields']['field_user_firstname_1']['label'] = 'Coach';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname_1']['id'] = 'field_user_lastname_1';
  $handler->display->display_options['fields']['field_user_lastname_1']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['relationship'] = 'field_user_coach_uid';
  /* Field: User: Coach */
  $handler->display->display_options['fields']['field_user_coach']['id'] = 'field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['field'] = 'field_user_coach';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Status Code */
  $handler->display->display_options['fields']['field_cmr_status_code_1']['id'] = 'field_cmr_status_code_1';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['field'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  /* Filter criterion: Content: Status Code (field_cmr_status_code) */
  $handler->display->display_options['filters']['field_cmr_status_code_value']['id'] = 'field_cmr_status_code_value';
  $handler->display->display_options['filters']['field_cmr_status_code_value']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['filters']['field_cmr_status_code_value']['field'] = 'field_cmr_status_code_value';
  $handler->display->display_options['filters']['field_cmr_status_code_value']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['filters']['field_cmr_status_code_value']['value'] = array(
    'A' => 'A',
    'A-H' => 'A-H',
    'NA' => 'NA',
    'NC' => 'NC',
    'PN' => 'PN',
    'PN-A' => 'PN-A',
  );
  $handler->display->display_options['filters']['field_cmr_status_code_value']['expose']['operator_id'] = 'field_cmr_status_code_value_op';
  $handler->display->display_options['filters']['field_cmr_status_code_value']['expose']['label'] = 'Status Code (field_cmr_status_code)';
  $handler->display->display_options['filters']['field_cmr_status_code_value']['expose']['operator'] = 'field_cmr_status_code_value_op';
  $handler->display->display_options['filters']['field_cmr_status_code_value']['expose']['identifier'] = 'field_cmr_status_code_value';
  /* Filter criterion: User: Last Name (field_user_lastname) */
  $handler->display->display_options['filters']['field_user_lastname_value']['id'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['filters']['field_user_lastname_value']['field'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_lastname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['operator_id'] = 'field_user_lastname_value_op';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['operator'] = 'field_user_lastname_value_op';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['identifier'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    9 => 0,
    3 => 0,
    10 => 0,
    8 => 0,
    11 => 0,
  );
  $handler->display->display_options['path'] = 'admin/active-clients';

  /* Display: All Clients Page */
  $handler = $view->new_display('page', 'All Clients Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_user_client_id' => 'field_user_client_id',
    'name' => 'name',
    'field_user_company' => 'field_user_company',
    'field_user_worksheet_received' => 'field_user_worksheet_received',
    'field_user_waiver_auth_received' => 'field_user_waiver_auth_received',
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_client_level' => 'field_user_client_level',
    'field_cmr_status_code' => 'field_cmr_status_code',
    'field_user_firstname_1' => 'field_user_firstname_1',
    'field_user_lastname_1' => 'field_user_firstname_1',
    'field_user_coach' => 'field_user_firstname_1',
    'changed' => 'changed',
    'field_cmr_status_code_1' => 'field_cmr_status_code_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_user_client_id';
  $handler->display->display_options['style_options']['info'] = array(
    'field_user_client_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_company' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_worksheet_received' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_waiver_auth_received' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_client_level' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_status_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_user_lastname_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_coach' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_status_code_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Associated Record (field_cmr_associated_record) - reverse */
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['id'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['field'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['label'] = 'cmr';
  /* Relationship: User: Coach (field_user_coach) */
  $handler->display->display_options['relationships']['field_user_coach_uid']['id'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['field'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['label'] = 'coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Client ID */
  $handler->display->display_options['fields']['field_user_client_id']['id'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['table'] = 'field_data_field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['field'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  /* Field: User: Worksheet Received */
  $handler->display->display_options['fields']['field_user_worksheet_received']['id'] = 'field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['table'] = 'field_data_field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['field'] = 'field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Waiver Authorization Received */
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['id'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['table'] = 'field_data_field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['field'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  /* Field: User: Client Level */
  $handler->display->display_options['fields']['field_user_client_level']['id'] = 'field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['table'] = 'field_data_field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['field'] = 'field_user_client_level';
  /* Field: Content: Status Code */
  $handler->display->display_options['fields']['field_cmr_status_code']['id'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['field'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['relationship'] = 'reverse_field_cmr_associated_record_node';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname_1']['id'] = 'field_user_firstname_1';
  $handler->display->display_options['fields']['field_user_firstname_1']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname_1']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname_1']['relationship'] = 'field_user_coach_uid';
  $handler->display->display_options['fields']['field_user_firstname_1']['label'] = 'Coach';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname_1']['id'] = 'field_user_lastname_1';
  $handler->display->display_options['fields']['field_user_lastname_1']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['relationship'] = 'field_user_coach_uid';
  /* Field: User: Coach */
  $handler->display->display_options['fields']['field_user_coach']['id'] = 'field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['field'] = 'field_user_coach';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Status Code */
  $handler->display->display_options['fields']['field_cmr_status_code_1']['id'] = 'field_cmr_status_code_1';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['field'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['path'] = 'admin/all-clients';

  /* Display: Coach Clients Page - Active */
  $handler = $view->new_display('page', 'Coach Clients Page - Active', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Active Clients';
  $handler->display->display_options['display_description'] = 'Active Clients - link on Coach Dashboard';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'changed' => 'changed',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_firstname' => 'field_user_firstname',
    'field_cmr_status_code' => 'field_cmr_status_code',
    'field_user_coach' => 'field_user_coach',
    'field_user_client_id' => 'field_user_client_id',
    'field_user_firstname_1' => 'field_user_firstname_1',
    'field_user_lastname_1' => 'field_user_lastname_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_user_lastname';
  $handler->display->display_options['style_options']['info'] = array(
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_status_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_coach' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_client_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Active Clients Title';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Coach (field_user_coach) */
  $handler->display->display_options['relationships']['field_user_coach_uid']['id'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['field'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['label'] = 'coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['delta'] = '-1';
  /* Relationship: User: Associated Record (field_cmr_associated_record) - reverse */
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['id'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['field'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Client ID */
  $handler->display->display_options['fields']['field_user_client_id']['id'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['table'] = 'field_data_field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['field'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  /* Field: User: Assignment Date */
  $handler->display->display_options['fields']['field_user_assignment_date']['id'] = 'field_user_assignment_date';
  $handler->display->display_options['fields']['field_user_assignment_date']['table'] = 'field_data_field_user_assignment_date';
  $handler->display->display_options['fields']['field_user_assignment_date']['field'] = 'field_user_assignment_date';
  $handler->display->display_options['fields']['field_user_assignment_date']['relationship'] = 'field_user_coach_uid';
  $handler->display->display_options['fields']['field_user_assignment_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Waiver Authorization Received */
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['id'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['table'] = 'field_data_field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['field'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['label'] = 'Waiver  Received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Last Contact */
  $handler->display->display_options['fields']['field_cmr_last_contact']['id'] = 'field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['table'] = 'field_data_field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['field'] = 'field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['field_cmr_last_contact']['label'] = 'Date of Last Contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status Code */
  $handler->display->display_options['fields']['field_cmr_status_code']['id'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['field'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['field_cmr_status_code']['label'] = 'Code';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Coach (field_user_coach) */
  $handler->display->display_options['arguments']['field_user_coach_uid']['id'] = 'field_user_coach_uid';
  $handler->display->display_options['arguments']['field_user_coach_uid']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['arguments']['field_user_coach_uid']['field'] = 'field_user_coach_uid';
  $handler->display->display_options['arguments']['field_user_coach_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_coach_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_user_coach_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_coach_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_coach_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Last Name (field_user_lastname) */
  $handler->display->display_options['filters']['field_user_lastname_value']['id'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['filters']['field_user_lastname_value']['field'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_lastname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['operator_id'] = 'field_user_lastname_value_op';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['operator'] = 'field_user_lastname_value_op';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['identifier'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    9 => 0,
    3 => 0,
    10 => 0,
    8 => 0,
    11 => 0,
  );
  $handler->display->display_options['path'] = 'coach/clients/active';

  /* Display: Coach's All Clients Page */
  $handler = $view->new_display('page', 'Coach\'s All Clients Page', 'page_3');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'All Clients for [field_user_firstname_1] [field_user_lastname_1]';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Associated Record (field_cmr_associated_record) - reverse */
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['id'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['field'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['label'] = 'cmr';
  /* Relationship: User: Coach (field_user_coach) */
  $handler->display->display_options['relationships']['field_user_coach_uid']['id'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['field'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['label'] = 'coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Client ID */
  $handler->display->display_options['fields']['field_user_client_id']['id'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['table'] = 'field_data_field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['field'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  /* Field: User: Worksheet Received */
  $handler->display->display_options['fields']['field_user_worksheet_received']['id'] = 'field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['table'] = 'field_data_field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['field'] = 'field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Waiver Authorization Received */
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['id'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['table'] = 'field_data_field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['field'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  /* Field: User: Client Level */
  $handler->display->display_options['fields']['field_user_client_level']['id'] = 'field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['table'] = 'field_data_field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['field'] = 'field_user_client_level';
  /* Field: Content: Status Code */
  $handler->display->display_options['fields']['field_cmr_status_code']['id'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['field'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['relationship'] = 'reverse_field_cmr_associated_record_node';
  /* Field: User: Coach */
  $handler->display->display_options['fields']['field_user_coach']['id'] = 'field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['field'] = 'field_user_coach';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Status Code */
  $handler->display->display_options['fields']['field_cmr_status_code_1']['id'] = 'field_cmr_status_code_1';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['field'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['relationship'] = 'reverse_field_cmr_associated_record_node';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname_1']['id'] = 'field_user_firstname_1';
  $handler->display->display_options['fields']['field_user_firstname_1']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname_1']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname_1']['relationship'] = 'field_user_coach_uid';
  $handler->display->display_options['fields']['field_user_firstname_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname_1']['id'] = 'field_user_lastname_1';
  $handler->display->display_options['fields']['field_user_lastname_1']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['relationship'] = 'field_user_coach_uid';
  $handler->display->display_options['fields']['field_user_lastname_1']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Coach (field_user_coach) */
  $handler->display->display_options['arguments']['field_user_coach_uid']['id'] = 'field_user_coach_uid';
  $handler->display->display_options['arguments']['field_user_coach_uid']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['arguments']['field_user_coach_uid']['field'] = 'field_user_coach_uid';
  $handler->display->display_options['arguments']['field_user_coach_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_coach_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_user_coach_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_coach_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_coach_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'coach/clients';

  /* Display: Coach Follow Up Page */
  $handler = $view->new_display('page', 'Coach Follow Up Page', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Flagged for Follow Up';
  $handler->display->display_options['display_description'] = 'Entries in Follow-Up';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    10 => '10',
    9 => '9',
    11 => '11',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_user_client_id' => 'field_user_client_id',
    'field_cmr_last_contact' => 'field_cmr_last_contact',
    'name' => 'name',
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_coach' => 'field_user_coach',
    'field_user_follow_up' => 'field_user_follow_up',
    'field_user_follow_up_notes' => 'field_user_follow_up_notes',
  );
  $handler->display->display_options['style_options']['default'] = 'field_user_client_id';
  $handler->display->display_options['style_options']['info'] = array(
    'field_user_client_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_last_contact' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_coach' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_follow_up' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_follow_up_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Associated Record (field_cmr_associated_record) - reverse */
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['id'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['field'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['label'] = 'cmr';
  /* Relationship: User: Coach (field_user_coach) */
  $handler->display->display_options['relationships']['field_user_coach_uid']['id'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['field'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Client ID */
  $handler->display->display_options['fields']['field_user_client_id']['id'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['table'] = 'field_data_field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['field'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Last Contact */
  $handler->display->display_options['fields']['field_cmr_last_contact']['id'] = 'field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['table'] = 'field_data_field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['field'] = 'field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['field_cmr_last_contact']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  /* Field: User: Coach */
  $handler->display->display_options['fields']['field_user_coach']['id'] = 'field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['field'] = 'field_user_coach';
  /* Field: User: Follow-Up */
  $handler->display->display_options['fields']['field_user_follow_up']['id'] = 'field_user_follow_up';
  $handler->display->display_options['fields']['field_user_follow_up']['table'] = 'field_data_field_user_follow_up';
  $handler->display->display_options['fields']['field_user_follow_up']['field'] = 'field_user_follow_up';
  /* Field: User: Follow-Up Notes */
  $handler->display->display_options['fields']['field_user_follow_up_notes']['id'] = 'field_user_follow_up_notes';
  $handler->display->display_options['fields']['field_user_follow_up_notes']['table'] = 'field_data_field_user_follow_up_notes';
  $handler->display->display_options['fields']['field_user_follow_up_notes']['field'] = 'field_user_follow_up_notes';
  $handler->display->display_options['fields']['field_user_follow_up_notes']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_user_follow_up_notes']['element_type'] = 'em';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Coach (field_user_coach) */
  $handler->display->display_options['arguments']['field_user_coach_uid']['id'] = 'field_user_coach_uid';
  $handler->display->display_options['arguments']['field_user_coach_uid']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['arguments']['field_user_coach_uid']['field'] = 'field_user_coach_uid';
  $handler->display->display_options['arguments']['field_user_coach_uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_user_coach_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_coach_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_coach_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  /* Filter criterion: User: Follow-Up (field_user_follow_up) */
  $handler->display->display_options['filters']['field_user_follow_up_value']['id'] = 'field_user_follow_up_value';
  $handler->display->display_options['filters']['field_user_follow_up_value']['table'] = 'field_data_field_user_follow_up';
  $handler->display->display_options['filters']['field_user_follow_up_value']['field'] = 'field_user_follow_up_value';
  $handler->display->display_options['filters']['field_user_follow_up_value']['value'] = array(
    'yes' => 'yes',
  );
  $handler->display->display_options['filters']['field_user_follow_up_value']['group'] = 1;
  /* Filter criterion: User: Last Name (field_user_lastname) */
  $handler->display->display_options['filters']['field_user_lastname_value']['id'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['filters']['field_user_lastname_value']['field'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_lastname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_lastname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['operator_id'] = 'field_user_lastname_value_op';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['operator'] = 'field_user_lastname_value_op';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['identifier'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    9 => 0,
    3 => 0,
    10 => 0,
    8 => 0,
    11 => 0,
  );
  /* Filter criterion: User: Follow-Up Notes (field_user_follow_up_notes) */
  $handler->display->display_options['filters']['field_user_follow_up_notes_value']['id'] = 'field_user_follow_up_notes_value';
  $handler->display->display_options['filters']['field_user_follow_up_notes_value']['table'] = 'field_data_field_user_follow_up_notes';
  $handler->display->display_options['filters']['field_user_follow_up_notes_value']['field'] = 'field_user_follow_up_notes_value';
  $handler->display->display_options['filters']['field_user_follow_up_notes_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_user_follow_up_notes_value']['group'] = 1;
  $handler->display->display_options['path'] = 'coach/clients/follow-up';

  /* Display: Case Manager Coach's All Clients Page */
  $handler = $view->new_display('page', 'Case Manager Coach\'s All Clients Page', 'page_5');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'All Clients for [field_user_firstname_1] [field_user_lastname_1]';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Associated Record (field_cmr_associated_record) - reverse */
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['id'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['field'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['label'] = 'cmr';
  /* Relationship: User: Coach (field_user_coach) */
  $handler->display->display_options['relationships']['field_user_coach_uid']['id'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['field'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['label'] = 'coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Client ID */
  $handler->display->display_options['fields']['field_user_client_id']['id'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['table'] = 'field_data_field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['field'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  /* Field: User: Worksheet Received */
  $handler->display->display_options['fields']['field_user_worksheet_received']['id'] = 'field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['table'] = 'field_data_field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['field'] = 'field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Waiver Authorization Received */
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['id'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['table'] = 'field_data_field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['field'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  /* Field: User: Client Level */
  $handler->display->display_options['fields']['field_user_client_level']['id'] = 'field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['table'] = 'field_data_field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['field'] = 'field_user_client_level';
  /* Field: Content: Status Code */
  $handler->display->display_options['fields']['field_cmr_status_code']['id'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['field'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['relationship'] = 'reverse_field_cmr_associated_record_node';
  /* Field: User: Coach */
  $handler->display->display_options['fields']['field_user_coach']['id'] = 'field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['field'] = 'field_user_coach';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Status Code */
  $handler->display->display_options['fields']['field_cmr_status_code_1']['id'] = 'field_cmr_status_code_1';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['field'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code_1']['relationship'] = 'reverse_field_cmr_associated_record_node';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname_1']['id'] = 'field_user_firstname_1';
  $handler->display->display_options['fields']['field_user_firstname_1']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname_1']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname_1']['relationship'] = 'field_user_coach_uid';
  $handler->display->display_options['fields']['field_user_firstname_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname_1']['id'] = 'field_user_lastname_1';
  $handler->display->display_options['fields']['field_user_lastname_1']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['relationship'] = 'field_user_coach_uid';
  $handler->display->display_options['fields']['field_user_lastname_1']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Case Manager (field_user_case_manager) */
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['id'] = 'field_user_case_manager_uid';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['table'] = 'field_data_field_user_case_manager';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['field'] = 'field_user_case_manager_uid';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['relationship'] = 'field_user_coach_uid';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'case-manager/clients';

  /* Display: Case Manager Coach Active Clients */
  $handler = $view->new_display('page', 'Case Manager Coach Active Clients', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Active Clients';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'changed' => 'changed',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_firstname' => 'field_user_firstname',
    'field_cmr_status_code' => 'field_cmr_status_code',
    'field_user_coach' => 'field_user_coach',
    'field_user_client_id' => 'field_user_client_id',
    'field_user_firstname_1' => 'field_user_firstname_1',
    'field_user_lastname_1' => 'field_user_lastname_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_user_lastname';
  $handler->display->display_options['style_options']['info'] = array(
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_status_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_coach' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_client_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Active Clients Title';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Coach (field_user_coach) */
  $handler->display->display_options['relationships']['field_user_coach_uid']['id'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['field'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['label'] = 'coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['delta'] = '-1';
  /* Relationship: User: Associated Record (field_cmr_associated_record) - reverse */
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['id'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['field'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Client ID */
  $handler->display->display_options['fields']['field_user_client_id']['id'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['table'] = 'field_data_field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['field'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  /* Field: User: Assignment Date */
  $handler->display->display_options['fields']['field_user_assignment_date']['id'] = 'field_user_assignment_date';
  $handler->display->display_options['fields']['field_user_assignment_date']['table'] = 'field_data_field_user_assignment_date';
  $handler->display->display_options['fields']['field_user_assignment_date']['field'] = 'field_user_assignment_date';
  $handler->display->display_options['fields']['field_user_assignment_date']['relationship'] = 'field_user_coach_uid';
  $handler->display->display_options['fields']['field_user_assignment_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Waiver Authorization Received */
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['id'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['table'] = 'field_data_field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['field'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['label'] = 'Waiver  Received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Last Contact */
  $handler->display->display_options['fields']['field_cmr_last_contact']['id'] = 'field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['table'] = 'field_data_field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['field'] = 'field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['field_cmr_last_contact']['label'] = 'Date of Last Contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status Code */
  $handler->display->display_options['fields']['field_cmr_status_code']['id'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['field'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['field_cmr_status_code']['label'] = 'Code';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Case Manager (field_user_case_manager) */
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['id'] = 'field_user_case_manager_uid';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['table'] = 'field_data_field_user_case_manager';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['field'] = 'field_user_case_manager_uid';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['relationship'] = 'field_user_coach_uid';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_case_manager_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Last Name (field_user_lastname) */
  $handler->display->display_options['filters']['field_user_lastname_value']['id'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['filters']['field_user_lastname_value']['field'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_lastname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['operator_id'] = 'field_user_lastname_value_op';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['operator'] = 'field_user_lastname_value_op';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['identifier'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    9 => 0,
    3 => 0,
    10 => 0,
    8 => 0,
    11 => 0,
  );
  $handler->display->display_options['path'] = 'case-manager/clients/active';
  $export['active_clients'] = $view;

  $view = new view();
  $view->name = 'case_management_reports';
  $view->description = 'Basic CMR form';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Case Management Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Case Management Reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Report Submitted';
  $handler->display->display_options['fields']['created']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Service Started */
  $handler->display->display_options['fields']['field_cmr_service_started']['id'] = 'field_cmr_service_started';
  $handler->display->display_options['fields']['field_cmr_service_started']['table'] = 'field_data_field_cmr_service_started';
  $handler->display->display_options['fields']['field_cmr_service_started']['field'] = 'field_cmr_service_started';
  $handler->display->display_options['fields']['field_cmr_service_started']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_cmr_service_started']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cmr_service_started']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Last Contact */
  $handler->display->display_options['fields']['field_cmr_last_contact']['id'] = 'field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['table'] = 'field_data_field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['field'] = 'field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_cmr_last_contact']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cmr_last_contact']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Inactivation Date */
  $handler->display->display_options['fields']['field_cmr_inactivation_date']['id'] = 'field_cmr_inactivation_date';
  $handler->display->display_options['fields']['field_cmr_inactivation_date']['table'] = 'field_data_field_cmr_inactivation_date';
  $handler->display->display_options['fields']['field_cmr_inactivation_date']['field'] = 'field_cmr_inactivation_date';
  $handler->display->display_options['fields']['field_cmr_inactivation_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_cmr_inactivation_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cmr_inactivation_date']['empty'] = '<em>still active</em>';
  $handler->display->display_options['fields']['field_cmr_inactivation_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status Code */
  $handler->display->display_options['fields']['field_cmr_status_code']['id'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['field'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['label'] = 'Code';
  $handler->display->display_options['fields']['field_cmr_status_code']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_cmr_status_code']['element_wrapper_type'] = 'div';
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_cmr_hours']['id'] = 'field_cmr_hours';
  $handler->display->display_options['fields']['field_cmr_hours']['table'] = 'field_data_field_cmr_hours';
  $handler->display->display_options['fields']['field_cmr_hours']['field'] = 'field_cmr_hours';
  $handler->display->display_options['fields']['field_cmr_hours']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_cmr_hours']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cmr_hours']['empty'] = 'no time reported';
  $handler->display->display_options['fields']['field_cmr_hours']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Phase */
  $handler->display->display_options['fields']['field_cmr_phase']['id'] = 'field_cmr_phase';
  $handler->display->display_options['fields']['field_cmr_phase']['table'] = 'field_data_field_cmr_phase';
  $handler->display->display_options['fields']['field_cmr_phase']['field'] = 'field_cmr_phase';
  $handler->display->display_options['fields']['field_cmr_phase']['label'] = 'Phase(s)';
  $handler->display->display_options['fields']['field_cmr_phase']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_cmr_phase']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cmr_phase']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cmr_phase']['empty'] = '<em>no Phase of Service reported</em>';
  /* Field: Content: Service Fee */
  $handler->display->display_options['fields']['field_cmr_service_fee']['id'] = 'field_cmr_service_fee';
  $handler->display->display_options['fields']['field_cmr_service_fee']['table'] = 'field_data_field_cmr_service_fee';
  $handler->display->display_options['fields']['field_cmr_service_fee']['field'] = 'field_cmr_service_fee';
  $handler->display->display_options['fields']['field_cmr_service_fee']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_cmr_service_fee']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cmr_service_fee']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_cmr_remarks']['id'] = 'field_cmr_remarks';
  $handler->display->display_options['fields']['field_cmr_remarks']['table'] = 'field_data_field_cmr_remarks';
  $handler->display->display_options['fields']['field_cmr_remarks']['field'] = 'field_cmr_remarks';
  $handler->display->display_options['fields']['field_cmr_remarks']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_cmr_remarks']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cmr_remarks']['type'] = 'text_plain';
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['label'] = '';
  $handler->display->display_options['fields']['comments_link']['element_label_type'] = 'h6';
  $handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p>&nbsp;</p><hr><p>&nbsp;</p>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Associated Record (field_cmr_associated_record) */
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['id'] = 'field_cmr_associated_record_uid';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['table'] = 'field_data_field_cmr_associated_record';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['field'] = 'field_cmr_associated_record_uid';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cmr' => 'cmr',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/cmr">Create New CMR</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['path'] = 'user/%/case-management-reports';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Case Management Reports';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: CMR Block for User View */
  $handler = $view->new_display('block', 'CMR Block for User View', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Case Management';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Associated Record (field_cmr_associated_record) */
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['id'] = 'field_cmr_associated_record_uid';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['table'] = 'field_data_field_cmr_associated_record';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['field'] = 'field_cmr_associated_record_uid';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_cmr_associated_record_uid']['validate_options']['type'] = 'either';
  $export['case_management_reports'] = $view;

  $view = new view();
  $view->name = 'client_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Client Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Client Info';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_client_level' => 'field_user_client_level',
    'field_user_company' => 'field_user_company',
    'field_user_waiver_auth_received' => 'field_user_waiver_auth_received',
    'login' => 'login',
    'field_user_follow_up' => 'field_user_follow_up',
    'field_user_follow_up_notes' => 'field_user_follow_up_notes',
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  /* Field: User: Client Level */
  $handler->display->display_options['fields']['field_user_client_level']['id'] = 'field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['table'] = 'field_data_field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['field'] = 'field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['label'] = 'Service Level';
  $handler->display->display_options['fields']['field_user_client_level']['element_label_type'] = 'h5';
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['element_label_type'] = 'h5';
  /* Field: User: Waiver Authorization Received */
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['id'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['table'] = 'field_data_field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['field'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['label'] = 'Waiver/Authorization Received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['empty'] = '<em>not received</em>';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['login']['date_format'] = 'short';
  /* Field: User: Webform submission count */
  $handler->display->display_options['fields']['webform_submission_count_user']['id'] = 'webform_submission_count_user';
  $handler->display->display_options['fields']['webform_submission_count_user']['table'] = 'users';
  $handler->display->display_options['fields']['webform_submission_count_user']['field'] = 'webform_submission_count_user';
  $handler->display->display_options['fields']['webform_submission_count_user']['label'] = 'Webforms Submitted';
  $handler->display->display_options['fields']['webform_submission_count_user']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['webform_submission_count_user']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['webform_submission_count_user']['empty_zero'] = TRUE;
  /* Field: User: Follow-Up */
  $handler->display->display_options['fields']['field_user_follow_up']['id'] = 'field_user_follow_up';
  $handler->display->display_options['fields']['field_user_follow_up']['table'] = 'field_data_field_user_follow_up';
  $handler->display->display_options['fields']['field_user_follow_up']['field'] = 'field_user_follow_up';
  $handler->display->display_options['fields']['field_user_follow_up']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_user_follow_up']['hide_empty'] = TRUE;
  /* Field: User: Follow-Up Notes */
  $handler->display->display_options['fields']['field_user_follow_up_notes']['id'] = 'field_user_follow_up_notes';
  $handler->display->display_options['fields']['field_user_follow_up_notes']['table'] = 'field_data_field_user_follow_up_notes';
  $handler->display->display_options['fields']['field_user_follow_up_notes']['field'] = 'field_user_follow_up_notes';
  $handler->display->display_options['fields']['field_user_follow_up_notes']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_user_follow_up_notes']['hide_empty'] = TRUE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Client Info';
  $export['client_info'] = $view;

  $view = new view();
  $view->name = 'cmr_comments';
  $view->description = 'List of Comments posted to CMRs';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CMR Comments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CMR Comments and Replies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    10 => '10',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'field_cmr_associated_record' => 'field_cmr_associated_record',
    'last_comment_name' => 'last_comment_name',
    'title' => 'title',
    'body' => 'body',
    'new_comments' => 'new_comments',
    'last_updated' => 'last_updated',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_associated_record' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'new_comments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_updated' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'cid';
  /* Field: Content: Associated Record */
  $handler->display->display_options['fields']['field_ncf_associated_record']['id'] = 'field_ncf_associated_record';
  $handler->display->display_options['fields']['field_ncf_associated_record']['table'] = 'field_data_field_ncf_associated_record';
  $handler->display->display_options['fields']['field_ncf_associated_record']['field'] = 'field_ncf_associated_record';
  /* Field: Content: Last comment author */
  $handler->display->display_options['fields']['last_comment_name']['id'] = 'last_comment_name';
  $handler->display->display_options['fields']['last_comment_name']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_name']['field'] = 'last_comment_name';
  /* Field: Comment: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'comment';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'cid';
  /* Field: Comment: Delete link */
  $handler->display->display_options['fields']['delete_comment']['id'] = 'delete_comment';
  $handler->display->display_options['fields']['delete_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['delete_comment']['field'] = 'delete_comment';
  $handler->display->display_options['fields']['delete_comment']['relationship'] = 'cid';
  /* Field: Comment: Reply-to link */
  $handler->display->display_options['fields']['replyto_comment']['id'] = 'replyto_comment';
  $handler->display->display_options['fields']['replyto_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['replyto_comment']['field'] = 'replyto_comment';
  $handler->display->display_options['fields']['replyto_comment']['relationship'] = 'cid';
  /* Field: Comment: Edit link */
  $handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['relationship'] = 'cid';
  /* Sort criterion: Content: Last comment author */
  $handler->display->display_options['sorts']['last_comment_name']['id'] = 'last_comment_name';
  $handler->display->display_options['sorts']['last_comment_name']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_comment_name']['field'] = 'last_comment_name';
  $handler->display->display_options['sorts']['last_comment_name']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['last_comment_name']['expose']['label'] = 'Last comment author';
  /* Sort criterion: Content: Last comment time */
  $handler->display->display_options['sorts']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['granularity'] = 'minute';
  /* Sort criterion: Content: Comment count */
  $handler->display->display_options['sorts']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['comment_count']['expose']['label'] = 'Comment count';

  /* Display: Admin CMR Comments */
  $handler = $view->new_display('page', 'Admin CMR Comments', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'field_ncf_associated_record' => 'field_ncf_associated_record',
    'changed' => 'changed',
    'name' => 'name',
    'last_comment_name' => 'last_comment_name',
    'comment_body' => 'comment_body',
    'replyto_comment' => 'replyto_comment',
    'edit_comment' => 'edit_comment',
    'delete_comment' => 'delete_comment',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ncf_associated_record' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'replyto_comment' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_comment' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'cid';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Associated Record */
  $handler->display->display_options['fields']['field_ncf_associated_record']['id'] = 'field_ncf_associated_record';
  $handler->display->display_options['fields']['field_ncf_associated_record']['table'] = 'field_data_field_ncf_associated_record';
  $handler->display->display_options['fields']['field_ncf_associated_record']['field'] = 'field_ncf_associated_record';
  /* Field: Comment: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'comment';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'cid';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'cid';
  /* Field: Content: Last comment author */
  $handler->display->display_options['fields']['last_comment_name']['id'] = 'last_comment_name';
  $handler->display->display_options['fields']['last_comment_name']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_name']['field'] = 'last_comment_name';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  /* Field: Comment: Reply-to link */
  $handler->display->display_options['fields']['replyto_comment']['id'] = 'replyto_comment';
  $handler->display->display_options['fields']['replyto_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['replyto_comment']['field'] = 'replyto_comment';
  $handler->display->display_options['fields']['replyto_comment']['relationship'] = 'cid';
  $handler->display->display_options['fields']['replyto_comment']['label'] = '';
  $handler->display->display_options['fields']['replyto_comment']['element_label_colon'] = FALSE;
  /* Field: Comment: Edit link */
  $handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['relationship'] = 'cid';
  $handler->display->display_options['fields']['edit_comment']['label'] = '';
  $handler->display->display_options['fields']['edit_comment']['element_label_colon'] = FALSE;
  /* Field: Comment: Delete link */
  $handler->display->display_options['fields']['delete_comment']['id'] = 'delete_comment';
  $handler->display->display_options['fields']['delete_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['delete_comment']['field'] = 'delete_comment';
  $handler->display->display_options['fields']['delete_comment']['relationship'] = 'cid';
  $handler->display->display_options['fields']['delete_comment']['label'] = '';
  $handler->display->display_options['fields']['delete_comment']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last comment author */
  $handler->display->display_options['sorts']['last_comment_name']['id'] = 'last_comment_name';
  $handler->display->display_options['sorts']['last_comment_name']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_comment_name']['field'] = 'last_comment_name';
  $handler->display->display_options['sorts']['last_comment_name']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['last_comment_name']['expose']['label'] = 'Last comment author';
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'cid';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Comment: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'comment';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['relationship'] = 'cid';
  $handler->display->display_options['filters']['created']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'cmr-comments';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'CMR Comments';
  $handler->display->display_options['menu']['description'] = 'Current Comments for CMR Review';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cmr_comments'] = $view;

  $view = new view();
  $view->name = 'cmr_summary';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'CMR Summary';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CMR Summary';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname_1' => 'field_user_lastname_1',
    'field_user_firstname_1' => 'field_user_firstname_1',
    'field_user_worksheet_received' => 'field_user_worksheet_received',
    'field_user_waiver_auth_received' => 'field_user_waiver_auth_received',
    'field_cmr_service_started' => 'field_cmr_service_started',
    'field_user_company' => 'field_user_company',
    'field_user_client_level' => 'field_user_client_level',
    'field_cmr_last_contact' => 'field_cmr_last_contact',
    'field_cmr_inactivation_date' => 'field_cmr_inactivation_date',
    'field_cmr_status_code' => 'field_cmr_status_code',
    'field_cmr_hours' => 'field_cmr_hours',
    'field_cmr_phase' => 'field_cmr_phase',
    'field_cmr_service_fee' => 'field_cmr_service_fee',
    'field_cmr_remarks' => 'field_cmr_remarks',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_worksheet_received' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_waiver_auth_received' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_service_started' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_company' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_client_level' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_last_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_inactivation_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_status_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_hours' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_phase' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_service_fee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmr_remarks' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: User: Associated Record (field_cmr_associated_record) - reverse */
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['id'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['field'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['relationships']['reverse_field_cmr_associated_record_node']['label'] = 'cmr';
  /* Relationship: User: Coach (field_user_coach) */
  $handler->display->display_options['relationships']['field_user_coach_uid']['id'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['field'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['delta'] = '-1';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname_1']['id'] = 'field_user_lastname_1';
  $handler->display->display_options['fields']['field_user_lastname_1']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['relationship'] = 'field_user_coach_uid';
  $handler->display->display_options['fields']['field_user_lastname_1']['label'] = 'Coach Last';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname_1']['id'] = 'field_user_firstname_1';
  $handler->display->display_options['fields']['field_user_firstname_1']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname_1']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname_1']['relationship'] = 'field_user_coach_uid';
  $handler->display->display_options['fields']['field_user_firstname_1']['label'] = 'Coach First';
  /* Field: User: Worksheet Received */
  $handler->display->display_options['fields']['field_user_worksheet_received']['id'] = 'field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['table'] = 'field_data_field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['field'] = 'field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Waiver Authorization Received */
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['id'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['table'] = 'field_data_field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['field'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Service Started */
  $handler->display->display_options['fields']['field_cmr_service_started']['id'] = 'field_cmr_service_started';
  $handler->display->display_options['fields']['field_cmr_service_started']['table'] = 'field_data_field_cmr_service_started';
  $handler->display->display_options['fields']['field_cmr_service_started']['field'] = 'field_cmr_service_started';
  $handler->display->display_options['fields']['field_cmr_service_started']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['field_cmr_service_started']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  /* Field: User: Client Level */
  $handler->display->display_options['fields']['field_user_client_level']['id'] = 'field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['table'] = 'field_data_field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['field'] = 'field_user_client_level';
  /* Field: Content: Last Contact */
  $handler->display->display_options['fields']['field_cmr_last_contact']['id'] = 'field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['table'] = 'field_data_field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['field'] = 'field_cmr_last_contact';
  $handler->display->display_options['fields']['field_cmr_last_contact']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['field_cmr_last_contact']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Inactivation Date */
  $handler->display->display_options['fields']['field_cmr_inactivation_date']['id'] = 'field_cmr_inactivation_date';
  $handler->display->display_options['fields']['field_cmr_inactivation_date']['table'] = 'field_data_field_cmr_inactivation_date';
  $handler->display->display_options['fields']['field_cmr_inactivation_date']['field'] = 'field_cmr_inactivation_date';
  $handler->display->display_options['fields']['field_cmr_inactivation_date']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['field_cmr_inactivation_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status Code */
  $handler->display->display_options['fields']['field_cmr_status_code']['id'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['table'] = 'field_data_field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['field'] = 'field_cmr_status_code';
  $handler->display->display_options['fields']['field_cmr_status_code']['relationship'] = 'reverse_field_cmr_associated_record_node';
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_cmr_hours']['id'] = 'field_cmr_hours';
  $handler->display->display_options['fields']['field_cmr_hours']['table'] = 'field_data_field_cmr_hours';
  $handler->display->display_options['fields']['field_cmr_hours']['field'] = 'field_cmr_hours';
  $handler->display->display_options['fields']['field_cmr_hours']['relationship'] = 'reverse_field_cmr_associated_record_node';
  /* Field: Content: Phase */
  $handler->display->display_options['fields']['field_cmr_phase']['id'] = 'field_cmr_phase';
  $handler->display->display_options['fields']['field_cmr_phase']['table'] = 'field_data_field_cmr_phase';
  $handler->display->display_options['fields']['field_cmr_phase']['field'] = 'field_cmr_phase';
  $handler->display->display_options['fields']['field_cmr_phase']['relationship'] = 'reverse_field_cmr_associated_record_node';
  /* Field: Content: Service Fee */
  $handler->display->display_options['fields']['field_cmr_service_fee']['id'] = 'field_cmr_service_fee';
  $handler->display->display_options['fields']['field_cmr_service_fee']['table'] = 'field_data_field_cmr_service_fee';
  $handler->display->display_options['fields']['field_cmr_service_fee']['field'] = 'field_cmr_service_fee';
  $handler->display->display_options['fields']['field_cmr_service_fee']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['field_cmr_service_fee']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_cmr_remarks']['id'] = 'field_cmr_remarks';
  $handler->display->display_options['fields']['field_cmr_remarks']['table'] = 'field_data_field_cmr_remarks';
  $handler->display->display_options['fields']['field_cmr_remarks']['field'] = 'field_cmr_remarks';
  $handler->display->display_options['fields']['field_cmr_remarks']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['field_cmr_remarks']['alter']['strip_tags'] = TRUE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['created']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    9 => 0,
    3 => 0,
    10 => 0,
    8 => 0,
    11 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/cmr-summary';

  /* Display: Coach CMR Page */
  $handler = $view->new_display('page', 'Coach CMR Page', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'coach/cmr';
  $export['cmr_summary'] = $view;

  $view = new view();
  $view->name = 'contact_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Contact List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'WHG Internal Contact List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_firstname' => 'field_user_firstname',
    'field_user_address' => 'field_user_address',
    'field_user_phone' => 'field_user_phone',
    'field_user_alt_phone' => 'field_user_alt_phone',
    'mail' => 'mail',
    'field_user_personal_email' => 'field_user_personal_email',
    'rid' => 'rid',
    'field_user_coach' => 'field_user_coach',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_phone' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_alt_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_personal_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_coach' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  /* Field: User: Address */
  $handler->display->display_options['fields']['field_user_address']['id'] = 'field_user_address';
  $handler->display->display_options['fields']['field_user_address']['table'] = 'field_data_field_user_address';
  $handler->display->display_options['fields']['field_user_address']['field'] = 'field_user_address';
  $handler->display->display_options['fields']['field_user_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_user_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_user_phone']['id'] = 'field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['table'] = 'field_data_field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['field'] = 'field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['label'] = 'Primary Phone';
  $handler->display->display_options['fields']['field_user_phone']['delta_offset'] = '0';
  /* Field: User: Alt Phone */
  $handler->display->display_options['fields']['field_user_alt_phone']['id'] = 'field_user_alt_phone';
  $handler->display->display_options['fields']['field_user_alt_phone']['table'] = 'field_data_field_user_alt_phone';
  $handler->display->display_options['fields']['field_user_alt_phone']['field'] = 'field_user_alt_phone';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Personal Email */
  $handler->display->display_options['fields']['field_user_personal_email']['id'] = 'field_user_personal_email';
  $handler->display->display_options['fields']['field_user_personal_email']['table'] = 'field_data_field_user_personal_email';
  $handler->display->display_options['fields']['field_user_personal_email']['field'] = 'field_user_personal_email';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  /* Field: User: Coach */
  $handler->display->display_options['fields']['field_user_coach']['id'] = 'field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['field'] = 'field_user_coach';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    9 => '9',
    3 => '3',
    10 => '10',
    11 => '11',
  );

  /* Display: WHG Contact List */
  $handler = $view->new_display('page', 'WHG Contact List', 'page');
  $handler->display->display_options['display_description'] = 'Contact Informatin for Current WHG Consultants';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  /* Field: User: Address */
  $handler->display->display_options['fields']['field_user_address']['id'] = 'field_user_address';
  $handler->display->display_options['fields']['field_user_address']['table'] = 'field_data_field_user_address';
  $handler->display->display_options['fields']['field_user_address']['field'] = 'field_user_address';
  $handler->display->display_options['fields']['field_user_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_user_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_user_phone']['id'] = 'field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['table'] = 'field_data_field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['field'] = 'field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['label'] = 'Primary Phone';
  $handler->display->display_options['fields']['field_user_phone']['delta_offset'] = '0';
  /* Field: User: Alt Phone */
  $handler->display->display_options['fields']['field_user_alt_phone']['id'] = 'field_user_alt_phone';
  $handler->display->display_options['fields']['field_user_alt_phone']['table'] = 'field_data_field_user_alt_phone';
  $handler->display->display_options['fields']['field_user_alt_phone']['field'] = 'field_user_alt_phone';
  /* Field: User: Fax */
  $handler->display->display_options['fields']['field_user_fax']['id'] = 'field_user_fax';
  $handler->display->display_options['fields']['field_user_fax']['table'] = 'field_data_field_user_fax';
  $handler->display->display_options['fields']['field_user_fax']['field'] = 'field_user_fax';
  /* Field: User: Personal Email */
  $handler->display->display_options['fields']['field_user_personal_email']['id'] = 'field_user_personal_email';
  $handler->display->display_options['fields']['field_user_personal_email']['table'] = 'field_data_field_user_personal_email';
  $handler->display->display_options['fields']['field_user_personal_email']['field'] = 'field_user_personal_email';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  /* Field: User: Coach */
  $handler->display->display_options['fields']['field_user_coach']['id'] = 'field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['field'] = 'field_user_coach';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    9 => '9',
    3 => '3',
    11 => '11',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: User: Last Name (field_user_lastname) */
  $handler->display->display_options['filters']['field_user_lastname_value']['id'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['filters']['field_user_lastname_value']['field'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_user_lastname_value']['group'] = 1;
  /* Filter criterion: User: First Name (field_user_firstname) */
  $handler->display->display_options['filters']['field_user_firstname_value']['id'] = 'field_user_firstname_value';
  $handler->display->display_options['filters']['field_user_firstname_value']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['filters']['field_user_firstname_value']['field'] = 'field_user_firstname_value';
  $handler->display->display_options['filters']['field_user_firstname_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_user_firstname_value']['value'] = 'NA';
  $handler->display->display_options['filters']['field_user_firstname_value']['group'] = 1;
  $handler->display->display_options['path'] = 'contact-list';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['contact_list'] = $view;

  $view = new view();
  $view->name = 'user_snapshot';
  $view->description = 'CMR Sidebar w/client info';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Snapshot';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Snapshot:';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_worksheet_received' => 'field_user_worksheet_received',
    'field_user_waiver_auth_received' => 'field_user_waiver_auth_received',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'ID#';
  $handler->display->display_options['fields']['uid']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['uid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['uid']['empty_zero'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Client Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h6';
  $handler->display->display_options['fields']['name']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: User: Coach */
  $handler->display->display_options['fields']['field_user_coach']['id'] = 'field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['field'] = 'field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['label'] = '';
  $handler->display->display_options['fields']['field_user_coach']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_coach']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_user_coach']['element_label_colon'] = FALSE;
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['element_label_type'] = 'strong';
  /* Field: User: Client Level */
  $handler->display->display_options['fields']['field_user_client_level']['id'] = 'field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['table'] = 'field_data_field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['field'] = 'field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['label'] = 'Service Level';
  $handler->display->display_options['fields']['field_user_client_level']['element_label_type'] = 'strong';
  /* Field: User: Assignment Date */
  $handler->display->display_options['fields']['field_user_assignment_date']['id'] = 'field_user_assignment_date';
  $handler->display->display_options['fields']['field_user_assignment_date']['table'] = 'field_data_field_user_assignment_date';
  $handler->display->display_options['fields']['field_user_assignment_date']['field'] = 'field_user_assignment_date';
  $handler->display->display_options['fields']['field_user_assignment_date']['label'] = 'Assigned';
  $handler->display->display_options['fields']['field_user_assignment_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_user_assignment_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Waiver Authorization Received */
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['id'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['table'] = 'field_data_field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['field'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['label'] = 'Waiver/Authorization';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['label'] = 'Last Login';
  $handler->display->display_options['fields']['login']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['login']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['login']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['login']['date_format'] = 'time ago';
  /* Field: User: Follow-Up */
  $handler->display->display_options['fields']['field_user_follow_up']['id'] = 'field_user_follow_up';
  $handler->display->display_options['fields']['field_user_follow_up']['table'] = 'field_data_field_user_follow_up';
  $handler->display->display_options['fields']['field_user_follow_up']['field'] = 'field_user_follow_up';
  $handler->display->display_options['fields']['field_user_follow_up']['label'] = '';
  $handler->display->display_options['fields']['field_user_follow_up']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_follow_up']['hide_empty'] = TRUE;
  /* Field: User: Follow-Up Notes */
  $handler->display->display_options['fields']['field_user_follow_up_notes']['id'] = 'field_user_follow_up_notes';
  $handler->display->display_options['fields']['field_user_follow_up_notes']['table'] = 'field_data_field_user_follow_up_notes';
  $handler->display->display_options['fields']['field_user_follow_up_notes']['field'] = 'field_user_follow_up_notes';
  $handler->display->display_options['fields']['field_user_follow_up_notes']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_user_follow_up_notes']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_user_follow_up_notes']['hide_empty'] = TRUE;
  /* Field: User: Client ID */
  $handler->display->display_options['fields']['field_user_client_id']['id'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['table'] = 'field_data_field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['field'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['label'] = 'Old Client ID';
  $handler->display->display_options['fields']['field_user_client_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_client_id']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_user_client_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_client_id']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_user_client_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: User Snapshot Block */
  $handler = $view->new_display('block', 'User Snapshot Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_user_coach' => 'field_user_coach',
    'field_user_company' => 'field_user_company',
    'field_user_client_level' => 'field_user_client_level',
    'field_user_worksheet_received' => 'field_user_worksheet_received',
    'field_user_waiver_auth_received' => 'field_user_waiver_auth_received',
    'field_user_follow_up' => 'field_user_follow_up',
    'field_user_follow_up_notes' => 'field_user_follow_up_notes',
    'login' => 'login',
    'field_user_client_id' => 'field_user_client_id',
    'uid' => 'uid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_coach' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_company' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_client_level' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_worksheet_received' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_waiver_auth_received' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_follow_up' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_follow_up_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 1,
    ),
    'login' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_client_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 1,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'CMR Client Info Block';
  $export['user_snapshot'] = $view;

  $view = new view();
  $view->name = 'working';
  $view->description = 'Reports incoming clients for the cycle';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Working - New Clients';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Working - New Clients';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'field_user_client_id' => 'field_user_client_id',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_firstname' => 'field_user_firstname',
    'field_user_worksheet_received' => 'field_user_worksheet_received',
    'field_user_waiver_auth_received' => 'field_user_waiver_auth_received',
    'field_user_letter_presented' => 'field_user_letter_presented',
    'field_user_separation_date' => 'field_user_separation_date',
    'field_user_assignment_date' => 'field_user_assignment_date',
    'field_user_language' => 'field_user_language',
    'field_user_firstname_1' => 'field_user_firstname_1',
    'field_user_lastname_1' => 'field_user_lastname_1',
    'field_user_department' => 'field_user_department',
    'field_user_region' => 'field_user_region',
    'field_user_company' => 'field_user_company',
    'field_user_client_level' => 'field_user_client_level',
    'field_user_client_eid' => 'field_user_client_eid',
    'field_user_alt_phone' => 'field_user_alt_phone',
    'field_user_phone' => 'field_user_phone',
  );
  $handler->display->display_options['style_options']['default'] = 'uid';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_client_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_worksheet_received' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_waiver_auth_received' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_letter_presented' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_separation_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_assignment_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_language' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_department' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_region' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_company' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_client_level' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_client_eid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_alt_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_phone' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: User: Coach (field_user_coach) */
  $handler->display->display_options['relationships']['field_user_coach_uid']['id'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['relationships']['field_user_coach_uid']['field'] = 'field_user_coach_uid';
  $handler->display->display_options['relationships']['field_user_coach_uid']['delta'] = '-1';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: User: Client ID */
  $handler->display->display_options['fields']['field_user_client_id']['id'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['table'] = 'field_data_field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['field'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['hide_empty'] = TRUE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  /* Field: User: Worksheet Received */
  $handler->display->display_options['fields']['field_user_worksheet_received']['id'] = 'field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['table'] = 'field_data_field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['field'] = 'field_user_worksheet_received';
  $handler->display->display_options['fields']['field_user_worksheet_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Waiver Authorization Received */
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['id'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['table'] = 'field_data_field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['field'] = 'field_user_waiver_auth_received';
  $handler->display->display_options['fields']['field_user_waiver_auth_received']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Letter Presented */
  $handler->display->display_options['fields']['field_user_letter_presented']['id'] = 'field_user_letter_presented';
  $handler->display->display_options['fields']['field_user_letter_presented']['table'] = 'field_data_field_user_letter_presented';
  $handler->display->display_options['fields']['field_user_letter_presented']['field'] = 'field_user_letter_presented';
  $handler->display->display_options['fields']['field_user_letter_presented']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Separation Date */
  $handler->display->display_options['fields']['field_user_separation_date']['id'] = 'field_user_separation_date';
  $handler->display->display_options['fields']['field_user_separation_date']['table'] = 'field_data_field_user_separation_date';
  $handler->display->display_options['fields']['field_user_separation_date']['field'] = 'field_user_separation_date';
  $handler->display->display_options['fields']['field_user_separation_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Assignment Date */
  $handler->display->display_options['fields']['field_user_assignment_date']['id'] = 'field_user_assignment_date';
  $handler->display->display_options['fields']['field_user_assignment_date']['table'] = 'field_data_field_user_assignment_date';
  $handler->display->display_options['fields']['field_user_assignment_date']['field'] = 'field_user_assignment_date';
  $handler->display->display_options['fields']['field_user_assignment_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Language */
  $handler->display->display_options['fields']['field_user_language']['id'] = 'field_user_language';
  $handler->display->display_options['fields']['field_user_language']['table'] = 'field_data_field_user_language';
  $handler->display->display_options['fields']['field_user_language']['field'] = 'field_user_language';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_firstname_1']['id'] = 'field_user_firstname_1';
  $handler->display->display_options['fields']['field_user_firstname_1']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname_1']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname_1']['relationship'] = 'field_user_coach_uid';
  $handler->display->display_options['fields']['field_user_firstname_1']['label'] = 'Coach First';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_lastname_1']['id'] = 'field_user_lastname_1';
  $handler->display->display_options['fields']['field_user_lastname_1']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['relationship'] = 'field_user_coach_uid';
  $handler->display->display_options['fields']['field_user_lastname_1']['label'] = 'Coach Last';
  /* Field: User: Department */
  $handler->display->display_options['fields']['field_user_department']['id'] = 'field_user_department';
  $handler->display->display_options['fields']['field_user_department']['table'] = 'field_data_field_user_department';
  $handler->display->display_options['fields']['field_user_department']['field'] = 'field_user_department';
  $handler->display->display_options['fields']['field_user_department']['label'] = 'Dept #';
  /* Field: User: Region */
  $handler->display->display_options['fields']['field_user_region']['id'] = 'field_user_region';
  $handler->display->display_options['fields']['field_user_region']['table'] = 'field_data_field_user_region';
  $handler->display->display_options['fields']['field_user_region']['field'] = 'field_user_region';
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  /* Field: User: Client Level */
  $handler->display->display_options['fields']['field_user_client_level']['id'] = 'field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['table'] = 'field_data_field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['field'] = 'field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['label'] = 'Level';
  /* Field: User: Client EID */
  $handler->display->display_options['fields']['field_user_client_eid']['id'] = 'field_user_client_eid';
  $handler->display->display_options['fields']['field_user_client_eid']['table'] = 'field_data_field_user_client_eid';
  $handler->display->display_options['fields']['field_user_client_eid']['field'] = 'field_user_client_eid';
  $handler->display->display_options['fields']['field_user_client_eid']['label'] = 'EID';
  /* Field: User: Alt Phone */
  $handler->display->display_options['fields']['field_user_alt_phone']['id'] = 'field_user_alt_phone';
  $handler->display->display_options['fields']['field_user_alt_phone']['table'] = 'field_data_field_user_alt_phone';
  $handler->display->display_options['fields']['field_user_alt_phone']['field'] = 'field_user_alt_phone';
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_user_phone']['id'] = 'field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['table'] = 'field_data_field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['field'] = 'field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['delta_offset'] = '0';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Client ID (field_user_client_id) */
  $handler->display->display_options['arguments']['field_user_client_id_value']['id'] = 'field_user_client_id_value';
  $handler->display->display_options['arguments']['field_user_client_id_value']['table'] = 'field_data_field_user_client_id';
  $handler->display->display_options['arguments']['field_user_client_id_value']['field'] = 'field_user_client_id_value';
  $handler->display->display_options['arguments']['field_user_client_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_user_client_id_value']['summary']['format'] = 'default_summary';
  /* Contextual filter: User: Created date */
  $handler->display->display_options['arguments']['created_fulldate']['id'] = 'created_fulldate';
  $handler->display->display_options['arguments']['created_fulldate']['table'] = 'users';
  $handler->display->display_options['arguments']['created_fulldate']['field'] = 'created_fulldate';
  $handler->display->display_options['arguments']['created_fulldate']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_fulldate']['summary']['format'] = 'default_summary';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  /* Filter criterion: User: Created date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'users';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '2013-04-16';
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'administrator/working';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Working - New Clients';
  $handler->display->display_options['menu']['name'] = 'menu-administrator-menu';
  $export['working'] = $view;

  return $export;
}
