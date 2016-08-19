<?php
/**
 * @file
 * ca_before_and_after.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_before_and_after_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_before_and_after_flex_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'CA Before and After: Flex Table View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-before-node-flex ca-before-node-flex-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_before_and_after' => 'ca_before_and_after',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_before_and_after_node_template',
          'settings' => array(
            'ca_before_and_after_node_template' => 'ca_before_and_after_node_template_one_flex',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c0719f5f-a8aa-4aa8-858f-b0ec0d81d5f8';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-efff2074-039c-49f5-8a7d-a7c3a8fd7290';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_before_and_after_node-ca_b_and_a_flex_node_template_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'efff2074-039c-49f5-8a7d-a7c3a8fd7290';
  $display->content['new-efff2074-039c-49f5-8a7d-a7c3a8fd7290'] = $pane;
  $display->panels['middle'][0] = 'new-efff2074-039c-49f5-8a7d-a7c3a8fd7290';
  $pane = new stdClass();
  $pane->pid = 'new-66527140-3fe2-4e35-bc06-3baf1d3a2691';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '66527140-3fe2-4e35-bc06-3baf1d3a2691';
  $display->content['new-66527140-3fe2-4e35-bc06-3baf1d3a2691'] = $pane;
  $display->panels['middle'][1] = 'new-66527140-3fe2-4e35-bc06-3baf1d3a2691';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_before_and_after_flex_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_before_and_after_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'CA Before and After: Node Table View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-before-node ca-before-node-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_before_and_after' => 'ca_before_and_after',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_before_and_after_node_template',
          'settings' => array(
            'ca_before_and_after_node_template' => 'ca_before_and_after_node_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c0719f5f-a8aa-4aa8-858f-b0ec0d81d5f8';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-92711a7d-9f9b-46ee-b320-4b57e04e0377';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_before_and_after_node-ca_b_and_a_node_template_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '92711a7d-9f9b-46ee-b320-4b57e04e0377';
  $display->content['new-92711a7d-9f9b-46ee-b320-4b57e04e0377'] = $pane;
  $display->panels['middle'][0] = 'new-92711a7d-9f9b-46ee-b320-4b57e04e0377';
  $pane = new stdClass();
  $pane->pid = 'new-66527140-3fe2-4e35-bc06-3baf1d3a2691';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '66527140-3fe2-4e35-bc06-3baf1d3a2691';
  $display->content['new-66527140-3fe2-4e35-bc06-3baf1d3a2691'] = $pane;
  $display->panels['middle'][1] = 'new-66527140-3fe2-4e35-bc06-3baf1d3a2691';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_before_and_after_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_902feae3-5e1b-4223-98a2-4b423f5a6dde';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora Before and After: Flex Table View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-before-node-flex ca-before-node-flex-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_before_and_after' => 'ca_before_and_after',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_before_and_after_node_template',
          'settings' => array(
            'ca_before_and_after_node_template' => 'ca_before_and_after_node_template_one_flex',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c0719f5f-a8aa-4aa8-858f-b0ec0d81d5f8';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-efff2074-039c-49f5-8a7d-a7c3a8fd7290';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_before_and_after_node-ca_b_and_a_flex_node_template_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'efff2074-039c-49f5-8a7d-a7c3a8fd7290';
  $display->content['new-efff2074-039c-49f5-8a7d-a7c3a8fd7290'] = $pane;
  $display->panels['middle'][0] = 'new-efff2074-039c-49f5-8a7d-a7c3a8fd7290';
  $pane = new stdClass();
  $pane->pid = 'new-66527140-3fe2-4e35-bc06-3baf1d3a2691';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '66527140-3fe2-4e35-bc06-3baf1d3a2691';
  $display->content['new-66527140-3fe2-4e35-bc06-3baf1d3a2691'] = $pane;
  $display->panels['middle'][1] = 'new-66527140-3fe2-4e35-bc06-3baf1d3a2691';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_902feae3-5e1b-4223-98a2-4b423f5a6dde'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_e55a1fdc-f12e-408c-ae39-457fd7a78470';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Before and After: Node Table View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-before-node ca-before-node-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_before_and_after' => 'ca_before_and_after',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_before_and_after_node_template',
          'settings' => array(
            'ca_before_and_after_node_template' => 'ca_before_and_after_node_template_one',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c0719f5f-a8aa-4aa8-858f-b0ec0d81d5f8';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-92711a7d-9f9b-46ee-b320-4b57e04e0377';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_before_and_after_node-ca_b_and_a_node_template_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '92711a7d-9f9b-46ee-b320-4b57e04e0377';
  $display->content['new-92711a7d-9f9b-46ee-b320-4b57e04e0377'] = $pane;
  $display->panels['first-first'][0] = 'new-92711a7d-9f9b-46ee-b320-4b57e04e0377';
  $pane = new stdClass();
  $pane->pid = 'new-66527140-3fe2-4e35-bc06-3baf1d3a2691';
  $pane->panel = 'first-first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '66527140-3fe2-4e35-bc06-3baf1d3a2691';
  $display->content['new-66527140-3fe2-4e35-bc06-3baf1d3a2691'] = $pane;
  $display->panels['first-first'][1] = 'new-66527140-3fe2-4e35-bc06-3baf1d3a2691';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_e55a1fdc-f12e-408c-ae39-457fd7a78470'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_before_and_after_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'before_and_after_admin';
  $page->task = 'page';
  $page->admin_title = 'CA Before and After: Admin';
  $page->admin_description = '';
  $page->path = 'results/admin/administer';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 240200815,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administration',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administer',
      'name' => 'navigation',
      'weight' => '20',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_before_and_after_admin_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'before_and_after_admin';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Before and After: Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-before-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<no title>';
  $display->uuid = '9ef6643d-ba63-4f44-b528-8131a18d3573';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0930ca28-fa17-45b9-9ad8-2c5320d8576b';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_before_and_after_admin-ca_before_and_after_administration';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0930ca28-fa17-45b9-9ad8-2c5320d8576b';
  $display->content['new-0930ca28-fa17-45b9-9ad8-2c5320d8576b'] = $pane;
  $display->panels['middle'][0] = 'new-0930ca28-fa17-45b9-9ad8-2c5320d8576b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_before_and_after_admin__panel_context_c0552404-cdb4-4e60-8f4e-cd533893b8a9';
  $handler->task = 'page';
  $handler->subtask = 'before_and_after_admin';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Before and After: Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-before-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<no title>';
  $display->uuid = '9ef6643d-ba63-4f44-b528-8131a18d3573';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0930ca28-fa17-45b9-9ad8-2c5320d8576b';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_before_and_after_admin-ca_before_and_after_administration';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0930ca28-fa17-45b9-9ad8-2c5320d8576b';
  $display->content['new-0930ca28-fa17-45b9-9ad8-2c5320d8576b'] = $pane;
  $display->panels['first-first'][0] = 'new-0930ca28-fa17-45b9-9ad8-2c5320d8576b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['before_and_after_admin'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_before_and_after_add_new';
  $page->task = 'page';
  $page->admin_title = 'CA Before and After: Add New';
  $page->admin_description = '';
  $page->path = 'results/add_new';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 240200815,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Before and After',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_before_and_after_add_new_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_before_and_after_add_new';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_before_and_after',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_before_and_after_add_new__aurora_before_and_after_add_new';
  $handler->task = 'page';
  $handler->subtask = 'ca_before_and_after_add_new';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Before and After: Add New',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'aurora_before_and_after_add_new',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8f06867b-7587-4eba-b7a6-f6289077f0fa';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ec04c903-4ab1-4d66-923d-2e2a7aaaf72a';
  $pane->panel = 'first-first';
  $pane->type = 'context_admin';
  $pane->subtype = 'context_admin:node_create_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_before_and_after',
    'context_admin_use_node_edit' => 0,
    'context' => 'empty',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ec04c903-4ab1-4d66-923d-2e2a7aaaf72a';
  $display->content['new-ec04c903-4ab1-4d66-923d-2e2a7aaaf72a'] = $pane;
  $display->panels['first-first'][0] = 'new-ec04c903-4ab1-4d66-923d-2e2a7aaaf72a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ec04c903-4ab1-4d66-923d-2e2a7aaaf72a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_before_and_after_add_new'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_before_and_after_list';
  $page->task = 'page';
  $page->admin_title = 'CA Before and After: List ';
  $page->admin_description = '';
  $page->path = 'results/view';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Results',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_before_and_after_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_before_and_after_list';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'CA Before and After:Table List',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-before-list ca-before-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_before_and_after_list_template',
          'settings' => array(
            'ca_before_and_after_list_template' => 'ca_before_and_after_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<no title>';
  $display->uuid = '54579363-787f-4ea5-92b2-0a71473e32b4';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ddca7840-1773-462f-a324-cbb0237353db';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_before_and_after_list-ca_b_and_a_list_template_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ddca7840-1773-462f-a324-cbb0237353db';
  $display->content['new-ddca7840-1773-462f-a324-cbb0237353db'] = $pane;
  $display->panels['middle'][0] = 'new-ddca7840-1773-462f-a324-cbb0237353db';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_before_and_after_list_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_before_and_after_list';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'CA Before and After: Flex Table List',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-before-flex ca-before-flex-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_before_and_after_list_template',
          'settings' => array(
            'ca_before_and_after_list_template' => 'ca_before_and_after_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<no title>';
  $display->uuid = '54579363-787f-4ea5-92b2-0a71473e32b4';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c49ccc1f-018c-49ab-b3ca-5bd84492433b';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_before_and_after_list-ca_b_and_a_flex_template_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c49ccc1f-018c-49ab-b3ca-5bd84492433b';
  $display->content['new-c49ccc1f-018c-49ab-b3ca-5bd84492433b'] = $pane;
  $display->panels['middle'][0] = 'new-c49ccc1f-018c-49ab-b3ca-5bd84492433b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_before_and_after_list__panel_context_5c1df180-8e19-4562-a5d7-e678936d1f2c';
  $handler->task = 'page';
  $handler->subtask = 'ca_before_and_after_list';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Before and After: Table List',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-before-list ca-before-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_before_and_after_list_template',
          'settings' => array(
            'ca_before_and_after_list_template' => 'ca_before_and_after_list_template_one',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<no title>';
  $display->uuid = '54579363-787f-4ea5-92b2-0a71473e32b4';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ddca7840-1773-462f-a324-cbb0237353db';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_before_and_after_list-ca_b_and_a_list_template_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ddca7840-1773-462f-a324-cbb0237353db';
  $display->content['new-ddca7840-1773-462f-a324-cbb0237353db'] = $pane;
  $display->panels['first-first'][0] = 'new-ddca7840-1773-462f-a324-cbb0237353db';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_before_and_after_list__panel_context_e65c71a6-aa92-49d7-9274-c98e5adc0f32';
  $handler->task = 'page';
  $handler->subtask = 'ca_before_and_after_list';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora Before and After: Flex Table List',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-before-flex ca-before-flex-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_before_and_after_list_template',
          'settings' => array(
            'ca_before_and_after_list_template' => 'ca_before_and_after_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<no title>';
  $display->uuid = '54579363-787f-4ea5-92b2-0a71473e32b4';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c49ccc1f-018c-49ab-b3ca-5bd84492433b';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_before_and_after_list-ca_b_and_a_flex_template_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c49ccc1f-018c-49ab-b3ca-5bd84492433b';
  $display->content['new-c49ccc1f-018c-49ab-b3ca-5bd84492433b'] = $pane;
  $display->panels['first-first'][0] = 'new-c49ccc1f-018c-49ab-b3ca-5bd84492433b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_before_and_after_list'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_before_and_after_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Before and After: Sort ';
  $page->admin_description = '';
  $page->path = 'results/admin/sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 240200815,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort ',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_before_and_after_sort__panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_before_and_after_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Before and After: Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-before-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<no title>';
  $display->uuid = '8bfe8781-53da-408e-b5ff-eb83e471ff6d';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cae3e59d-f345-4383-8961-b598c6092508';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_before_and_after_sort-before_and_after_sort_view';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cae3e59d-f345-4383-8961-b598c6092508';
  $display->content['new-cae3e59d-f345-4383-8961-b598c6092508'] = $pane;
  $display->panels['middle'][0] = 'new-cae3e59d-f345-4383-8961-b598c6092508';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_before_and_after_sort__panel_context_a3fe33d8-b474-4a4c-a8e4-717cbc6fb74c';
  $handler->task = 'page';
  $handler->subtask = 'ca_before_and_after_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Before and After: Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-before-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<no title>';
  $display->uuid = '8bfe8781-53da-408e-b5ff-eb83e471ff6d';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cae3e59d-f345-4383-8961-b598c6092508';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_before_and_after_sort-before_and_after_sort_view';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cae3e59d-f345-4383-8961-b598c6092508';
  $display->content['new-cae3e59d-f345-4383-8961-b598c6092508'] = $pane;
  $display->panels['first-first'][0] = 'new-cae3e59d-f345-4383-8961-b598c6092508';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_before_and_after_sort'] = $page;

  return $pages;

}
