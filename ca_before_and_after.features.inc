<?php
/**
 * @file
 * ca_before_and_after.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_before_and_after_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "weight" && $api == "weight") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_before_and_after_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ca_before_and_after_image_default_styles() {
  $styles = array();

  // Exported image style: before_and_after.
  $styles['before_and_after'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'before_and_after',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ca_before_and_after_node_info() {
  $items = array(
    'ca_before_and_after' => array(
      'name' => t('Before and After'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ca_before_and_after_weight_features_default_settings() {
  $settings = array();

  $settings['ca_before_and_after'] = array(
    'enabled' => 1,
    'range' => 50,
    'menu_weight' => 0,
    'default' => -50,
    'sync_translations' => 0,
  );

  return $settings;
}
