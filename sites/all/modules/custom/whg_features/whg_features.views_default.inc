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
  $handler->display->display_options['title'] = 'Active Clients';
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
  /* Field: User: Client ID */
  $handler->display->display_options['fields']['field_user_client_id']['id'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['table'] = 'field_data_field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['field'] = 'field_user_client_id';
  $handler->display->display_options['fields']['field_user_client_id']['settings'] = array(
    'thousand_separator' => ' ',
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
    8 => '8',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/active-clients';
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
  $handler->display->display_options['fields']['created']['element_label_type'] = 'h6';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Service Started */
  $handler->display->display_options['fields']['field_cmr_service_started']['id'] = 'field_cmr_service_started';
  $handler->display->display_options['fields']['field_cmr_service_started']['table'] = 'field_data_field_cmr_service_started';
  $handler->display->display_options['fields']['field_cmr_service_started']['field'] = 'field_cmr_service_started';
  $handler->display->display_options['fields']['field_cmr_service_started']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cmr_service_started']['element_label_type'] = 'h6';
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
  $handler->display->display_options['fields']['field_cmr_last_contact']['element_label_type'] = 'h6';
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
  $handler->display->display_options['fields']['field_cmr_inactivation_date']['element_label_type'] = 'h6';
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
  $handler->display->display_options['fields']['field_cmr_status_code']['element_label_type'] = 'h6';
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_cmr_hours']['id'] = 'field_cmr_hours';
  $handler->display->display_options['fields']['field_cmr_hours']['table'] = 'field_data_field_cmr_hours';
  $handler->display->display_options['fields']['field_cmr_hours']['field'] = 'field_cmr_hours';
  $handler->display->display_options['fields']['field_cmr_hours']['element_label_type'] = 'h6';
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
  $handler->display->display_options['fields']['field_cmr_phase']['element_label_type'] = 'h6';
  $handler->display->display_options['fields']['field_cmr_phase']['empty'] = '<em>no Phase of Service reported</em>';
  $handler->display->display_options['fields']['field_cmr_phase']['field_api_classes'] = TRUE;
  /* Field: Content: Service Fee */
  $handler->display->display_options['fields']['field_cmr_service_fee']['id'] = 'field_cmr_service_fee';
  $handler->display->display_options['fields']['field_cmr_service_fee']['table'] = 'field_data_field_cmr_service_fee';
  $handler->display->display_options['fields']['field_cmr_service_fee']['field'] = 'field_cmr_service_fee';
  $handler->display->display_options['fields']['field_cmr_service_fee']['element_label_type'] = 'h6';
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
  $handler->display->display_options['fields']['field_cmr_remarks']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_cmr_remarks']['element_label_type'] = 'h6';
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
  $export['case_management_reports'] = $view;

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
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: Comment: Last Comment */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  $handler->display->display_options['relationships']['cid']['required'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'time ago';
  /* Field: Content: Associated Record */
  $handler->display->display_options['fields']['field_cmr_associated_record']['id'] = 'field_cmr_associated_record';
  $handler->display->display_options['fields']['field_cmr_associated_record']['table'] = 'field_data_field_cmr_associated_record';
  $handler->display->display_options['fields']['field_cmr_associated_record']['field'] = 'field_cmr_associated_record';
  $handler->display->display_options['fields']['field_cmr_associated_record']['label'] = 'Client';
  $handler->display->display_options['fields']['field_cmr_associated_record']['element_label_colon'] = FALSE;
  /* Field: Content: Last comment author */
  $handler->display->display_options['fields']['last_comment_name']['id'] = 'last_comment_name';
  $handler->display->display_options['fields']['last_comment_name']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_name']['field'] = 'last_comment_name';
  $handler->display->display_options['fields']['last_comment_name']['label'] = 'Author (last comment)';
  $handler->display->display_options['fields']['last_comment_name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'CMR Date';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: New comments */
  $handler->display->display_options['fields']['new_comments']['id'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['table'] = 'node';
  $handler->display->display_options['fields']['new_comments']['field'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['new_comments']['separator'] = '';
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['date_format'] = 'time ago';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';
  /* Sort criterion: Content: Last comment author */
  $handler->display->display_options['sorts']['last_comment_name']['id'] = 'last_comment_name';
  $handler->display->display_options['sorts']['last_comment_name']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_comment_name']['field'] = 'last_comment_name';
  /* Sort criterion: Content: Last comment time */
  $handler->display->display_options['sorts']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['granularity'] = 'minute';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author uid';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['body_value']['group'] = 1;
  /* Filter criterion: Content: Updated/commented date */
  $handler->display->display_options['filters']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['filters']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['filters']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['filters']['last_updated']['operator'] = '>';
  $handler->display->display_options['filters']['last_updated']['value']['value'] = '5/15/2013';
  $handler->display->display_options['filters']['last_updated']['group'] = 1;
  $handler->display->display_options['filters']['last_updated']['exposed'] = TRUE;
  $handler->display->display_options['filters']['last_updated']['expose']['operator_id'] = 'last_updated_op';
  $handler->display->display_options['filters']['last_updated']['expose']['label'] = 'Updated/commented date';
  $handler->display->display_options['filters']['last_updated']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['last_updated']['expose']['operator'] = 'last_updated_op';
  $handler->display->display_options['filters']['last_updated']['expose']['identifier'] = 'last_updated';
  $handler->display->display_options['filters']['last_updated']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['last_updated']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    10 => '10',
    1 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
    11 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'cmr-comments';
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
    'name' => 'name',
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_coach' => 'field_user_coach',
    'field_user_waiver_auth_received' => 'field_user_waiver_auth_received',
    'field_user_worksheet_received' => 'field_user_worksheet_received',
    'field_cmr_service_started' => 'field_cmr_service_started',
    'field_user_client_level' => 'field_user_client_level',
    'field_user_company' => 'field_user_company',
    'field_cmr_last_contact' => 'field_cmr_last_contact',
    'field_cmr_inactivation_date' => 'field_cmr_inactivation_date',
    'field_cmr_status_code' => 'field_cmr_status_code',
    'field_cmr_phase' => 'field_cmr_phase',
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
    'name' => array(
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
    'field_user_lastname' => array(
      'sortable' => 0,
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
    'field_user_waiver_auth_received' => array(
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
    'field_cmr_service_started' => array(
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
    'field_user_company' => array(
      'sortable' => 1,
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
    'field_cmr_phase' => array(
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_cmr_associated_record_node';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
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
  /* Field: User: Client Level */
  $handler->display->display_options['fields']['field_user_client_level']['id'] = 'field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['table'] = 'field_data_field_user_client_level';
  $handler->display->display_options['fields']['field_user_client_level']['field'] = 'field_user_client_level';
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
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
  /* Field: Content: Phase */
  $handler->display->display_options['fields']['field_cmr_phase']['id'] = 'field_cmr_phase';
  $handler->display->display_options['fields']['field_cmr_phase']['table'] = 'field_data_field_cmr_phase';
  $handler->display->display_options['fields']['field_cmr_phase']['field'] = 'field_cmr_phase';
  $handler->display->display_options['fields']['field_cmr_phase']['relationship'] = 'reverse_field_cmr_associated_record_node';
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
  $handler->display->display_options['title'] = 'Client Snapshot:';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'user';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
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
    'field_user_client_id' => 'field_user_client_id',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_firstname' => 'field_user_firstname',
    'name' => 'name',
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
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
  /* Field: User: Coach */
  $handler->display->display_options['fields']['field_user_coach']['id'] = 'field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['table'] = 'field_data_field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['field'] = 'field_user_coach';
  $handler->display->display_options['fields']['field_user_coach']['label'] = 'Coach First';
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
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'administrator/working';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Working - New Clients';
  $handler->display->display_options['menu']['name'] = 'menu-administrator-menu';
  $export['working'] = $view;

  return $export;
}
