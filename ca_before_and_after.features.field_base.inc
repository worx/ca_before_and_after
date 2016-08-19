<?php
/**
 * @file
 * ca_before_and_after.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ca_before_and_after_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ca_ba_ba_after_image'.
  $field_bases['field_ca_ba_ba_after_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ca_ba_ba_after_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_ca_ba_ba_before_image'.
  $field_bases['field_ca_ba_ba_before_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ca_ba_ba_before_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
