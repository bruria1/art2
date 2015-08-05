<?php
/**
 * @file
 * exhibition.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function exhibition_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'exhibition_blocks';
  $context->description = '';
  $context->tag = 'exhibition';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'exhibition' => 'exhibition',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-exhibition_gallery-block' => array(
          'module' => 'views',
          'delta' => 'exhibition_gallery-block',
          'region' => 'content-top',
          'weight' => '-10',
        ),
        'views-exhibition_gallery-block_2' => array(
          'module' => 'views',
          'delta' => 'exhibition_gallery-block_2',
          'region' => 'content-top',
          'weight' => '-9',
        ),
        'views-also_intersting-block' => array(
          'module' => 'views',
          'delta' => 'also_intersting-block',
          'region' => 'content-bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('exhibition');
  $export['exhibition_blocks'] = $context;

  return $export;
}
