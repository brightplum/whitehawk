<?php
/**
 * @file
 * whg_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function whg_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_1|user|user|default';
  $field_group->group_name = 'group_1';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Client Contact Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_user_firstname',
      1 => 'field_user_lastname',
      2 => 'field_user_address',
      3 => 'field_user_phone',
      4 => 'field_user_gender',
      5 => 'field_user_language',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Client Contact Info',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'blind',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_1|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_1|user|user|full';
  $field_group->group_name = 'group_1';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Client Contact Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_user_firstname',
      1 => 'field_user_lastname',
      2 => 'field_user_address',
      3 => 'field_user_phone',
      4 => 'field_user_gender',
      5 => 'field_user_language',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_1|user|user|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_2|user|user|full';
  $field_group->group_name = 'group_2';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accounting Detail',
    'weight' => '5',
    'children' => array(
      0 => 'field_user_worksheet_received',
      1 => 'field_user_waiver_auth_received',
      2 => 'field_user_letter_presented',
      3 => 'field_user_separation_date',
      4 => 'field_user_assignment_date',
      5 => 'field_user_client_level',
      6 => 'field_user_client_eid',
      7 => 'field_user_region',
      8 => 'field_user_department',
      9 => 'field_user_company',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_2|user|user|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_3|user|user|full';
  $field_group->group_name = 'group_3';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Case Management',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_3|user|user|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_4|user|user|full';
  $field_group->group_name = 'group_4';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin Use Only',
    'weight' => '8',
    'children' => array(
      0 => 'field_user_legacy_id',
      1 => 'field_user_client_id_legacy',
      2 => 'field_user_case_manager',
      3 => 'group_a7',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Admin Use Only',
      'instance_settings' => array(
        'classes' => '',
        'description' => 'These fields pertain to COACH records only.  It mostly contains old bio data from pre-Drupal use.  None of this data is relevant to a CLIENT record.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_4|user|user|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_5|user|user|full';
  $field_group->group_name = 'group_5';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supervisor Information',
    'weight' => '7',
    'children' => array(
      0 => 'field_user_supervisor_name',
      1 => 'field_user_supervisor_title',
      2 => 'field_user_supervisor_email',
      3 => 'field_user_supervisor_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Supervisor Information',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_5|user|user|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a1|user|user|default';
  $field_group->group_name = 'group_a1';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accounting Detail',
    'weight' => '6',
    'children' => array(
      0 => 'field_user_worksheet_received',
      1 => 'field_user_waiver_auth_received',
      2 => 'field_user_letter_presented',
      3 => 'field_user_separation_date',
      4 => 'field_user_assignment_date',
      5 => 'field_user_client_level',
      6 => 'field_user_client_eid',
      7 => 'field_user_region',
      8 => 'field_user_department',
      9 => 'field_user_company',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Accounting Detail',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'blind',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_a1|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a2|user|user|default';
  $field_group->group_name = 'group_a2';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Case Management',
    'weight' => '7',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
      ),
    ),
  );
  $export['group_a2|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a4|user|user|default';
  $field_group->group_name = 'group_a4';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin Use Only',
    'weight' => '9',
    'children' => array(
      0 => 'field_user_legacy_id',
      1 => 'field_user_coach_designation',
      2 => 'field_user_coach_biography',
      3 => 'field_user_coach_experience',
      4 => 'field_user_coach_expertise',
      5 => 'field_user_coach_education',
      6 => 'field_user_client_id_legacy',
      7 => 'field_user_personal_email',
      8 => 'field_user_coach_publication',
      9 => 'field_user_alt_phone',
      10 => 'field_user_fax',
      11 => 'field_user_coach_membership',
      12 => 'field_user_case_manager',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Admin Use Only',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_a4|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a5|user|user|default';
  $field_group->group_name = 'group_a5';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supervisor Information',
    'weight' => '8',
    'children' => array(
      0 => 'field_user_supervisor_name',
      1 => 'field_user_supervisor_title',
      2 => 'field_user_supervisor_email',
      3 => 'field_user_supervisor_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
      ),
    ),
  );
  $export['group_a5|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a6|user|user|form';
  $field_group->group_name = 'group_a6';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_coach_addl_info';
  $field_group->data = array(
    'label' => 'Bio Fields',
    'weight' => '22',
    'children' => array(
      0 => 'field_user_coach_designation',
      1 => 'field_user_coach_biography',
      2 => 'field_user_coach_experience',
      3 => 'field_user_coach_expertise',
      4 => 'field_user_coach_education',
      5 => 'field_user_coach_publication',
      6 => 'field_user_coach_membership',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bio Fields',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'These fields will only be usable when the coach bios are being autopopulated from their records.  Currently they are PDFs so this info is stale and not supported but we don\'t want to lose track of these fields for future use.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_a6|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a6|user|user|full';
  $field_group->group_name = 'group_a6';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '4',
    'children' => array(
      0 => 'field_user_follow_up_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Notes',
      'instance_settings' => array(
        'classes' => '',
        'description' => ' ',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_a6|user|user|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a7|user|user|default';
  $field_group->group_name = 'group_a7';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '5',
    'children' => array(
      0 => 'field_user_follow_up',
      1 => 'field_user_follow_up_notes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
      ),
    ),
  );
  $export['group_a7|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a7|user|user|full';
  $field_group->group_name = 'group_a7';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_4';
  $field_group->data = array(
    'label' => 'Coach Bios',
    'weight' => '24',
    'children' => array(
      0 => 'field_user_coach_designation',
      1 => 'field_user_coach_biography',
      2 => 'field_user_coach_experience',
      3 => 'field_user_coach_expertise',
      4 => 'field_user_coach_education',
      5 => 'field_user_personal_email',
      6 => 'field_user_coach_publication',
      7 => 'field_user_alt_phone',
      8 => 'field_user_fax',
      9 => 'field_user_coach_membership',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Coach Bios',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_a7|user|user|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a8|user|user|default';
  $field_group->group_name = 'group_a8';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Heading',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_coach',
      1 => 'field_user_client_id',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Heading',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_a8|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a8|user|user|full';
  $field_group->group_name = 'group_a8';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => ' Client Record for:',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_coach',
      1 => 'field_user_client_id',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' Client Record for:',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_a8|user|user|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_acct_detail_group|user|user|form';
  $field_group->group_name = 'group_user_acct_detail_group';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accounting Detail',
    'weight' => '10',
    'children' => array(
      0 => 'field_user_worksheet_received',
      1 => 'field_user_waiver_auth_received',
      2 => 'field_user_letter_presented',
      3 => 'field_user_separation_date',
      4 => 'field_user_assignment_date',
      5 => 'field_user_client_level',
      6 => 'field_user_client_eid',
      7 => 'field_user_region',
      8 => 'field_user_department',
      9 => 'field_user_company',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Accounting Detail',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_user_acct_detail_group|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_coach_addl_info|user|user|form';
  $field_group->group_name = 'group_user_coach_addl_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '12',
    'children' => array(
      0 => 'field_user_personal_email',
      1 => 'field_user_case_manager',
      2 => 'group_a6',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'These fields are not intended for use with Client records.  They are remnants of old bio pages and are for Coach records only.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_user_coach_addl_info|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_contact_info_group|user|user|form';
  $field_group->group_name = 'group_user_contact_info_group';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '8',
    'children' => array(
      0 => 'field_user_firstname',
      1 => 'field_user_lastname',
      2 => 'field_user_address',
      3 => 'field_user_phone',
      4 => 'field_user_gender',
      5 => 'field_user_language',
      6 => 'field_user_alt_phone',
      7 => 'field_user_fax',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_contact_info_group|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_followup_info|user|user|form';
  $field_group->group_name = 'group_user_followup_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '9',
    'children' => array(
      0 => 'field_user_follow_up',
      1 => 'field_user_follow_up_notes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Notes',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_user_followup_info|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_legacy|user|user|form';
  $field_group->group_name = 'group_user_legacy';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Legacy',
    'weight' => '13',
    'children' => array(
      0 => 'field_user_legacy_id',
      1 => 'field_user_client_id_legacy',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Legacy',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Client ID (Legacy) = ID from D6 (May 2013)
Legacy ID = pre-Drupal (March 2010)',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_user_legacy|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_supervisor_group|user|user|form';
  $field_group->group_name = 'group_user_supervisor_group';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supervisor Information',
    'weight' => '11',
    'children' => array(
      0 => 'field_user_supervisor_name',
      1 => 'field_user_supervisor_title',
      2 => 'field_user_supervisor_email',
      3 => 'field_user_supervisor_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Supervisor Information',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_user_supervisor_group|user|user|form'] = $field_group;

  return $export;
}
