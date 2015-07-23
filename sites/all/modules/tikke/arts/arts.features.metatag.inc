<?php
/**
 * @file
 * arts.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function arts_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:art.
  $config['node:art'] = array(
    'instance' => 'node:art',
    'config' => array(
      'description' => array(
        'value' => '[node:field-teaser]',
      ),
      'og:description' => array(
        'value' => '[node:field-teaser]',
      ),
      'og:image' => array(
        'value' => '[node:field_art_gallery]',
      ),
    ),
  );

  return $config;
}
