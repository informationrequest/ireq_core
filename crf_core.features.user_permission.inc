<?php
/**
 * @file
 * crf_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: access_internal_ocha_requests.
  $permissions['access_internal_ocha_requests'] = array(
    'name' => 'access_internal_ocha_requests',
    'roles' => array(
      'CRF_manager' => 'CRF_manager',
    ),
    'module' => 'crf_core',
  );

  return $permissions;
}
