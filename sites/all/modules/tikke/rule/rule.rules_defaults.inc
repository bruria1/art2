<?php
/**
 * @file
 * rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rule_default_rules_configuration() {
  $items = array();
  $items['rules_change_artists_node_title'] = entity_import('rules_config', '{ "rules_change_artists_node_title" : {
      "LABEL" : "Change artists node title",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--artists" : { "bundle" : "artists" } },
      "IF" : [ { "data_is" : { "data" : [ "node" ], "value" : [ "node:source" ] } } ],
      "DO" : []
    }
  }');
  $items['rules_close_full'] = entity_import('rules_config', '{ "rules_close_full" : {
      "LABEL" : "\\u05e9\\u05de\\u05d9\\u05e8\\u05ea \\u05d4\\u05ea\\u05d0\\u05e8\\u05d9\\u05da \\u05e9\\u05dc \\u05d4\\u05ea\\u05e2\\u05e8\\u05d5\\u05db\\u05d4 - \\u05ea\\u05d0\\u05e8\\u05d9\\u05da \\u05e1\\u05d2\\u05d9\\u05e8\\u05d4 \\u05de\\u05dc\\u05d0",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--exhibition" : { "bundle" : "exhibition" },
        "node_update--exhibition" : { "bundle" : "exhibition" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-closing-date" ], "value" : "\\u05de\\u05dc\\u05d0" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-month-date-2" ] } },
        { "data_set" : { "data" : [ "node:field-year-date-2" ] } },
        { "data_set" : {
            "data" : [ "node:field-close-manager" ],
            "value" : [ "node:field-full-date-2" ]
          }
        }
      ]
    }
  }');
  $items['rules_close_month'] = entity_import('rules_config', '{ "rules_close_month" : {
      "LABEL" : "\\u05e9\\u05de\\u05d9\\u05e8\\u05ea \\u05d4\\u05ea\\u05d0\\u05e8\\u05d9\\u05da \\u05e9\\u05dc \\u05d4\\u05ea\\u05e2\\u05e8\\u05d5\\u05db\\u05d4 - \\u05ea\\u05d0\\u05e8\\u05d9\\u05da \\u05e1\\u05d2\\u05d9\\u05e8\\u05d4 \\u05d7\\u05d5\\u05d3\\u05e9\\u05d9",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--exhibition" : { "bundle" : "exhibition" },
        "node_update--exhibition" : { "bundle" : "exhibition" }
      },
      "IF" : [
        { "data_is" : {
            "data" : [ "node:field-closing-date" ],
            "value" : "\\u05d7\\u05d5\\u05d3\\u05e9"
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-full-date-2" ] } },
        { "data_set" : { "data" : [ "node:field-year-date-2" ] } },
        { "data_set" : {
            "data" : [ "node:field-close-manager" ],
            "value" : [ "node:field-month-date-2" ]
          }
        }
      ]
    }
  }');
  $items['rules_close_year'] = entity_import('rules_config', '{ "rules_close_year" : {
      "LABEL" : "\\u05e9\\u05de\\u05d9\\u05e8\\u05ea \\u05d4\\u05ea\\u05d0\\u05e8\\u05d9\\u05da \\u05e9\\u05dc \\u05d4\\u05ea\\u05e2\\u05e8\\u05d5\\u05db\\u05d4 - \\u05ea\\u05d0\\u05e8\\u05d9\\u05da \\u05e1\\u05d2\\u05d9\\u05e8\\u05d4 \\u05e9\\u05e0\\u05ea\\u05d9",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--exhibition" : { "bundle" : "exhibition" },
        "node_update--exhibition" : { "bundle" : "exhibition" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-closing-date" ], "value" : "\\u05e9\\u05e0\\u05d4" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-month-date-2" ] } },
        { "data_set" : { "data" : [ "node:field-full-date-2" ] } },
        { "data_set" : {
            "data" : [ "node:field-close-manager" ],
            "value" : [ "node:field-year-date-2" ]
          }
        }
      ]
    }
  }');
  $items['rules_open_month'] = entity_import('rules_config', '{ "rules_open_month" : {
      "LABEL" : "\\u05e9\\u05de\\u05d9\\u05e8\\u05ea \\u05d4\\u05ea\\u05d0\\u05e8\\u05d9\\u05da \\u05e9\\u05dc \\u05d4\\u05ea\\u05e2\\u05e8\\u05d5\\u05db\\u05d4 - \\u05ea\\u05d0\\u05e8\\u05d9\\u05da \\u05e4\\u05ea\\u05d9\\u05d7\\u05d4 \\u05d7\\u05d5\\u05d3\\u05e9\\u05d9",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--exhibition" : { "bundle" : "exhibition" },
        "node_update--exhibition" : { "bundle" : "exhibition" }
      },
      "IF" : [
        { "data_is" : {
            "data" : [ "node:field-open-date" ],
            "value" : "\\u05d7\\u05d5\\u05d3\\u05e9"
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-open-manager" ],
            "value" : [ "node:field-month-date" ]
          }
        },
        { "data_set" : { "data" : [ "node:field-exh-open-date" ] } },
        { "data_set" : { "data" : [ "node:field-date-year" ] } }
      ]
    }
  }');
  $items['rules_save_date_exhibition'] = entity_import('rules_config', '{ "rules_save_date_exhibition" : {
      "LABEL" : "\\u05e9\\u05de\\u05d9\\u05e8\\u05ea \\u05d4\\u05ea\\u05d0\\u05e8\\u05d9\\u05da \\u05e9\\u05dc \\u05d4\\u05ea\\u05e2\\u05e8\\u05d5\\u05db\\u05d4 - \\u05ea\\u05d0\\u05e8\\u05d9\\u05da \\u05e4\\u05ea\\u05d9\\u05d7\\u05d4 \\u05de\\u05dc\\u05d0",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--exhibition" : { "bundle" : "exhibition" },
        "node_update--exhibition" : { "bundle" : "exhibition" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-open-date" ], "value" : "\\u05de\\u05dc\\u05d0" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-open-manager" ],
            "value" : [ "node:field-date-year" ]
          }
        },
        { "data_set" : { "data" : [ "node:field-month-date" ] } },
        { "data_set" : {
            "data" : [ "node:field-open-manager" ],
            "value" : [ "node:field-exh-open-date" ]
          }
        }
      ]
    }
  }');
  $items['rules_translate_artists_to_english'] = entity_import('rules_config', '{ "rules_translate_artists_to_english" : {
      "LABEL" : "Translate artists to english",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "translaterule", "rules" ],
      "ON" : { "node_insert--artists" : { "bundle" : "artists" } },
      "DO" : [
        { "translaterule_action_node_translate" : { "node" : [ "node" ] } },
        { "data_set" : { "data" : [ "node:title" ], "value" : [ "node:field-english-title" ] } },
        { "entity_save" : { "data" : [ "node" ], "immediate" : "1" } }
      ]
    }
  }');
  $items['rules_year_open'] = entity_import('rules_config', '{ "rules_year_open" : {
      "LABEL" : "\\u05e9\\u05de\\u05d9\\u05e8\\u05ea \\u05d4\\u05ea\\u05d0\\u05e8\\u05d9\\u05da \\u05e9\\u05dc \\u05d4\\u05ea\\u05e2\\u05e8\\u05d5\\u05db\\u05d4 - \\u05ea\\u05d0\\u05e8\\u05d9\\u05da \\u05e4\\u05ea\\u05d9\\u05d7\\u05d4 \\u05e9\\u05e0\\u05ea\\u05d9",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--exhibition" : { "bundle" : "exhibition" },
        "node_update--exhibition" : { "bundle" : "exhibition" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-open-date" ], "value" : "\\u05e9\\u05e0\\u05d4" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-open-manager" ],
            "value" : [ "node:field-date-year" ]
          }
        },
        { "data_set" : { "data" : [ "node:field-exh-open-date" ] } },
        { "data_set" : { "data" : [ "node:field-month-date" ] } }
      ]
    }
  }');
  return $items;
}
