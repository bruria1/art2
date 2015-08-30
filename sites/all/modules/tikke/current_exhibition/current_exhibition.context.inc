<?php
/**
 * @file
 * current_exhibition.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function current_exhibition_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'current_exhibition';
  $context->description = 'תערוכה נוכחית';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/2619' => 'node/2619',
        'node/2625' => 'node/2625',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-now_exhibition-block_1' => array(
          'module' => 'views',
          'delta' => 'now_exhibition-block_1',
          'region' => 'content-bottom',
          'weight' => '-10',
        ),
        'views-now_exhibition-block_2' => array(
          'module' => 'views',
          'delta' => 'now_exhibition-block_2',
          'region' => 'content-bottom',
          'weight' => '-9',
        ),
        'views-now_exhibition-block' => array(
          'module' => 'views',
          'delta' => 'now_exhibition-block',
          'region' => 'content-bottom',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('תערוכה נוכחית');
  $export['current_exhibition'] = $context;

  return $export;
}
