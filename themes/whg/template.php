<?php
/**
 * @file
 * theme overrides etc for WHG theme
 */

/**
 * Implements template_process_html().
 */
function whg_process_html(&$variables) {
  // Render closure into a top level variable.
  $closure = $variables['page']['closure'];
  $variables['closure'] = drupal_render($closure);
}

/**
 * Implements hook_preprocess_page().
 *
 * @param array $vars
 *   Array of values for preprocessing.
 */
function whg_preprocess_page(&$vars) {
  // Split primary and secondary local tasks.
  $vars['primary_local_tasks'] = menu_primary_local_tasks();
  $vars['secondary_local_tasks'] = menu_secondary_local_tasks();

  if (isset($vars['node'])) {
    $node = clone $vars['node'];
    $view_mode = 'full';
    $langcode = $vars['language']->language;
    $node->content = array();
    $node->content += field_attach_view('node', $node, $view_mode, $langcode);
  }

  // Add sidebars.
  $sidebar_fields = array(
    'left_sidebar',
    'right_sidebar',
  );
  if (!empty($vars['node']->type) && isset($node) && is_object($node)) {
    foreach ($sidebar_fields as $field_name) {
      if (!empty($node->content['field_' . $field_name])) {
        $add_blocks = array();
        foreach (element_children($node->content['field_' . $field_name]) as $key) {
          if (!empty($node->content['field_' . $field_name][$key])) {
            $add_blocks[] = $node->content['field_' . $field_name][$key];
          }
        }
        $vars['page'][$field_name] = $vars['page'][$field_name] + $add_blocks;
      }
    }
  }

  $content_classes = array();
  if (($vars['page']['left_sidebar']) || ($vars['page']['right_sidebar'])) {
    if ($vars['page']['left_sidebar']) {
      $content_classes[] = 'content_sidebar';
    }
    if ($vars['page']['right_sidebar']) {
      $content_classes[] = 'content_right_sidebar';
    }
  }
  else {
    $content_classes[] = 'content_full_width';
  }

  $vars['content_classes'] = implode(' ', $content_classes);

  $vars['search_form'] = drupal_get_form('search_block_form');

  // Navigation on node pages with option set.
  if (isset($node)) {
    $main_nav = field_get_items('node', $node, 'field_main_nav');
    $main_nav = (is_array($main_nav)) ? reset($main_nav) : $main_nav;
    $main_nav = (isset($main_nav['value'])) ? $main_nav['value'] : 1;
    if ($main_nav == 1) {
      $navigation = TRUE;
    }
  }

  // Navigation on various paths.
  $nav_paths = array(
    'contact',
  );
  if (in_array(current_path(), $nav_paths) && (!isset($navigation))) {
    $navigation = TRUE;
  }

  // Add navigation.
  if (isset($navigation)) {
    $main_menu = menu_tree_output(menu_tree_page_data('main-menu'));
    $vars['page']['navigation'] = whg_main_menu_navigation($main_menu);
  }
}

/**
 * Implements hook_preprocess_node().
 *
 * @param array $vars
 *   Array of values for preprocessing.
 */
function whg_preprocess_node(&$vars) {
  $sidebar_fields = array(
    'field_left_sidebar',
    'field_right_sidebar',
  );
  foreach ($sidebar_fields as $field_name) {
    if (!empty($vars['content'][$field_name])) {
      unset($vars['content'][$field_name]);
    }
  }
}

/**
 * Custom navigation theming.
 *
 * @param array $menu
 *   The menu array.
 *
 * @return string
 *   The menu returned.
 */
function whg_main_menu_navigation($menu) {
  $output = '<ul id="menu-main-nav">';
  foreach ($menu as $key => $menu_item) {
    if (is_numeric($key)) {
      $url = drupal_get_path_alias($menu_item['#href']);
      $classes = implode(' ', $menu_item['#attributes']['class']);
      $output .= '<li class="' . $classes . '"><a href="' . $url . '"><span><strong>' . $menu_item['#title'] . '</strong>';
      $desc = (isset($menu_item['#localized_options']['attributes']['title']) && !empty($menu_item['#localized_options']['attributes']['title'])) ? strtolower($menu_item['#localized_options']['attributes']['title']) : strtolower($menu_item['#title']);
      $output .= '<span class="navi-description">' . $desc . '</span></span></a>';
      if (!empty($menu_item['#below'])) {
        $output .= '<ul class="sub-menu">';
        foreach ($menu_item['#below'] as $below_key => $submenu_item) {
          if (is_numeric($below_key)) {
            $url = isset($submenu_item['#href']) ? drupal_get_path_alias($submenu_item['#href']) : '';
            $title = isset($submenu_item['#title']) ? ($submenu_item['#title']) : '';
            $output .= '<li><a href="' . $url . '"><span>' . $title . '</span></a>';
          }
        }
        $output .= '</ul>';
      }
      $output .= '</li>';
    }
  }
  $output .= '</ul>';
  return $output;
}
