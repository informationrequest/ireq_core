<?php
/**
 * @file
 * crf_core.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function crf_core_workbench_moderation_export_states() {
  $items = array(
    'draft' => array(
      'name' => 'draft',
      'label' => 'Needs Input',
      'description' => 'Require cluster input',
      'weight' => -10,
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => 'Submitted to OCHA',
      'description' => 'Submit to OCHA',
      'weight' => -8,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Published',
      'description' => 'Make this version live',
      'weight' => -7,
    ),
  );
  return $items;
}
