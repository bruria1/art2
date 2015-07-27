<?php
/**
 * @file
 * home_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function home_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'home_page_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'מצגת לעמוד הבית';
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
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: תמונה למצגת */
  $handler->display->display_options['fields']['field_image_slideshow']['id'] = 'field_image_slideshow';
  $handler->display->display_options['fields']['field_image_slideshow']['table'] = 'field_data_field_image_slideshow';
  $handler->display->display_options['fields']['field_image_slideshow']['field'] = 'field_image_slideshow';
  $handler->display->display_options['fields']['field_image_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_image_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_slideshow']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slideshow']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* שדה: תוכן: כותרת משנה */
  $handler->display->display_options['fields']['field_second_title']['id'] = 'field_second_title';
  $handler->display->display_options['fields']['field_second_title']['table'] = 'field_data_field_second_title';
  $handler->display->display_options['fields']['field_second_title']['field'] = 'field_second_title';
  $handler->display->display_options['fields']['field_second_title']['label'] = '';
  $handler->display->display_options['fields']['field_second_title']['element_label_colon'] = FALSE;
  /* שדה: תוכן: קישור */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['alter']['text'] = '20';
  $handler->display->display_options['fields']['field_link']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_absolute';
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
  /* Filter criterion: תוכן: תמונה גדולה (field_large_image_grid) */
  $handler->display->display_options['filters']['field_large_image_grid_value']['id'] = 'field_large_image_grid_value';
  $handler->display->display_options['filters']['field_large_image_grid_value']['table'] = 'field_data_field_large_image_grid';
  $handler->display->display_options['filters']['field_large_image_grid_value']['field'] = 'field_large_image_grid_value';
  $handler->display->display_options['filters']['field_large_image_grid_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'hp_slideshow' => 'hp_slideshow',
  );
  /* Filter criterion: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'מצגת לעמוד הבית';
  $translatables['home_page_slideshow'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('איתחול'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('20'),
    t('Block'),
    t('מצגת לעמוד הבית'),
  );
  $export['home_page_slideshow'] = $view;

  return $export;
}
