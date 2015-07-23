<?php
/**
 * @file
 * arts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function arts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'arts_blocks';
  $context->description = '';
  $context->tag = 'arts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'art' => 'art',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-arts_galleries-block' => array(
          'module' => 'views',
          'delta' => 'arts_galleries-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-arts_galleries-block_1' => array(
          'module' => 'views',
          'delta' => 'arts_galleries-block_1',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('arts');
  $export['arts_blocks'] = $context;

  return $export;
}
