<?php
/**
 * @file
 * exhibition.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function exhibition_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'exhibition_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Exhibition gallery';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '3';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['scroll'] = '3';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: גלריית תערוכה - אזור עליון */
  $handler->display->display_options['fields']['field_exh_gallery_top']['id'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['table'] = 'field_data_field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['field'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['label'] = '';
  $handler->display->display_options['fields']['field_exh_gallery_top']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_top']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exh_gallery_top']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* שדה: Broken/missing handler */
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['id'] = 'field_exh_gallery_bottom';
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['table'] = 'field_data_field_exh_gallery_bottom';
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['field'] = 'field_exh_gallery_bottom';
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['label'] = '';
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['element_label_colon'] = FALSE;
  /* Sort criterion: תוכן: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: תוכן: גלריית תערוכה - אזור עליון (field_exh_gallery_top:fid) */
  $handler->display->display_options['sorts']['field_exh_gallery_top_fid']['id'] = 'field_exh_gallery_top_fid';
  $handler->display->display_options['sorts']['field_exh_gallery_top_fid']['table'] = 'field_data_field_exh_gallery_top';
  $handler->display->display_options['sorts']['field_exh_gallery_top_fid']['field'] = 'field_exh_gallery_top_fid';
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
    'exhibition' => 'exhibition',
  );

  /* Display: Top gallery-3 */
  $handler = $view->new_display('block', 'Top gallery-3', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'display';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* הודעה בתחתית האתר: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="grid"></div>
<div class="one"></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: גלריית תערוכה - אזור עליון */
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
  $handler->display->display_options['fields']['field_exh_gallery_top']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Exhibition - Top gallery -3';

  /* Display: Top gallery-1 */
  $handler = $view->new_display('block', 'Top gallery-1', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'hide';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* הודעה בתחתית האתר: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="grid"></div>
<div class="one"></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: גלריית תערוכה - אזור עליון */
  $handler->display->display_options['fields']['field_exh_gallery_top']['id'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['table'] = 'field_data_field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['field'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['label'] = '';
  $handler->display->display_options['fields']['field_exh_gallery_top']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_top']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exh_gallery_top']['settings'] = array(
    'image_style' => 'exhibition-gallery-1',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_exh_gallery_top']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_top']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: תוכן: גלריית תערוכה - אזור עליון (field_exh_gallery_top:fid) */
  $handler->display->display_options['sorts']['field_exh_gallery_top_fid']['id'] = 'field_exh_gallery_top_fid';
  $handler->display->display_options['sorts']['field_exh_gallery_top_fid']['table'] = 'field_data_field_exh_gallery_top';
  $handler->display->display_options['sorts']['field_exh_gallery_top_fid']['field'] = 'field_exh_gallery_top_fid';
  $handler->display->display_options['block_description'] = 'Exhibition - Top gallery -1';
  $translatables['exhibition_gallery'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('איתחול'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('הכל'),
    t('Top gallery-3'),
    t('<div class="grid"></div>
<div class="one"></div>'),
    t('Exhibition - Top gallery -3'),
    t('Top gallery-1'),
    t('Exhibition - Top gallery -1'),
  );
  $export['exhibition_gallery'] = $view;

  $view = new view();
  $view->name = 'exhibition_manager';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Exhibition manager';
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- הכל -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« לעמוד הראשון';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ לעמוד הקודם';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'לעמוד הבא ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'לעמוד האחרון »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_exh_gallery_top' => 'field_exh_gallery_top',
    'title' => 'title',
    'field_catalog' => 'field_catalog',
    'field_exh_open_date' => 'field_exh_open_date',
    'field_eh_close_date' => 'field_exh_open_date',
    'field_campus' => 'field_campus',
    'field_exh_location' => 'field_exh_location',
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
    'field_exh_gallery_top' => array(
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
    'field_exh_open_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '</br> ',
      'empty_column' => 0,
    ),
    'field_eh_close_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_campus' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exh_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'עדכון משתנים',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'exhibition::field_campus' => 'exhibition::field_campus',
          'exhibition::field_exh_location' => 'exhibition::field_exh_location',
        ),
      ),
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'הסרת פרסום',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'פרסום תוכן',
    ),
  );
  /* שדה: תוכן: גלריית תערוכה - אזור עליון */
  $handler->display->display_options['fields']['field_exh_gallery_top']['id'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['table'] = 'field_data_field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['field'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['label'] = '';
  $handler->display->display_options['fields']['field_exh_gallery_top']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_top']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exh_gallery_top']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_exh_gallery_top']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_exh_gallery_top']['delta_offset'] = '0';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* שדה: תוכן: תאריך מלא */
  $handler->display->display_options['fields']['field_exh_open_date']['id'] = 'field_exh_open_date';
  $handler->display->display_options['fields']['field_exh_open_date']['table'] = 'field_data_field_exh_open_date';
  $handler->display->display_options['fields']['field_exh_open_date']['field'] = 'field_exh_open_date';
  $handler->display->display_options['fields']['field_exh_open_date']['label'] = 'פתיחה וסגירה';
  $handler->display->display_options['fields']['field_exh_open_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* שדה: תוכן: קמפוס  */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_campus']['delta_offset'] = '0';
  /* שדה: תוכן: מיקום התערוכה */
  $handler->display->display_options['fields']['field_exh_location']['id'] = 'field_exh_location';
  $handler->display->display_options['fields']['field_exh_location']['table'] = 'field_data_field_exh_location';
  $handler->display->display_options['fields']['field_exh_location']['field'] = 'field_exh_location';
  $handler->display->display_options['fields']['field_exh_location']['label'] = 'מיקום';
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
  $handler->display->display_options['filters']['status']['value'] = 1;
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
    'exhibition' => 'exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: תוכן: קמפוס  (field_campus) */
  $handler->display->display_options['filters']['field_campus_tid']['id'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_tid']['field'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['group'] = 1;
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
  /* Filter criterion: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'und' => 'und',
    'en' => 'en',
    'he' => 'he',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
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
  /* Filter criterion: תוכן: תאריך מלא (field_exh_open_date) */
  $handler->display->display_options['filters']['field_exh_open_date_value']['id'] = 'field_exh_open_date_value';
  $handler->display->display_options['filters']['field_exh_open_date_value']['table'] = 'field_data_field_exh_open_date';
  $handler->display->display_options['filters']['field_exh_open_date_value']['field'] = 'field_exh_open_date_value';
  $handler->display->display_options['filters']['field_exh_open_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_exh_open_date_value']['expose']['operator_id'] = 'field_exh_open_date_value_op';
  $handler->display->display_options['filters']['field_exh_open_date_value']['expose']['label'] = 'פתיחה';
  $handler->display->display_options['filters']['field_exh_open_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_exh_open_date_value']['expose']['operator'] = 'field_exh_open_date_value_op';
  $handler->display->display_options['filters']['field_exh_open_date_value']['expose']['identifier'] = 'field_exh_open_date_value';
  $handler->display->display_options['filters']['field_exh_open_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_exh_open_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_exh_open_date_value']['year_range'] = '-20:+0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_exh_gallery_top' => 'field_exh_gallery_top',
    'title' => 'title',
    'field_catalog' => 'field_catalog',
    'field_open_manager' => 'field_open_manager',
    'field_close_manager' => 'field_open_manager',
    'field_campus' => 'field_campus',
    'field_exh_location' => 'field_exh_location',
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
    'field_exh_gallery_top' => array(
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
    'field_open_manager' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '</br>',
      'empty_column' => 0,
    ),
    'field_close_manager' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_campus' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exh_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: Bulk operations: תוכן */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
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
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'עדכון משתנים',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'exhibition::field_campus' => 'exhibition::field_campus',
          'exhibition::field_exh_location' => 'exhibition::field_exh_location',
        ),
      ),
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'הסרת פרסום',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'פרסום תוכן',
    ),
  );
  /* שדה: תוכן: גלריית תערוכה - אזור עליון */
  $handler->display->display_options['fields']['field_exh_gallery_top']['id'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['table'] = 'field_data_field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['field'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['label'] = '';
  $handler->display->display_options['fields']['field_exh_gallery_top']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_top']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exh_gallery_top']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_exh_gallery_top']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_exh_gallery_top']['delta_offset'] = '0';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* שדה: תוכן: תאריך פתיחת התערוכה - מנהל */
  $handler->display->display_options['fields']['field_open_manager']['id'] = 'field_open_manager';
  $handler->display->display_options['fields']['field_open_manager']['table'] = 'field_data_field_open_manager';
  $handler->display->display_options['fields']['field_open_manager']['field'] = 'field_open_manager';
  $handler->display->display_options['fields']['field_open_manager']['label'] = 'פתיחה וסגירה';
  $handler->display->display_options['fields']['field_open_manager']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* שדה: תוכן: תאריך סגירת התערוכה - מנהל */
  $handler->display->display_options['fields']['field_close_manager']['id'] = 'field_close_manager';
  $handler->display->display_options['fields']['field_close_manager']['table'] = 'field_data_field_close_manager';
  $handler->display->display_options['fields']['field_close_manager']['field'] = 'field_close_manager';
  $handler->display->display_options['fields']['field_close_manager']['label'] = '';
  $handler->display->display_options['fields']['field_close_manager']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_close_manager']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* שדה: תוכן: קמפוס  */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_campus']['delta_offset'] = '0';
  /* שדה: תוכן: מיקום התערוכה */
  $handler->display->display_options['fields']['field_exh_location']['id'] = 'field_exh_location';
  $handler->display->display_options['fields']['field_exh_location']['table'] = 'field_data_field_exh_location';
  $handler->display->display_options['fields']['field_exh_location']['field'] = 'field_exh_location';
  $handler->display->display_options['fields']['field_exh_location']['label'] = 'מיקום';
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
  $handler->display->display_options['path'] = 'admin/exhibition_mange';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'ניהול תערוכות';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-managermenu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-full-exhibitions.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
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
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'עדכון משתנים',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'exhibition::field_campus' => 'exhibition::field_campus',
          'exhibition::field_exh_location' => 'exhibition::field_exh_location',
        ),
      ),
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'הסרת פרסום',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'פרסום תוכן',
    ),
  );
  /* שדה: תוכן: גלריית תערוכה - אזור עליון */
  $handler->display->display_options['fields']['field_exh_gallery_top']['id'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['table'] = 'field_data_field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['field'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['label'] = '';
  $handler->display->display_options['fields']['field_exh_gallery_top']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_top']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exh_gallery_top']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_exh_gallery_top']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_exh_gallery_top']['delta_offset'] = '0';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* שדה: תוכן: תאריך פתיחת התערוכה - מנהל */
  $handler->display->display_options['fields']['field_open_manager']['id'] = 'field_open_manager';
  $handler->display->display_options['fields']['field_open_manager']['table'] = 'field_data_field_open_manager';
  $handler->display->display_options['fields']['field_open_manager']['field'] = 'field_open_manager';
  $handler->display->display_options['fields']['field_open_manager']['label'] = 'פתיחה';
  $handler->display->display_options['fields']['field_open_manager']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* שדה: תוכן: תאריך סגירת התערוכה - מנהל */
  $handler->display->display_options['fields']['field_close_manager']['id'] = 'field_close_manager';
  $handler->display->display_options['fields']['field_close_manager']['table'] = 'field_data_field_close_manager';
  $handler->display->display_options['fields']['field_close_manager']['field'] = 'field_close_manager';
  $handler->display->display_options['fields']['field_close_manager']['label'] = 'סגירה';
  $handler->display->display_options['fields']['field_close_manager']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_close_manager']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* שדה: תוכן: קמפוס  */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_campus']['delta_offset'] = '0';
  /* שדה: תוכן: מיקום התערוכה */
  $handler->display->display_options['fields']['field_exh_location']['id'] = 'field_exh_location';
  $handler->display->display_options['fields']['field_exh_location']['table'] = 'field_data_field_exh_location';
  $handler->display->display_options['fields']['field_exh_location']['field'] = 'field_exh_location';
  $handler->display->display_options['fields']['field_exh_location']['label'] = 'מיקום';
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
  $handler->display->display_options['path'] = 'exhibition_export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['exhibition_manager'] = array(
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
    t('כותרת'),
    t('מק״ט'),
    t('פתיחה וסגירה'),
    t('קמפוס '),
    t('מיקום'),
    t('ניהול'),
    t('צפייה'),
    t('עריכה'),
    t('מפורסם?'),
    t('סטאטוס'),
    t('קמפוס'),
    t('שפה'),
    t('פתיחה'),
    t('Page'),
    t('Data export'),
    t('סגירה'),
  );
  $export['exhibition_manager'] = $view;

  return $export;
}
