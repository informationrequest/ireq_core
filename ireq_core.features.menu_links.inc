<?php
/**
 * @file
 * ireq_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ireq_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:ireq
  $menu_links['main-menu:ireq'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ireq',
    'router_path' => 'ireq',
    'link_title' => 'Information Request',
    'options' => array(
      'attributes' => array(
        'title' => 'Information Request',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Information Request');


  return $menu_links;
}
