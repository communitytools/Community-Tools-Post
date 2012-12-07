<?php
/**
 * @file
 * cmtls_post.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function cmtls_post_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_cmtls_post|cmtls_teaser';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_cmtls_post';
  $ds_fieldsetting->view_mode = 'cmtls_teaser';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_cmtls_small',
    ),
  );
  $export['comment|comment_node_cmtls_post|cmtls_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_cmtls_post|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_cmtls_post';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'cmtls_comment_spam_flag_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:4:{s:8:"sanitize";i:0;s:7:"context";s:28:"argument_entity_id:comment_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"token";s:7:"subtype";s:45:"comment:flag-cmtls-inappropriate-comment-link";}',
        'load_terms' => 0,
      ),
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_cmtls_small',
    ),
  );
  $export['comment|comment_node_cmtls_post|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cmtls_post|cmtls_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cmtls_post';
  $ds_fieldsetting->view_mode = 'cmtls_teaser';
  $ds_fieldsetting->settings = array(
    'cmtls_location_indicator' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|cmtls_post|cmtls_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cmtls_post|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cmtls_post';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '40',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|cmtls_post|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function cmtls_post_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_cmtls_post|cmtls_teaser';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_cmtls_post';
  $ds_layout->view_mode = 'cmtls_teaser';
  $ds_layout->layout = 'cmtls_short_4region';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left_column' => array(
        0 => 'ds_user_picture',
        1 => 'author',
      ),
      'middle' => array(
        0 => 'title',
      ),
      'footer' => array(
        0 => 'post_date',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left_column',
      'author' => 'left_column',
      'title' => 'middle',
      'post_date' => 'footer',
    ),
    'classes' => array(),
  );
  $export['comment|comment_node_cmtls_post|cmtls_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_cmtls_post|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_cmtls_post';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'cmtls_short_4region';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left_column' => array(
        0 => 'ds_user_picture',
      ),
      'middle' => array(
        0 => 'author',
        1 => 'post_date',
        2 => 'comment_body',
      ),
      'footer' => array(
        0 => 'cmtls_comment_spam_flag_link',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left_column',
      'author' => 'middle',
      'post_date' => 'middle',
      'comment_body' => 'middle',
      'cmtls_comment_spam_flag_link' => 'footer',
    ),
    'classes' => array(),
  );
  $export['comment|comment_node_cmtls_post|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cmtls_post|cmtls_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cmtls_post';
  $ds_layout->view_mode = 'cmtls_teaser';
  $ds_layout->layout = 'cmtls_short_4region';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'middle' => array(
        0 => 'title',
        1 => 'body',
      ),
      'footer' => array(
        0 => 'cmtls_location_indicator',
        1 => 'field_cmtls_address',
        2 => 'field_cmtls_tags',
      ),
    ),
    'fields' => array(
      'title' => 'middle',
      'body' => 'middle',
      'cmtls_location_indicator' => 'footer',
      'field_cmtls_address' => 'footer',
      'field_cmtls_tags' => 'footer',
    ),
    'classes' => array(),
  );
  $export['node|cmtls_post|cmtls_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cmtls_post|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cmtls_post';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'comments',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|cmtls_post|default'] = $ds_layout;

  return $export;
}
