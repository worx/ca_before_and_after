<?php
/**
 * @file
 * ca_before_and_after.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_before_and_after_user_default_roles() {
  $roles = array();

  // Exported role: before and after admin.
  $roles['before and after admin'] = array(
    'name' => 'before and after admin',
    'weight' => 6,
    'machine_name' => 'before_and_after_admin',
  );

  return $roles;
}
