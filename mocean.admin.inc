<?php

/**
 * @file
 * Provides Mocean configuration form.
 */

/**
 * Mocean Configuration form.
 */
function mocean_admin_form($form) {
  $form['mocean_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('API Key'),
    '#default_value' => variable_get('mocean_api_key', ''),
    '#description' => t('Your Mocean account api key'),
    '#required' => TRUE,
  );
  $form['mocean_api_secret'] = array(
    '#type' => 'textfield',
    '#title' => t('API Secret'),
    '#default_value' => variable_get('mocean_api_secret', ''),
    '#description' => t('Your Mocean account api Secret'),
    '#required' => TRUE,
  );
  $form['mocean_api_sender'] = array(
    '#type' => 'textfield',
    '#title' => t('Default Sender (from)'),
    '#default_value' => variable_get('mocean_api_sender', ''),
    '#description' => t('Your Default Sender (from)'),
  );
  return system_settings_form($form);
}
