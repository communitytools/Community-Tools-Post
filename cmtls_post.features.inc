<?php
/**
 * @file
 * cmtls_post.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cmtls_post_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cmtls_post_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function cmtls_post_node_info() {
  $items = array(
    'cmtls_post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => t('Community Tools basic content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}