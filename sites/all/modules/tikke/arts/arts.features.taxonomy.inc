<?php
/**
 * @file
 * arts.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function arts_taxonomy_default_vocabularies() {
  return array(
    'art_style' => array(
      'name' => 'סגנון היצירה',
      'machine_name' => 'art_style',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
    'art_type' => array(
      'name' => 'סוג היצירה',
      'machine_name' => 'art_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
    'campus' => array(
      'name' => 'קמפוס',
      'machine_name' => 'campus',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
    'location' => array(
      'name' => 'מיקום',
      'machine_name' => 'location',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
    'material' => array(
      'name' => 'חומר',
      'machine_name' => 'material',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
    'measures' => array(
      'name' => 'מידות',
      'machine_name' => 'measures',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
