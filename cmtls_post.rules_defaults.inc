<?php
/**
 * @file
 * cmtls_post.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function cmtls_post_default_rules_configuration() {
  $items = array();
  $items['rules_cmtls_posts_views_cache'] = entity_import('rules_config', '{ "rules_cmtls_posts_views_cache" : {
      "LABEL" : "CT Posts views cache",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "cmtls" ],
      "REQUIRES" : [ "rules", "cache_actions" ],
      "ON" : [ "node_insert", "node_update", "node_delete" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "cmtls_post" : "cmtls_post" } }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : {
                "cmtls_group_content" : "cmtls_group_content",
                "cmtls_posts" : "cmtls_posts"
              }
            }
          }
        }
      ]
    }
  }');
  return $items;
}
