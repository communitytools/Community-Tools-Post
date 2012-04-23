<?php
/**
 * @file
 * cmtls_post.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cmtls_post_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|node|cmtls_post|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cmtls_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '1',
    'children' => array(
      0 => 'group_audience',
      1 => 'group_content_access',
      2 => 'field_cmtls_application',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'element-hidden',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_advanced|node|cmtls_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|cmtls_post|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cmtls_post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '1',
    'children' => array(
      0 => 'field_cmtls_location',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location|node|cmtls_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_post|node|cmtls_post|form';
  $field_group->group_name = 'group_post';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cmtls_post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Post',
    'weight' => '0',
    'children' => array(
      0 => 'field_cmtls_tags',
      1 => 'field_cmtls_attachments',
      2 => 'body',
      3 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_post|node|cmtls_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|cmtls_post|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cmtls_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_location',
      1 => 'group_post',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabs|node|cmtls_post|form'] = $field_group;

  return $export;
}
