<?php
/**
 * @file
 * treasurer.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function treasurer_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_treasurer_info'
  $field_bases['field_treasurer_info'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_treasurer_info',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
