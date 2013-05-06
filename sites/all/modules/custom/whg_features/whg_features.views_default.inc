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
    'format_type' => 'long',
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

  return $export;
}
