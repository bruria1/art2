<?php
/**
 * @file
 * designer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function designer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function designer_node_info() {
  $items = array(
    'designer' => array(
      'name' => t('מעצב'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('שם המעצב'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
