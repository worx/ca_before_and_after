<?php
/**
 * @file
 * ca_before_and_after.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ca_before_and_after_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_before_and_after content.
  $permissions['create ca_before_and_after content'] = array(
    'name' => 'create ca_before_and_after content',
    'roles' => array(
      'administrator => 'administrator',
      'before and after admin' => 'before and after admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ca_before_and_after content.
  $permissions['delete any ca_before_and_after content'] = array(
    'name' => 'delete any ca_before_and_after content',
    'roles' => array(
      'administrator => 'administrator',
      'before and after admin' => 'before and after admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ca_before_and_after content.
  $permissions['delete own ca_before_and_after content'] = array(
    'name' => 'delete own ca_before_and_after content',
    'roles' => array(
      'administrator => 'administrator',
      'before and after admin' => 'before and after admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ca_before_and_after content.
  $permissions['edit any ca_before_and_after content'] = array(
    'name' => 'edit any ca_before_and_after content',
    'roles' => array(
      'administrator => 'administrator',
      'before and after admin' => 'before and after admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ca_before_and_after content.
  $permissions['edit own ca_before_and_after content'] = array(
    'name' => 'edit own ca_before_and_after content',
    'roles' => array(
      'administrator => 'administrator',
      'before and after admin' => 'before and after admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
