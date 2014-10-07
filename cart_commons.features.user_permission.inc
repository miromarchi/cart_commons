<?php
/**
 * @file
 * cart_commons.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cart_commons_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create cart_catalog content'.
  $permissions['create cart_catalog content'] = array(
    'name' => 'create cart_catalog content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create cart_exhibition content'.
  $permissions['create cart_exhibition content'] = array(
    'name' => 'create cart_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create cart_organization content'.
  $permissions['create cart_organization content'] = array(
    'name' => 'create cart_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create cart_person content'.
  $permissions['create cart_person content'] = array(
    'name' => 'create cart_person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any cart_catalog content'.
  $permissions['delete any cart_catalog content'] = array(
    'name' => 'delete any cart_catalog content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cart_exhibition content'.
  $permissions['delete any cart_exhibition content'] = array(
    'name' => 'delete any cart_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cart_organization content'.
  $permissions['delete any cart_organization content'] = array(
    'name' => 'delete any cart_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cart_person content'.
  $permissions['delete any cart_person content'] = array(
    'name' => 'delete any cart_person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own cart_catalog content'.
  $permissions['delete own cart_catalog content'] = array(
    'name' => 'delete own cart_catalog content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cart_exhibition content'.
  $permissions['delete own cart_exhibition content'] = array(
    'name' => 'delete own cart_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cart_organization content'.
  $permissions['delete own cart_organization content'] = array(
    'name' => 'delete own cart_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cart_person content'.
  $permissions['delete own cart_person content'] = array(
    'name' => 'delete own cart_person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in cart_exhibit_types'.
  $permissions['delete terms in cart_exhibit_types'] = array(
    'name' => 'delete terms in cart_exhibit_types',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in cart_languages'.
  $permissions['delete terms in cart_languages'] = array(
    'name' => 'delete terms in cart_languages',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in cart_main_exhibition'.
  $permissions['delete terms in cart_main_exhibition'] = array(
    'name' => 'delete terms in cart_main_exhibition',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in cart_media_types'.
  $permissions['delete terms in cart_media_types'] = array(
    'name' => 'delete terms in cart_media_types',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in cart_org_types'.
  $permissions['delete terms in cart_org_types'] = array(
    'name' => 'delete terms in cart_org_types',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in cart_venue_types'.
  $permissions['delete terms in cart_venue_types'] = array(
    'name' => 'delete terms in cart_venue_types',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in cart_years'.
  $permissions['delete terms in cart_years'] = array(
    'name' => 'delete terms in cart_years',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any cart_catalog content'.
  $permissions['edit any cart_catalog content'] = array(
    'name' => 'edit any cart_catalog content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cart_exhibition content'.
  $permissions['edit any cart_exhibition content'] = array(
    'name' => 'edit any cart_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cart_organization content'.
  $permissions['edit any cart_organization content'] = array(
    'name' => 'edit any cart_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cart_person content'.
  $permissions['edit any cart_person content'] = array(
    'name' => 'edit any cart_person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own cart_catalog content'.
  $permissions['edit own cart_catalog content'] = array(
    'name' => 'edit own cart_catalog content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cart_exhibition content'.
  $permissions['edit own cart_exhibition content'] = array(
    'name' => 'edit own cart_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cart_organization content'.
  $permissions['edit own cart_organization content'] = array(
    'name' => 'edit own cart_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cart_person content'.
  $permissions['edit own cart_person content'] = array(
    'name' => 'edit own cart_person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit terms in cart_exhibit_types'.
  $permissions['edit terms in cart_exhibit_types'] = array(
    'name' => 'edit terms in cart_exhibit_types',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in cart_languages'.
  $permissions['edit terms in cart_languages'] = array(
    'name' => 'edit terms in cart_languages',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in cart_main_exhibition'.
  $permissions['edit terms in cart_main_exhibition'] = array(
    'name' => 'edit terms in cart_main_exhibition',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in cart_media_types'.
  $permissions['edit terms in cart_media_types'] = array(
    'name' => 'edit terms in cart_media_types',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in cart_org_types'.
  $permissions['edit terms in cart_org_types'] = array(
    'name' => 'edit terms in cart_org_types',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in cart_venue_types'.
  $permissions['edit terms in cart_venue_types'] = array(
    'name' => 'edit terms in cart_venue_types',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in cart_years'.
  $permissions['edit terms in cart_years'] = array(
    'name' => 'edit terms in cart_years',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
