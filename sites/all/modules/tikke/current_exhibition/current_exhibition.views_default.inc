<?php
/**
 * @file
 * current_exhibition.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function current_exhibition_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'now_exhibition';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'תערוכה נוכחית';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* כותרת: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'now_exhibition:block_1';
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
    'exhibition' => 'exhibition',
  );
  /* Filter criterion: תוכן: מיקום התערוכה באתר (field_place_site) */
  $handler->display->display_options['filters']['field_place_site_tid']['id'] = 'field_place_site_tid';
  $handler->display->display_options['filters']['field_place_site_tid']['table'] = 'field_data_field_place_site';
  $handler->display->display_options['filters']['field_place_site_tid']['field'] = 'field_place_site_tid';
  $handler->display->display_options['filters']['field_place_site_tid']['value'] = array(
    195 => '195',
  );
  $handler->display->display_options['filters']['field_place_site_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_place_site_tid']['vocabulary'] = 'place_site';
  /* Filter criterion: תוכן: תאריך סגירת התערוכה - מנהל (field_close_manager) */
  $handler->display->display_options['filters']['field_close_manager_value']['id'] = 'field_close_manager_value';
  $handler->display->display_options['filters']['field_close_manager_value']['table'] = 'field_data_field_close_manager';
  $handler->display->display_options['filters']['field_close_manager_value']['field'] = 'field_close_manager_value';
  $handler->display->display_options['filters']['field_close_manager_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_close_manager_value']['default_date'] = 'now';
  /* Filter criterion: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Current Exhibition';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['block_description'] = 'תערוכה נוכחית';

  /* Display: גלרייה 1 */
  $handler = $view->new_display('block', 'גלרייה 1', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'hide';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* כותרת: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* הודעה בתחתית האתר: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="grid"></div>
<div class="one"></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: גלריית תערוכה */
  $handler->display->display_options['fields']['field_exh_gallery_top']['id'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['table'] = 'field_data_field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['field'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['label'] = '';
  $handler->display->display_options['fields']['field_exh_gallery_top']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_top']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exh_gallery_top']['settings'] = array(
    'image_style' => 'exhibition-gallery-1',
    'image_link' => '',
    'field_delimiter' => '',
  );
  $handler->display->display_options['fields']['field_exh_gallery_top']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_top']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'גלרייה תערוכה נוכחית 1';

  /* Display: גלרייה 3 */
  $handler = $view->new_display('block', 'גלרייה 3', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* כותרת: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* הודעה בתחתית האתר: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="grid"></div>
<div class="one"></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: גלריית תערוכה */
  $handler->display->display_options['fields']['field_exh_gallery_top']['id'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['table'] = 'field_data_field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['field'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['label'] = '';
  $handler->display->display_options['fields']['field_exh_gallery_top']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_top']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exh_gallery_top']['settings'] = array(
    'image_style' => 'exhibition-gallery-3',
    'image_link' => '',
    'field_delimiter' => '',
  );
  $handler->display->display_options['fields']['field_exh_gallery_top']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_top']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'גלרייה תערוכה נוכחית 3';
  $translatables['now_exhibition'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('איתחול'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('No Current Exhibition'),
    t('תערוכה נוכחית'),
    t('גלרייה 1'),
    t('@total'),
    t('<div class="grid"></div>
<div class="one"></div>'),
    t('גלרייה תערוכה נוכחית 1'),
    t('גלרייה 3'),
    t('גלרייה תערוכה נוכחית 3'),
  );
  $export['now_exhibition'] = $view;

  return $export;
}
