<?php
/**
 * @file
 * exhibition.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function exhibition_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|exhibition|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'תוכן התערוכה',
    'weight' => '22',
    'children' => array(
      0 => 'field_teaser',
      1 => 'field_text',
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
  $export['group_content|node|exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_designers|node|exhibition|form';
  $field_group->group_name = 'group_designers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'אוצרים ומעצבים ואמנים',
    'weight' => '25',
    'children' => array(
      0 => 'field_designers',
      1 => 'field_treasurers_name',
      2 => 'field_copyright',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'אוצרים ומעצבים ואמנים',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-designers field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_designers|node|exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global|node|exhibition|form';
  $field_group->group_name = 'group_global';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'מידע כללי',
    'weight' => '24',
    'children' => array(
      0 => 'field_campus',
      1 => 'field_exh_location',
      2 => 'field_exh_open_date',
      3 => 'field_month_date',
      4 => 'field_date_year',
      5 => 'field_open_date',
      6 => 'field_closing_date',
      7 => 'field_full_date_2',
      8 => 'field_month_date_2',
      9 => 'field_year_date_2',
      10 => 'field_place_site',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-global field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_global|node|exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|exhibition|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'כללי',
    'weight' => '3',
    'children' => array(
      0 => 'group_content',
      1 => 'group_designers',
      2 => 'group_global',
      3 => 'group_media',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main field-group-tabs',
      ),
    ),
  );
  $export['group_main|node|exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|exhibition|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'מדיה',
    'weight' => '26',
    'children' => array(
      0 => 'field_exh_gallery_top',
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
  $export['group_media|node|exhibition|form'] = $field_group;

  return $export;
}
