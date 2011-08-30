<?php
/**
 * @file
 * cmtls_post.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function cmtls_post_user_default_permissions() {
  $permissions = array();

  // Exported permission: create cmtls_post content
  $permissions['create cmtls_post content'] = array(
    'name' => 'create cmtls_post content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any cmtls_post content
  $permissions['delete any cmtls_post content'] = array(
    'name' => 'delete any cmtls_post content',
    'roles' => array(),
  );

  // Exported permission: delete own cmtls_post content
  $permissions['delete own cmtls_post content'] = array(
    'name' => 'delete own cmtls_post content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any cmtls_post content
  $permissions['edit any cmtls_post content'] = array(
    'name' => 'edit any cmtls_post content',
    'roles' => array(),
  );

  // Exported permission: edit own cmtls_post content
  $permissions['edit own cmtls_post content'] = array(
    'name' => 'edit own cmtls_post content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
