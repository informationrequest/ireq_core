<?php
/**
 * @file
 * ireq_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ireq_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ireq';
  $context->description = 'IREQ sidewide context';
  $context->tag = 'IREQ';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'ireq_type_*' => 'ireq_type_*',
      ),
    ),
    'node' => array(
      'values' => array(
        'request' => 'request',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'ireq*' => 'ireq*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ireq_request-create_request' => array(
          'module' => 'ireq_request',
          'delta' => 'create_request',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views--exp-requests-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-requests-page_1',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
    'menu' => 'ireq',
    'breadcrumb' => 'ireq',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('IREQ');
  t('IREQ sidewide context');
  $export['ireq'] = $context;

  return $export;
}
