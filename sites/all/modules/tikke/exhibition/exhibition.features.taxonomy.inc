<?php
/**
 * @file
 * exhibition.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function exhibition_taxonomy_default_vocabularies() {
  return array(
    'place_site' => array(
      'name' => 'מיקום התערוכה באתר',
      'machine_name' => 'place_site',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
