<?php
/**
 * @file
 * ireq_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ireq_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: access_internal_ocha_requests.
  $permissions['access_internal_ocha_requests'] = array(
    'name' => 'access_internal_ocha_requests',
    'roles' => array(
      'IREQ_manager' => 'IREQ_manager',
    ),
    'module' => 'ireq_core',
  );

  return $permissions;
}
