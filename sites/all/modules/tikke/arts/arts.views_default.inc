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
  $view->name = 'arts_category_main_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Arts category main pages';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: תוכן: קמפוס  (field_campus) */
  $handler->display->display_options['relationships']['field_campus_tid']['id'] = 'field_campus_tid';
  $handler->display->display_options['relationships']['field_campus_tid']['table'] = 'field_data_field_campus';
  $handler->display->display_options['relationships']['field_campus_tid']['field'] = 'field_campus_tid';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* שדה: תוכן: תמונה גדולה */
  $handler->display->display_options['fields']['field_large_image_grid']['id'] = 'field_large_image_grid';
  $handler->display->display_options['fields']['field_large_image_grid']['table'] = 'field_data_field_large_image_grid';
  $handler->display->display_options['fields']['field_large_image_grid']['field'] = 'field_large_image_grid';
  $handler->display->display_options['fields']['field_large_image_grid']['label'] = '';
  $handler->display->display_options['fields']['field_large_image_grid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_large_image_grid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_large_image_grid']['hide_empty'] = TRUE;
  /* שדה: תוכן: גלריית היצירה */
  $handler->display->display_options['fields']['field_art_gallery']['id'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['table'] = 'field_data_field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['field'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_art_gallery']['element_class'] = '[field_large_image_grid]';
  $handler->display->display_options['fields']['field_art_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_art_gallery']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_art_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_art_gallery']['delta_offset'] = '0';
  /* שדה: תוכן: אמן/ית היצירה */
  $handler->display->display_options['fields']['field_artis']['id'] = 'field_artis';
  $handler->display->display_options['fields']['field_artis']['table'] = 'field_data_field_artis';
  $handler->display->display_options['fields']['field_artis']['field'] = 'field_artis';
  $handler->display->display_options['fields']['field_artis']['label'] = '';
  $handler->display->display_options['fields']['field_artis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artis']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_artis']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  /* Sort criterion: תוכן: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: סיווג במילון: מזהה מושג */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_campus_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: תוכן: קמפוס  (field_campus) */
  $handler->display->display_options['filters']['field_campus_tid']['id'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_tid']['field'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_campus_tid']['expose']['operator_id'] = 'field_campus_tid_op';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['label'] = 'קמפוס';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['operator'] = 'field_campus_tid_op';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['identifier'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_campus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_campus_tid']['vocabulary'] = 'campus';
  /* Filter criterion: תוכן: חומר (field_material) */
  $handler->display->display_options['filters']['field_material_tid']['id'] = 'field_material_tid';
  $handler->display->display_options['filters']['field_material_tid']['table'] = 'field_data_field_material';
  $handler->display->display_options['filters']['field_material_tid']['field'] = 'field_material_tid';
  $handler->display->display_options['filters']['field_material_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_material_tid']['expose']['operator_id'] = 'field_material_tid_op';
  $handler->display->display_options['filters']['field_material_tid']['expose']['label'] = 'חומר';
  $handler->display->display_options['filters']['field_material_tid']['expose']['operator'] = 'field_material_tid_op';
  $handler->display->display_options['filters']['field_material_tid']['expose']['identifier'] = 'field_material_tid';
  $handler->display->display_options['filters']['field_material_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_material_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_material_tid']['vocabulary'] = 'material';

  /* Display: Category page */
  $handler = $view->new_display('block', 'Category page', 'block');
  $handler->display->display_options['block_description'] = 'Art - Category page';
  $translatables['arts_category_main_pages'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('איתחול'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_campus'),
    t('הכל'),
    t('קמפוס'),
    t('חומר'),
    t('Category page'),
    t('Art - Category page'),
  );
  $export['arts_category_main_pages'] = $view;

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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
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

  /* Display: Top gallery */
  $handler = $view->new_display('block', 'Top gallery', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: גלריית היצירה */
  $handler->display->display_options['fields']['field_art_gallery']['id'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['table'] = 'field_data_field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['field'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_art_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_art_gallery']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_art_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery']['delta_offset'] = '0';
  /* שדה: תוכן: גלריית היצירה */
  $handler->display->display_options['fields']['field_art_gallery_1']['id'] = 'field_art_gallery_1';
  $handler->display->display_options['fields']['field_art_gallery_1']['table'] = 'field_data_field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery_1']['field'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery_1']['label'] = '';
  $handler->display->display_options['fields']['field_art_gallery_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_art_gallery_1']['alter']['text'] = '[field_art_gallery_1-title]';
  $handler->display->display_options['fields']['field_art_gallery_1']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_art_gallery_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_art_gallery_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_art_gallery_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_art_gallery_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery_1']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'Arts - Top gallery';

  /* Display: bottom_gallery */
  $handler = $view->new_display('block', 'bottom_gallery', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: תמונות - גלריית גריד תחתונה */
  $handler->display->display_options['fields']['field_gallery_grid']['id'] = 'field_gallery_grid';
  $handler->display->display_options['fields']['field_gallery_grid']['table'] = 'field_data_field_gallery_grid';
  $handler->display->display_options['fields']['field_gallery_grid']['field'] = 'field_gallery_grid';
  $handler->display->display_options['fields']['field_gallery_grid']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_grid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_grid']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_grid']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_grid']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_grid']['delta_offset'] = '0';
  /* שדה: תוכן: תמונות - גלריית גריד תחתונה */
  $handler->display->display_options['fields']['field_gallery_grid_1']['id'] = 'field_gallery_grid_1';
  $handler->display->display_options['fields']['field_gallery_grid_1']['table'] = 'field_data_field_gallery_grid';
  $handler->display->display_options['fields']['field_gallery_grid_1']['field'] = 'field_gallery_grid';
  $handler->display->display_options['fields']['field_gallery_grid_1']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_grid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_grid_1']['alter']['text'] = '[field_gallery_grid_1-title]';
  $handler->display->display_options['fields']['field_gallery_grid_1']['alter']['max_length'] = '12';
  $handler->display->display_options['fields']['field_gallery_grid_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_grid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_grid_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_grid_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_grid_1']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'Arts - Botoom gallery';
  $translatables['arts_galleries'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('איתחול'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('הכל'),
    t('Top gallery'),
    t('[field_art_gallery_1-title]'),
    t('Arts - Top gallery'),
    t('bottom_gallery'),
    t('[field_gallery_grid_1-title]'),
    t('Arts - Botoom gallery'),
  );
  $export['arts_galleries'] = $view;

  $view = new view();
  $view->name = 'arts_manage_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Arts manage view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ניהול יצירות';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'סינון';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'אתחול';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'כמות לתצוגה';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '25, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- הכל -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« לעמוד הראשון';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ לעמוד הקודם';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'לעמוד הבא ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'לעמוד האחרון »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_art_gallery' => 'field_art_gallery',
    'title' => 'title',
    'field_catalog' => 'field_catalog',
    'field_art_location' => 'field_art_location',
    'field_campus' => 'field_art_location',
    'field_art_location_text' => 'field_art_location',
    'field_art_date' => 'field_art_date',
    'field_material' => 'field_material',
    'field_measures' => 'field_measures',
    'field_art_style' => 'field_art_style',
    'field_art_type' => 'field_art_type',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'delete_node' => 'view_node',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_art_gallery' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_catalog' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_art_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '</br> ',
      'empty_column' => 0,
    ),
    'field_campus' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_art_location_text' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_art_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_material' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_measures' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_art_style' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_art_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '</br> ',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* שדה: Bulk operations: תוכן */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'מחיקה',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'עדכון משתנים',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'art::field_art_date' => 'art::field_art_date',
          'art::field_art_type' => 'art::field_art_type',
          'art::field_art_style' => 'art::field_art_style',
          'art::field_art_location' => 'art::field_art_location',
          'art::field_campus' => 'art::field_campus',
          'art::field_artis' => 'art::field_artis',
          'art::field_material' => 'art::field_material',
          'art::field_measures' => 'art::field_measures',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'הסרת פרסום',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'פרסום תוכן',
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* שדה: תוכן: גלריית היצירה */
  $handler->display->display_options['fields']['field_art_gallery']['id'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['table'] = 'field_data_field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['field'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_art_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_art_gallery']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_art_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_art_gallery']['delta_offset'] = '0';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'יצירה';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* שדה: תוכן: אמן/ית היצירה */
  $handler->display->display_options['fields']['field_artis']['id'] = 'field_artis';
  $handler->display->display_options['fields']['field_artis']['table'] = 'field_data_field_artis';
  $handler->display->display_options['fields']['field_artis']['field'] = 'field_artis';
  $handler->display->display_options['fields']['field_artis']['label'] = 'אמנים';
  $handler->display->display_options['fields']['field_artis']['settings'] = array(
    'link' => 0,
  );
  /* שדה: שדה: מספר קטלוג */
  $handler->display->display_options['fields']['field_catalog']['id'] = 'field_catalog';
  $handler->display->display_options['fields']['field_catalog']['table'] = 'field_data_field_catalog';
  $handler->display->display_options['fields']['field_catalog']['field'] = 'field_catalog';
  $handler->display->display_options['fields']['field_catalog']['label'] = 'מק״ט';
  $handler->display->display_options['fields']['field_catalog']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* שדה: תוכן: מיקום היצירה */
  $handler->display->display_options['fields']['field_art_location']['id'] = 'field_art_location';
  $handler->display->display_options['fields']['field_art_location']['table'] = 'field_data_field_art_location';
  $handler->display->display_options['fields']['field_art_location']['field'] = 'field_art_location';
  $handler->display->display_options['fields']['field_art_location']['label'] = 'מיקום';
  $handler->display->display_options['fields']['field_art_location']['type'] = 'taxonomy_term_reference_plain';
  /* שדה: תוכן: קמפוס  */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_campus']['delta_offset'] = '0';
  /* שדה: תוכן: איפה היצירה נמצאת?  */
  $handler->display->display_options['fields']['field_art_location_text']['id'] = 'field_art_location_text';
  $handler->display->display_options['fields']['field_art_location_text']['table'] = 'field_data_field_art_location_text';
  $handler->display->display_options['fields']['field_art_location_text']['field'] = 'field_art_location_text';
  $handler->display->display_options['fields']['field_art_location_text']['label'] = '';
  $handler->display->display_options['fields']['field_art_location_text']['element_label_colon'] = FALSE;
  /* שדה: תוכן: שנת היצירה */
  $handler->display->display_options['fields']['field_art_date']['id'] = 'field_art_date';
  $handler->display->display_options['fields']['field_art_date']['table'] = 'field_data_field_art_date';
  $handler->display->display_options['fields']['field_art_date']['field'] = 'field_art_date';
  $handler->display->display_options['fields']['field_art_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* שדה: תוכן: חומר */
  $handler->display->display_options['fields']['field_material']['id'] = 'field_material';
  $handler->display->display_options['fields']['field_material']['table'] = 'field_data_field_material';
  $handler->display->display_options['fields']['field_material']['field'] = 'field_material';
  $handler->display->display_options['fields']['field_material']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_material']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_material']['separator'] = '</br> ';
  /* שדה: תוכן: סגנון היצירה */
  $handler->display->display_options['fields']['field_art_style']['id'] = 'field_art_style';
  $handler->display->display_options['fields']['field_art_style']['table'] = 'field_data_field_art_style';
  $handler->display->display_options['fields']['field_art_style']['field'] = 'field_art_style';
  $handler->display->display_options['fields']['field_art_style']['label'] = 'סגנון';
  $handler->display->display_options['fields']['field_art_style']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_art_style']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_art_style']['separator'] = '</br> ';
  /* שדה: תוכן: סוג היצירה */
  $handler->display->display_options['fields']['field_art_type']['id'] = 'field_art_type';
  $handler->display->display_options['fields']['field_art_type']['table'] = 'field_data_field_art_type';
  $handler->display->display_options['fields']['field_art_type']['field'] = 'field_art_type';
  $handler->display->display_options['fields']['field_art_type']['label'] = 'סוג';
  $handler->display->display_options['fields']['field_art_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_art_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_art_type']['separator'] = '</br> ';
  /* שדה: תוכן: קישור */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'ניהול';
  $handler->display->display_options['fields']['view_node']['text'] = 'צפייה';
  /* שדה: תוכן: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'עריכה';
  /* שדה: תוכן: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_type'] = 'strong';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'מחיקה';
  /* שדה: תוכן: מפורסם */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'מפורסם?';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Sort criterion: תוכן: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'סטאטוס';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'art' => 'art',
  );
  /* Filter criterion: תוכן: קמפוס  (field_campus) */
  $handler->display->display_options['filters']['field_campus_tid']['id'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_tid']['field'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_campus_tid']['expose']['operator_id'] = 'field_campus_tid_op';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['label'] = 'קמפוס';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['operator'] = 'field_campus_tid_op';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['identifier'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_campus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_campus_tid']['vocabulary'] = 'campus';
  /* Filter criterion: תוכן: חומר (field_material) */
  $handler->display->display_options['filters']['field_material_tid']['id'] = 'field_material_tid';
  $handler->display->display_options['filters']['field_material_tid']['table'] = 'field_data_field_material';
  $handler->display->display_options['filters']['field_material_tid']['field'] = 'field_material_tid';
  $handler->display->display_options['filters']['field_material_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_material_tid']['expose']['operator_id'] = 'field_material_tid_op';
  $handler->display->display_options['filters']['field_material_tid']['expose']['label'] = 'חומר';
  $handler->display->display_options['filters']['field_material_tid']['expose']['operator'] = 'field_material_tid_op';
  $handler->display->display_options['filters']['field_material_tid']['expose']['identifier'] = 'field_material_tid';
  $handler->display->display_options['filters']['field_material_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_material_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_material_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_material_tid']['vocabulary'] = 'material';
  /* Filter criterion: תוכן: סגנון היצירה (field_art_style) */
  $handler->display->display_options['filters']['field_art_style_tid']['id'] = 'field_art_style_tid';
  $handler->display->display_options['filters']['field_art_style_tid']['table'] = 'field_data_field_art_style';
  $handler->display->display_options['filters']['field_art_style_tid']['field'] = 'field_art_style_tid';
  $handler->display->display_options['filters']['field_art_style_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_art_style_tid']['expose']['operator_id'] = 'field_art_style_tid_op';
  $handler->display->display_options['filters']['field_art_style_tid']['expose']['label'] = 'סגנון';
  $handler->display->display_options['filters']['field_art_style_tid']['expose']['operator'] = 'field_art_style_tid_op';
  $handler->display->display_options['filters']['field_art_style_tid']['expose']['identifier'] = 'field_art_style_tid';
  $handler->display->display_options['filters']['field_art_style_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_art_style_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_art_style_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_art_style_tid']['vocabulary'] = 'art_style';
  /* Filter criterion: תוכן: שנת היצירה (field_art_date) */
  $handler->display->display_options['filters']['field_art_date_value']['id'] = 'field_art_date_value';
  $handler->display->display_options['filters']['field_art_date_value']['table'] = 'field_data_field_art_date';
  $handler->display->display_options['filters']['field_art_date_value']['field'] = 'field_art_date_value';
  $handler->display->display_options['filters']['field_art_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_art_date_value']['expose']['operator_id'] = 'field_art_date_value_op';
  $handler->display->display_options['filters']['field_art_date_value']['expose']['label'] = 'שנת היצירה';
  $handler->display->display_options['filters']['field_art_date_value']['expose']['operator'] = 'field_art_date_value_op';
  $handler->display->display_options['filters']['field_art_date_value']['expose']['identifier'] = 'field_art_date_value';
  $handler->display->display_options['filters']['field_art_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_art_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_art_date_value']['year_range'] = '-100:+0';
  /* Filter criterion: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'und' => 'und',
    'en' => 'en',
    'he' => 'he',
  );
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'שפה';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['language']['expose']['reduce'] = TRUE;
  /* Filter criterion: שדה: מספר קטלוג (field_catalog) */
  $handler->display->display_options['filters']['field_catalog_value']['id'] = 'field_catalog_value';
  $handler->display->display_options['filters']['field_catalog_value']['table'] = 'field_data_field_catalog';
  $handler->display->display_options['filters']['field_catalog_value']['field'] = 'field_catalog_value';
  $handler->display->display_options['filters']['field_catalog_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_catalog_value']['expose']['operator_id'] = 'field_catalog_value_op';
  $handler->display->display_options['filters']['field_catalog_value']['expose']['label'] = 'מק״ט';
  $handler->display->display_options['filters']['field_catalog_value']['expose']['operator'] = 'field_catalog_value_op';
  $handler->display->display_options['filters']['field_catalog_value']['expose']['identifier'] = 'field_catalog_value';
  $handler->display->display_options['filters']['field_catalog_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: תוכן: סוג היצירה (field_art_type) */
  $handler->display->display_options['filters']['field_art_type_tid']['id'] = 'field_art_type_tid';
  $handler->display->display_options['filters']['field_art_type_tid']['table'] = 'field_data_field_art_type';
  $handler->display->display_options['filters']['field_art_type_tid']['field'] = 'field_art_type_tid';
  $handler->display->display_options['filters']['field_art_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['operator_id'] = 'field_art_type_tid_op';
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['label'] = 'סוג';
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['operator'] = 'field_art_type_tid_op';
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['identifier'] = 'field_art_type_tid';
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_art_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_art_type_tid']['vocabulary'] = 'art_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'סינון';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'אתחול';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_artis_target_id']['id'] = 'field_artis_target_id';
  $handler->display->display_options['relationships']['field_artis_target_id']['table'] = 'field_data_field_artis';
  $handler->display->display_options['relationships']['field_artis_target_id']['field'] = 'field_artis_target_id';
  $handler->display->display_options['relationships']['field_artis_target_id']['label'] = 'artist_ref';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: Bulk operations: תוכן */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'מחיקה',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'עדכון משתנים',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'art::field_art_date' => 'art::field_art_date',
          'art::field_art_type' => 'art::field_art_type',
          'art::field_art_style' => 'art::field_art_style',
          'art::field_art_location' => 'art::field_art_location',
          'art::field_campus' => 'art::field_campus',
          'art::field_artis' => 'art::field_artis',
          'art::field_material' => 'art::field_material',
          'art::field_measures' => 'art::field_measures',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'הסרת פרסום',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'פרסום תוכן',
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* שדה: תוכן: גלריית היצירה */
  $handler->display->display_options['fields']['field_art_gallery']['id'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['table'] = 'field_data_field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['field'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_art_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_art_gallery']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_art_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_art_gallery']['delta_offset'] = '0';
  /* שדה: שדה: מספר קטלוג */
  $handler->display->display_options['fields']['field_catalog']['id'] = 'field_catalog';
  $handler->display->display_options['fields']['field_catalog']['table'] = 'field_data_field_catalog';
  $handler->display->display_options['fields']['field_catalog']['field'] = 'field_catalog';
  $handler->display->display_options['fields']['field_catalog']['label'] = 'מק״ט';
  $handler->display->display_options['fields']['field_catalog']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
  );
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'יצירה';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* שדה: תוכן: אמן/ית היצירה */
  $handler->display->display_options['fields']['field_artis']['id'] = 'field_artis';
  $handler->display->display_options['fields']['field_artis']['table'] = 'field_data_field_artis';
  $handler->display->display_options['fields']['field_artis']['field'] = 'field_artis';
  $handler->display->display_options['fields']['field_artis']['label'] = 'אמנים';
  $handler->display->display_options['fields']['field_artis']['settings'] = array(
    'link' => 0,
  );
  /* שדה: תוכן: מיקום היצירה */
  $handler->display->display_options['fields']['field_art_location']['id'] = 'field_art_location';
  $handler->display->display_options['fields']['field_art_location']['table'] = 'field_data_field_art_location';
  $handler->display->display_options['fields']['field_art_location']['field'] = 'field_art_location';
  $handler->display->display_options['fields']['field_art_location']['label'] = 'מיקום';
  $handler->display->display_options['fields']['field_art_location']['type'] = 'taxonomy_term_reference_plain';
  /* שדה: תוכן: קמפוס  */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_campus']['delta_offset'] = '0';
  /* שדה: תוכן: איפה היצירה נמצאת?  */
  $handler->display->display_options['fields']['field_art_location_text']['id'] = 'field_art_location_text';
  $handler->display->display_options['fields']['field_art_location_text']['table'] = 'field_data_field_art_location_text';
  $handler->display->display_options['fields']['field_art_location_text']['field'] = 'field_art_location_text';
  $handler->display->display_options['fields']['field_art_location_text']['label'] = '';
  $handler->display->display_options['fields']['field_art_location_text']['element_label_colon'] = FALSE;
  /* שדה: תוכן: שנת היצירה */
  $handler->display->display_options['fields']['field_art_date']['id'] = 'field_art_date';
  $handler->display->display_options['fields']['field_art_date']['table'] = 'field_data_field_art_date';
  $handler->display->display_options['fields']['field_art_date']['field'] = 'field_art_date';
  $handler->display->display_options['fields']['field_art_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* שדה: תוכן: חומר */
  $handler->display->display_options['fields']['field_material']['id'] = 'field_material';
  $handler->display->display_options['fields']['field_material']['table'] = 'field_data_field_material';
  $handler->display->display_options['fields']['field_material']['field'] = 'field_material';
  $handler->display->display_options['fields']['field_material']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_material']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_material']['separator'] = '</br> ';
  /* שדה: תוכן: סגנון היצירה */
  $handler->display->display_options['fields']['field_art_style']['id'] = 'field_art_style';
  $handler->display->display_options['fields']['field_art_style']['table'] = 'field_data_field_art_style';
  $handler->display->display_options['fields']['field_art_style']['field'] = 'field_art_style';
  $handler->display->display_options['fields']['field_art_style']['label'] = 'סגנון';
  $handler->display->display_options['fields']['field_art_style']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_art_style']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_art_style']['separator'] = '</br> ';
  /* שדה: תוכן: סוג היצירה */
  $handler->display->display_options['fields']['field_art_type']['id'] = 'field_art_type';
  $handler->display->display_options['fields']['field_art_type']['table'] = 'field_data_field_art_type';
  $handler->display->display_options['fields']['field_art_type']['field'] = 'field_art_type';
  $handler->display->display_options['fields']['field_art_type']['label'] = 'סוג';
  $handler->display->display_options['fields']['field_art_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_art_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_art_type']['separator'] = '</br> ';
  /* שדה: תוכן: קישור */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'ניהול';
  $handler->display->display_options['fields']['view_node']['text'] = 'צפייה';
  /* שדה: תוכן: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'עריכה';
  /* שדה: תוכן: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_type'] = 'strong';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'מחיקה';
  /* שדה: תוכן: מפורסם */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'מפורסם?';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* שדה: תוכן: שפה */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'סטאטוס';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'art' => 'art',
  );
  /* Filter criterion: תוכן: קמפוס  (field_campus) */
  $handler->display->display_options['filters']['field_campus_tid']['id'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_tid']['field'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_campus_tid']['expose']['operator_id'] = 'field_campus_tid_op';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['label'] = 'קמפוס';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['operator'] = 'field_campus_tid_op';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['identifier'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_campus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_campus_tid']['vocabulary'] = 'campus';
  /* Filter criterion: תוכן: חומר (field_material) */
  $handler->display->display_options['filters']['field_material_tid']['id'] = 'field_material_tid';
  $handler->display->display_options['filters']['field_material_tid']['table'] = 'field_data_field_material';
  $handler->display->display_options['filters']['field_material_tid']['field'] = 'field_material_tid';
  $handler->display->display_options['filters']['field_material_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_material_tid']['expose']['operator_id'] = 'field_material_tid_op';
  $handler->display->display_options['filters']['field_material_tid']['expose']['label'] = 'חומר';
  $handler->display->display_options['filters']['field_material_tid']['expose']['operator'] = 'field_material_tid_op';
  $handler->display->display_options['filters']['field_material_tid']['expose']['identifier'] = 'field_material_tid';
  $handler->display->display_options['filters']['field_material_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_material_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_material_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_material_tid']['vocabulary'] = 'material';
  /* Filter criterion: תוכן: סגנון היצירה (field_art_style) */
  $handler->display->display_options['filters']['field_art_style_tid']['id'] = 'field_art_style_tid';
  $handler->display->display_options['filters']['field_art_style_tid']['table'] = 'field_data_field_art_style';
  $handler->display->display_options['filters']['field_art_style_tid']['field'] = 'field_art_style_tid';
  $handler->display->display_options['filters']['field_art_style_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_art_style_tid']['expose']['operator_id'] = 'field_art_style_tid_op';
  $handler->display->display_options['filters']['field_art_style_tid']['expose']['label'] = 'סגנון';
  $handler->display->display_options['filters']['field_art_style_tid']['expose']['operator'] = 'field_art_style_tid_op';
  $handler->display->display_options['filters']['field_art_style_tid']['expose']['identifier'] = 'field_art_style_tid';
  $handler->display->display_options['filters']['field_art_style_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_art_style_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_art_style_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_art_style_tid']['vocabulary'] = 'art_style';
  /* Filter criterion: תוכן: שנת היצירה (field_art_date) */
  $handler->display->display_options['filters']['field_art_date_value']['id'] = 'field_art_date_value';
  $handler->display->display_options['filters']['field_art_date_value']['table'] = 'field_data_field_art_date';
  $handler->display->display_options['filters']['field_art_date_value']['field'] = 'field_art_date_value';
  $handler->display->display_options['filters']['field_art_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_art_date_value']['expose']['operator_id'] = 'field_art_date_value_op';
  $handler->display->display_options['filters']['field_art_date_value']['expose']['label'] = 'שנת היצירה';
  $handler->display->display_options['filters']['field_art_date_value']['expose']['operator'] = 'field_art_date_value_op';
  $handler->display->display_options['filters']['field_art_date_value']['expose']['identifier'] = 'field_art_date_value';
  $handler->display->display_options['filters']['field_art_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_art_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_art_date_value']['year_range'] = '-100:+0';
  /* Filter criterion: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'und' => 'und',
    'en' => 'en',
    'he' => 'he',
  );
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'שפה';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['language']['expose']['reduce'] = TRUE;
  /* Filter criterion: שדה: מספר קטלוג (field_catalog) */
  $handler->display->display_options['filters']['field_catalog_value']['id'] = 'field_catalog_value';
  $handler->display->display_options['filters']['field_catalog_value']['table'] = 'field_data_field_catalog';
  $handler->display->display_options['filters']['field_catalog_value']['field'] = 'field_catalog_value';
  $handler->display->display_options['filters']['field_catalog_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_catalog_value']['expose']['operator_id'] = 'field_catalog_value_op';
  $handler->display->display_options['filters']['field_catalog_value']['expose']['label'] = 'מק״ט';
  $handler->display->display_options['filters']['field_catalog_value']['expose']['operator'] = 'field_catalog_value_op';
  $handler->display->display_options['filters']['field_catalog_value']['expose']['identifier'] = 'field_catalog_value';
  $handler->display->display_options['filters']['field_catalog_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: תוכן: סוג היצירה (field_art_type) */
  $handler->display->display_options['filters']['field_art_type_tid']['id'] = 'field_art_type_tid';
  $handler->display->display_options['filters']['field_art_type_tid']['table'] = 'field_data_field_art_type';
  $handler->display->display_options['filters']['field_art_type_tid']['field'] = 'field_art_type_tid';
  $handler->display->display_options['filters']['field_art_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['operator_id'] = 'field_art_type_tid_op';
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['label'] = 'סוג';
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['operator'] = 'field_art_type_tid_op';
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['identifier'] = 'field_art_type_tid';
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_art_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_art_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_art_type_tid']['vocabulary'] = 'art_type';
  /* Filter criterion: תוכן: אמן/ית היצירה (field_artis) (reference filter) */
  $handler->display->display_options['filters']['field_artis_target_id_entityreference_filter']['id'] = 'field_artis_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_artis_target_id_entityreference_filter']['table'] = 'field_data_field_artis';
  $handler->display->display_options['filters']['field_artis_target_id_entityreference_filter']['field'] = 'field_artis_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_artis_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artis_target_id_entityreference_filter']['expose']['operator_id'] = 'field_artis_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_artis_target_id_entityreference_filter']['expose']['label'] = 'אמן/ית היצירה (field_artis) (reference filter)';
  $handler->display->display_options['filters']['field_artis_target_id_entityreference_filter']['expose']['operator'] = 'field_artis_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_artis_target_id_entityreference_filter']['expose']['identifier'] = 'field_artis_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_artis_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_artis_target_id_entityreference_filter']['expose']['reference_widget'] = 'autocomplete';
  $handler->display->display_options['filters']['field_artis_target_id_entityreference_filter']['reference_display'] = 'arts_manage_view:entityreference_1';
  $handler->display->display_options['path'] = 'admin/arts_mange';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'ניהול יצירות';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-managermenu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'סטאטוס';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artists' => 'artists',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-full.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['path'] = 'arts_export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['arts_manage_view'] = array(
    t('Master'),
    t('ניהול יצירות'),
    t('more'),
    t('סינון'),
    t('אתחול'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('כמות לתצוגה'),
    t('- הכל -'),
    t('Offset'),
    t('« לעמוד הראשון'),
    t('‹ לעמוד הקודם'),
    t('לעמוד הבא ›'),
    t('לעמוד האחרון »'),
    t('- Choose an operation -'),
    t('מחיקה'),
    t('עדכון משתנים'),
    t('הסרת פרסום'),
    t('פרסום תוכן'),
    t('יצירה'),
    t('אמנים'),
    t('מק״ט'),
    t('מיקום'),
    t('קמפוס '),
    t('שנת היצירה'),
    t('חומר'),
    t('סגנון'),
    t('סוג'),
    t('ניהול'),
    t('צפייה'),
    t('עריכה'),
    t('מפורסם?'),
    t('סטאטוס'),
    t('קמפוס'),
    t('שפה'),
    t('Page'),
    t('artist_ref'),
    t('אמן/ית היצירה (field_artis) (reference filter)'),
    t('Entity Reference'),
    t('Data export'),
  );
  $export['arts_manage_view'] = $view;

  return $export;
}
