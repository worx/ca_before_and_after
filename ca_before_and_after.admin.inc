<?php

/**
 * @file
 * CA_Before and After admin system, which overrides the default feature settings.
 *
 * Will allow us to make visual changes to the feature without overriding the
 * actual feature.
 */

/**
 * Defines the menu for overriding before and after feature settings.
 *
 * @return
 *   Fully formed Form API array.
 */
function ca_before_and_after_settings_form() {
  $form = array();

  $form['ca_before_and_after_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_before_and_after_menu_title', 'Results'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
  $form['ca_before_and_after_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Before and After per page'),
    '#default_value' => variable_get('ca_before_and_after_list_count', 5),
    '#required' => TRUE,
    '#description' => t('How many before and after images would you like displayed per page?'),
  );
  $form['ca_before_and_after_block_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Before and After in the block'),
    '#default_value' => variable_get('ca_before_and_after_block_count', 1),
    '#required' => TRUE,
    '#description' => t('How many before and after images would you like displayed in the block?'),
  );
  $form['ca_before_and_after_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Before and After\'s list template'),
    '#options' => array(
      'ca_before_and_after_list_template_one' => t('Template one'),
      'ca_before_and_after_list_template_one_flex' => t('Template one Flex'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_before_and_after_list_template', 'ca_before_and_after_list_template_one'),
  );
  $form['ca_before_and_after_node_template'] = array(
    '#type' => 'select',
    '#title' => t('Before and After\'s node template'),
    '#options' => array(
      'ca_before_and_after_node_template_one' => t('Template one'),
      'ca_before_and_after_node_template_one_flex' => t('Template one Flex'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_before_and_after_node_template', 'ca_before_and_after_node_template_one'),
  );
  $form['actions'] = array(
    '#type' => 'actions',
  );
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  // We are adding the system_settings_form_submit manually instead of
  // returning system_settings_form($form) in our return statement.
  // This allows for us to add our submit handler after the
  // system_settings_form_submit. hook_form_alter could not handle this for us.
  $form['#submit'][] = 'system_settings_form_submit';
  $form['#submit'][] = 'ca_before_and_after_settings_form_submit';

  return $form;
}

/**
 * Handles form submission data from 'ca_before_and_after_settings_form'.
 *
 * Determines if we should rebuild the menu router based on form data.
 */
function ca_before_and_after_settings_form_submit($form, &$form_state) {
  $old_title = $form['ca_before_and_after_menu_title']['#default_value'];
  $new_title = $form_state['values']['ca_before_and_after_menu_title'];
  if ($old_title != $new_title) {
    menu_rebuild();
  }
}
