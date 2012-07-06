<?php
/**
 * @file
 * ca_before_and_after.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ca_before_and_after_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ca_before_and_after';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA: Before and After';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Before Image */
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['id'] = 'field_ca_ba_ba_before_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['table'] = 'field_data_field_ca_ba_ba_before_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['field'] = 'field_ca_ba_ba_before_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['settings'] = array(
    'image_style' => 'before_and_after',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['field_api_classes'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['id'] = 'field_ca_ba_baafter_image';
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['table'] = 'field_data_field_ca_ba_baafter_image';
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['field'] = 'field_ca_ba_baafter_image';
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['label'] = 'After Image';
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_baafter_image']['hide_alter_empty'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_before_and_after' => 'ca_before_and_after',
  );

  /* Display: CA Before and After List View */
  $handler = $view->new_display('panel_pane', 'CA Before and After List View', 'ca_before_and_after_list_view');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ca_ba_ba_before_image' => 'field_ca_ba_ba_before_image',
    'field_ca_ba_baafter_image' => 'field_ca_ba_baafter_image',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ca_ba_ba_before_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ca_ba_baafter_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Before Image */
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['id'] = 'field_ca_ba_ba_before_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['table'] = 'field_data_field_ca_ba_ba_before_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['field'] = 'field_ca_ba_ba_before_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['label'] = 'Before';
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['field_api_classes'] = 0;
  /* Field: Content: After Image */
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['id'] = 'field_ca_ba_ba_after_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['table'] = 'field_data_field_ca_ba_ba_after_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['field'] = 'field_ca_ba_ba_after_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['label'] = 'After';
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['field_api_classes'] = 0;
  $handler->display->display_options['pane_title'] = 'CA Before and After List View';

  /* Display: CA Before and After Node View */
  $handler = $view->new_display('panel_pane', 'CA Before and After Node View', 'ca_before_and_after_node_view');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ca_ba_ba_before_image' => 'field_ca_ba_ba_before_image',
    'field_ca_ba_baafter_image' => 'field_ca_ba_baafter_image',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ca_ba_ba_before_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ca_ba_baafter_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Before Image */
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['id'] = 'field_ca_ba_ba_before_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['table'] = 'field_data_field_ca_ba_ba_before_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['field'] = 'field_ca_ba_ba_before_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['label'] = 'Before';
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['settings'] = array(
    'image_style' => 'before_and_after',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ca_ba_ba_before_image']['field_api_classes'] = 0;
  /* Field: Content: After Image */
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['id'] = 'field_ca_ba_ba_after_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['table'] = 'field_data_field_ca_ba_ba_after_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['field'] = 'field_ca_ba_ba_after_image';
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['label'] = 'After';
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['settings'] = array(
    'image_style' => 'before_and_after',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ca_ba_ba_after_image']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['pane_title'] = 'CA Before and After Node View';

  /* Display: CA Before and After Administration */
  $handler = $view->new_display('panel_pane', 'CA Before and After Administration', 'ca_before_and_after_administration');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit Link';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_before_and_after' => 'ca_before_and_after',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['pane_title'] = 'Ca Before and After Administration ';

  /* Display: CA Before and After Sort View */
  $handler = $view->new_display('panel_pane', 'CA Before and After Sort View', 'before_and_after_sort_view');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'weight';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['pane_title'] = 'CA Before and After Sort View';

  /* Display: CA Before and After Node Body */
  $handler = $view->new_display('panel_pane', 'CA Before and After Node Body', 'before_and_after_node_body');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['pane_title'] = 'CA Before and After Node Body';
  $export['ca_before_and_after'] = $view;

  return $export;
}
