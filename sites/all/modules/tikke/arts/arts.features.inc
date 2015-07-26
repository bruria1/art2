<?php
/**
 * @file
 * arts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function arts_ctools_plugin_api($module = NULL, $api = NULL) {
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
function arts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function arts_image_default_styles() {
  $styles = array();

  // Exported image style: art-gallery-1.
  $styles['art-gallery-1'] = array(
    'label' => 'art-gallery-1',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 318,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: art-gallery-3.
  $styles['art-gallery-3'] = array(
    'label' => 'art-gallery-3',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 154,
          'height' => 318,
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
function arts_node_info() {
  $items = array(
    'art' => array(
      'name' => t('יצירה'),
      'base' => 'node_content',
      'description' => t('מאפשר הוספת יצירה בודדת לאתר. '),
      'has_title' => '1',
      'title_label' => t('שם היצירה'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
