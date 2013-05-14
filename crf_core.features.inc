<?php
/**
 * @file
 * crf_core.features.inc
 */

/**
 * Implements hook_views_api().
 */
function crf_core_views_api() {
  return array(
    "api" => "3.0",
    'path' => drupal_get_path('module', 'crf_core') . '/views'
  );
}
