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
        'views-arts_galleries-block_2' => array(
          'module' => 'views',
          'delta' => 'arts_galleries-block_2',
          'region' => 'content-top',
          'weight' => '-22',
        ),
        'views-arts_galleries-block' => array(
          'module' => 'views',
          'delta' => 'arts_galleries-block',
          'region' => 'content-top',
          'weight' => '-21',
        ),
        'views-also_intersting-block_1' => array(
          'module' => 'views',
          'delta' => 'also_intersting-block_1',
          'region' => 'content-bottom',
          'weight' => '-10',
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
