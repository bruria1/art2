<?php
/**
 * @file
 * arts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function arts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'arts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'אמנות בקמפוסים';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'סינון';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« לעמוד הראשון';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ לעמוד הקודם';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'לעמוד הבא ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'לעמוד האחרון »';
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['masonry_column_width'] = '33.33';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = '%';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '10';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = TRUE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = TRUE;
  $handler->display->display_options['style_options']['masonry_rtl'] = TRUE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: גלריית היצירה */
  $handler->display->display_options['fields']['field_art_gallery']['id'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['table'] = 'field_data_field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['field'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_art_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_art_gallery']['settings'] = array(
    'image_style' => 'masonry',
    'image_link' => 'content',
    'field_delimiter' => '',
  );
  $handler->display->display_options['fields']['field_art_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_art_gallery']['delta_offset'] = '0';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* שדה: תוכן: תקציר לעמוד */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Sort criterion: תוכן: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'art' => 'art',
  );
  /* Filter criterion: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: תוכן: קמפוס  (field_campus) */
  $handler->display->display_options['filters']['field_campus_tid']['id'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_tid']['field'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['value'] = array(
    47 => '47',
    48 => '48',
    37 => '37',
    46 => '46',
    49 => '49',
    32 => '32',
    31 => '31',
    35 => '35',
    33 => '33',
    34 => '34',
  );
  $handler->display->display_options['filters']['field_campus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_campus_tid']['expose']['operator_id'] = 'field_campus_tid_op';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['label'] = 'שם הקמפוס';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['operator'] = 'field_campus_tid_op';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['identifier'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_campus_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_campus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_campus_tid']['vocabulary'] = 'campus';
  /* Filter criterion: תוכן: סוג היצירה (field_art_type) */
  $handler->display->display_options['filters']['field_art_type_tid']['id'] = 'field_art_type_tid';
  $handler->display->display_options['filters']['field_art_type_tid']['table'] = 'field_data_field_art_type';
  $handler->display->display_options['filters']['field_art_type_tid']['field'] = 'field_art_type_tid';
  $handler->display->display_options['filters']['field_art_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['operator_id'] = 'field_art_type_tid_op';
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['label'] = 'סוג היצירה';
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['operator'] = 'field_art_type_tid_op';
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['identifier'] = 'field_art_type_tid';
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_art_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_art_type_tid']['vocabulary'] = 'art_type';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'אמנות בקמפוסים';
  $translatables['arts'] = array(
    t('Master'),
    t('more'),
    t('סינון'),
    t('איתחול'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« לעמוד הראשון'),
    t('‹ לעמוד הקודם'),
    t('לעמוד הבא ›'),
    t('לעמוד האחרון »'),
    t('שם הקמפוס'),
    t('סוג היצירה'),
    t('Block'),
    t('אמנות בקמפוסים'),
  );
  $export['arts'] = $view;

  $view = new view();
  $view->name = 'arts_galleries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'arts galleries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* הודעה בתחתית האתר: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="grid"></div>
<div class="one"></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: תוכן: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: תוכן: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'art' => 'art',
  );

  /* Display: Gallery -1 */
  $handler = $view->new_display('block', 'Gallery -1', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'hide';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: גלריית היצירה */
  $handler->display->display_options['fields']['field_art_gallery']['id'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['table'] = 'field_data_field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['field'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_art_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_art_gallery']['settings'] = array(
    'image_style' => 'art-gallery-1',
    'image_link' => '',
    'field_delimiter' => '',
  );
  $handler->display->display_options['fields']['field_art_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'Arts - gallery -1';

  /* Display: Gallery - 3 */
  $handler = $view->new_display('block', 'Gallery - 3', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: גלריית היצירה */
  $handler->display->display_options['fields']['field_art_gallery']['id'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['table'] = 'field_data_field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['field'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_art_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_art_gallery']['settings'] = array(
    'image_style' => 'art-gallery-3',
    'image_link' => '',
    'field_delimiter' => '',
  );
  $handler->display->display_options['fields']['field_art_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'Arts - gallery - 3';
  $translatables['arts_galleries'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('איתחול'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="grid"></div>
<div class="one"></div>'),
    t('הכל'),
    t('Gallery -1'),
    t('Arts - gallery -1'),
    t('Gallery - 3'),
    t('Arts - gallery - 3'),
  );
  $export['arts_galleries'] = $view;

  return $export;
}
