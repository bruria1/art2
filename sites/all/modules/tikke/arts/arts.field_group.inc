<?php
/**
 * @file
 * arts.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function arts_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_artist|node|art|form';
  $field_group->group_name = 'group_artist';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'אומן',
    'weight' => '35',
    'children' => array(
      0 => 'field_artis',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-artist field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_artist|node|art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|art|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'תוכן ',
    'weight' => '34',
    'children' => array(
      0 => 'field_text',
      1 => 'field_teaser',
      2 => 'field_comments',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global|node|art|form';
  $field_group->group_name = 'group_global';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'מידע כללי',
    'weight' => '36',
    'children' => array(
      0 => 'field_art_date',
      1 => 'field_catalog',
      2 => 'field_campus',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'מידע כללי',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-global field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_global|node|art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|art|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ראשי',
    'weight' => '5',
    'children' => array(
      0 => 'group_artist',
      1 => 'group_content',
      2 => 'group_global',
      3 => 'group_media',
      4 => 'group_tags',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main field-group-tabs',
      ),
    ),
  );
  $export['group_main|node|art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|art|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'מדיה',
    'weight' => '38',
    'children' => array(
      0 => 'field_large_image_grid',
      1 => 'field_art_gallery',
      2 => 'field_gallery_grid',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|art|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'תיוג היצירה',
    'weight' => '37',
    'children' => array(
      0 => 'field_art_type',
      1 => 'field_art_style',
      2 => 'field_art_location',
      3 => 'field_art_location_text',
      4 => 'field_material',
      5 => 'field_sizes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tags field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tags|node|art|form'] = $field_group;

  return $export;
}
