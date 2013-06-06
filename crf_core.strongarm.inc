<?php
/**
 * @file
 * crf_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crf_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_request';
  $strongarm->value = 'l, d F Y';
  $export['date_format_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_strings_en';
  $strongarm->value = array();
  $export['locale_custom_strings_en'] = $strongarm;

  return $export;
}
