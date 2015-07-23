<?php
/**
 * @file
 * pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pages_node_info() {
  $items = array(
    'page' => array(
      'name' => t('עמוד בסיסי'),
      'base' => 'node_content',
      'description' => t('מאפשר הוספת עמוד רגיל לאתר. למשל אודות וכדומה. '),
      'has_title' => '1',
      'title_label' => t('כותרת העמוד'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
