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
    'finalized' => array(
      'name' => 'finalized',
      'label' => 'Finalized',
      'description' => 'Make this version finalized',
      'weight' => -8,
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => 'Needs Review',
      'description' => 'Submit to OCHA',
      'weight' => -9,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Published',
      'description' => 'Make this version public',
      'weight' => -7,
    ),
  );
  return $items;
}
