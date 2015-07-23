<?php
/**
 * @file
 * arts.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function arts_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'unic catalog';
  $rule->name = 'unic_catalog';
  $rule->field_name = 'field_catalog';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'art';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'entity',
    'per_language' => 1,
    'per_user' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'סליחה, המספר שהזנת קיים במערכת... ';
  $export['unic_catalog'] = $rule;

  return $export;
}
