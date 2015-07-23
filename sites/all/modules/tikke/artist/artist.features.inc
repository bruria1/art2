<?php
/**
 * @file
 * artist.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function artist_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function artist_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function artist_node_info() {
  $items = array(
    'artists' => array(
      'name' => t('אמן'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('שם האומן'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
