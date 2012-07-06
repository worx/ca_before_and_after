<?php
/**
 * @file
 * ca_before_and_after.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ca_before_and_after_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ca_before_and_after';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'xmlsitemap' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ca_before_and_after'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ca_before_and_after';
  $strongarm->value = array();
  $export['menu_options_ca_before_and_after'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ca_before_and_after';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ca_before_and_after'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_before_and_after';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ca_before_and_after'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ca_before_and_after';
  $strongarm->value = '1';
  $export['node_preview_ca_before_and_after'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ca_before_and_after';
  $strongarm->value = 0;
  $export['node_submitted_ca_before_and_after'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_before_and_after_pattern';
  $strongarm->value = 'results/[node:title]';
  $export['pathauto_node_ca_before_and_after_pattern'] = $strongarm;

  return $export;
}
