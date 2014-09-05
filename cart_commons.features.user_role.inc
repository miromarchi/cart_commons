<?php
/**
 * @file
 * cart_commons.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cart_commons_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  return $roles;
}
