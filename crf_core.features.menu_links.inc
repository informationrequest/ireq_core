<?php
/**
 * @file
 * crf_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function crf_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:crf
  $menu_links['main-menu:crf'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'crf',
    'router_path' => 'crf',
    'link_title' => 'CRF',
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
  t('CRF');


  return $menu_links;
}
