<?php
/**
 * @file
 * home_gallery.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function home_gallery_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_page';
  $context->description = 'עמוד הבית';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-home_page_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'home_page_slideshow-block',
          'region' => 'top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('עמוד הבית');
  $export['home_page'] = $context;

  return $export;
}
