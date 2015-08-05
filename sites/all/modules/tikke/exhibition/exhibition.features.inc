<?php
/**
 * @file
 * exhibition.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function exhibition_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function exhibition_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function exhibition_image_default_styles() {
  $styles = array();

  // Exported image style: exhibition-gallery-1.
  $styles['exhibition-gallery-1'] = array(
    'label' => 'exhibition-gallery-1',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 421,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: exhibition-gallery-3.
  $styles['exhibition-gallery-3'] = array(
    'label' => 'exhibition-gallery-3',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 366,
          'height' => 421,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function exhibition_node_info() {
  $items = array(
    'exhibition' => array(
      'name' => t('תערוכה'),
      'base' => 'node_content',
      'description' => t('מאפשר הוספת תערוכה לאתר. '),
      'has_title' => '1',
      'title_label' => t('כותרת התערוכה'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
