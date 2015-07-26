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
