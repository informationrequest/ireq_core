<?php
/**
 * @file
 * crf_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crf_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'crf';
  $context->description = 'CRF sidewide context';
  $context->tag = 'CRF';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'crf_type_*' => 'crf_type_*',
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
        'crf*' => 'crf*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'crf_request-create_request' => array(
          'module' => 'crf_request',
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
    'menu' => 'crf',
    'breadcrumb' => 'crf',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('CRF');
  t('CRF sidewide context');
  $export['crf'] = $context;

  return $export;
}
