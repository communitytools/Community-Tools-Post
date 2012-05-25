<?php
/**
 * @file
 * cmtls_post.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cmtls_post_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cmtls_post_page';
  $context->description = 'Community Tools single post page';
  $context->tag = 'CT post';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'cmtls_post' => 'cmtls_post',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cb129c8a19431ae6b2fd1711646e2de2' => array(
          'module' => 'views',
          'delta' => 'cb129c8a19431ae6b2fd1711646e2de2',
          'region' => 'sidebar_second',
          'weight' => '-27',
        ),
        'views-53e22d565fc4333e016372c7c33e1bfc' => array(
          'module' => 'views',
          'delta' => '53e22d565fc4333e016372c7c33e1bfc',
          'region' => 'sidebar_second',
          'weight' => '-26',
        ),
        'views-d3b739be3a716e61b54f0c1254eefd60' => array(
          'module' => 'views',
          'delta' => 'd3b739be3a716e61b54f0c1254eefd60',
          'region' => 'sidebar_second',
          'weight' => '-25',
        ),
        'views-0d26dd0aa81634fc961ec5e8e8191976' => array(
          'module' => 'views',
          'delta' => '0d26dd0aa81634fc961ec5e8e8191976',
          'region' => 'preface_first',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('CT post');
  t('Community Tools single post page');
  $export['cmtls_post_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cmtls_posts_page';
  $context->description = 'Community Tools posts page';
  $context->tag = 'CT post';
  $context->conditions = array(
    'cmtls_app_type' => array(
      'values' => array(
        'cmtls_post' => 'cmtls_post',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'node' => array(
      'values' => array(
        'cmtls_app' => 'cmtls_app',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-f500b4c1e20873481066a87edcb14025' => array(
          'module' => 'views',
          'delta' => 'f500b4c1e20873481066a87edcb14025',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('CT post');
  t('Community Tools posts page');
  $export['cmtls_posts_page'] = $context;

  return $export;
}
