<?php
/**
 * @file
 * arts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function arts_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'define view for vocabulary campus'.
  $permissions['define view for vocabulary campus'] = array(
    'name' => 'define view for vocabulary campus',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  return $permissions;
}
