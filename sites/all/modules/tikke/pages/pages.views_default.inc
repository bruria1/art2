<?php
/**
 * @file
 * pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pages_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pages gallery';
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
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: גלרייה לעמוד רגיל */
  $handler->display->display_options['fields']['field_page_gallery']['id'] = 'field_page_gallery';
  $handler->display->display_options['fields']['field_page_gallery']['table'] = 'field_data_field_page_gallery';
  $handler->display->display_options['fields']['field_page_gallery']['field'] = 'field_page_gallery';
  $handler->display->display_options['fields']['field_page_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_page_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_page_gallery']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_page_gallery']['delta_offset'] = '0';
  /* שדה: תוכן: גלרייה לעמוד רגיל */
  $handler->display->display_options['fields']['field_page_gallery_1']['id'] = 'field_page_gallery_1';
  $handler->display->display_options['fields']['field_page_gallery_1']['table'] = 'field_data_field_page_gallery';
  $handler->display->display_options['fields']['field_page_gallery_1']['field'] = 'field_page_gallery';
  $handler->display->display_options['fields']['field_page_gallery_1']['label'] = '';
  $handler->display->display_options['fields']['field_page_gallery_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_page_gallery_1']['alter']['text'] = '[field_page_gallery_1-title]';
  $handler->display->display_options['fields']['field_page_gallery_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_gallery_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_page_gallery_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_page_gallery_1']['delta_offset'] = '0';
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
    'page' => 'page',
  );

  /* Display: עמוד רגיל - גלריה */
  $handler = $view->new_display('block', 'עמוד רגיל - גלריה', 'block');
  $handler->display->display_options['block_description'] = 'עמוד רגיל - גלריה';
  $translatables['pages_gallery'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('איתחול'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_page_gallery_1-title]'),
    t('הכל'),
    t('עמוד רגיל - גלריה'),
  );
  $export['pages_gallery'] = $view;

  return $export;
}
