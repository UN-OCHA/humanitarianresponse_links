<?php
/**
 * @file
 * humanitarianresponse_links.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_links_user_default_permissions() {
  $permissions = array();

  // Exported permission: create link content
  $permissions['create link content'] = array(
    'name' => 'create link content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own link content
  $permissions['delete own link content'] = array(
    'name' => 'delete own link content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own link content
  $permissions['edit own link content'] = array(
    'name' => 'edit own link content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
