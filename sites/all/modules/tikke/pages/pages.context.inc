<?php
/**
 * @file
 * pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_gallery';
  $context->description = '';
  $context->tag = 'PAGE';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-pages_gallery-block' => array(
          'module' => 'views',
          'delta' => 'pages_gallery-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('PAGE');
  $export['page_gallery'] = $context;

  return $export;
}
