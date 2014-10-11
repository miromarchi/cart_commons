<?php
/**
 * @file
 * cart_commons.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cart_commons_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-editing_add-catalog:node/add/cart-catalog
  $menu_links['menu-editing_add-catalog:node/add/cart-catalog'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add/cart-catalog',
    'router_path' => 'node/add/cart-catalog',
    'link_title' => 'Add catalog',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'btn',
          1 => 'btn-add-catalog',
        ),
      ),
      'identifier' => 'menu-editing_add-catalog:node/add/cart-catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-editing_add-exhibition:node/add/cart-exhibition
  $menu_links['menu-editing_add-exhibition:node/add/cart-exhibition'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add/cart-exhibition',
    'router_path' => 'node/add/cart-exhibition',
    'link_title' => 'Add exhibition',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'btn',
          1 => 'btn-add-exhibit',
        ),
      ),
      'identifier' => 'menu-editing_add-exhibition:node/add/cart-exhibition',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-editing_add-organization:node/add/cart-organization
  $menu_links['menu-editing_add-organization:node/add/cart-organization'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add/cart-organization',
    'router_path' => 'node/add/cart-organization',
    'link_title' => 'Add organization',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'btn',
          1 => 'btn-add-org',
        ),
      ),
      'identifier' => 'menu-editing_add-organization:node/add/cart-organization',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-editing_add-person:node/add/cart-person
  $menu_links['menu-editing_add-person:node/add/cart-person'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add/cart-person',
    'router_path' => 'node/add/cart-person',
    'link_title' => 'Add person',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'btn',
          1 => 'btn-add-person',
        ),
      ),
      'identifier' => 'menu-editing_add-person:node/add/cart-person',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-editing_administer-tags:admin/structure/taxonomy
  $menu_links['menu-editing_administer-tags:admin/structure/taxonomy'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Administer tags',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'btn',
          1 => 'btn-default',
          2 => 'btn-margin',
        ),
      ),
      'identifier' => 'menu-editing_administer-tags:admin/structure/taxonomy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-editing_import-calendar:import/cart_feeds_ical
  $menu_links['menu-editing_import-calendar:import/cart_feeds_ical'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'import/cart_feeds_ical',
    'router_path' => 'import/%',
    'link_title' => 'Import calendar',
    'options' => array(
      'identifier' => 'menu-editing_import-calendar:import/cart_feeds_ical',
      'attributes' => array(
        'title' => 'Import calendar events from google shared (public) calendar "cuban art calendar".',
        'class' => array(
          0 => 'btn',
          1 => 'btn-default',
          2 => 'btn-margin',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: user-menu_add-exhibit:node/add/cart-exhibition
  $menu_links['user-menu_add-exhibit:node/add/cart-exhibition'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/cart-exhibition',
    'router_path' => 'node/add/cart-exhibition',
    'link_title' => 'Add exhibit',
    'options' => array(
      'identifier' => 'user-menu_add-exhibit:node/add/cart-exhibition',
      'attributes' => array(
        'title' => 'Add new exhibition to the database',
        'id' => 'btn-add-exhibit',
        'class' => array(
          0 => 'btn',
          1 => 'btn-add-exhibit',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_editing-tools:editing
  $menu_links['user-menu_editing-tools:editing'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'editing',
    'router_path' => 'editing',
    'link_title' => 'Editing tools',
    'options' => array(
      'identifier' => 'user-menu_editing-tools:editing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add catalog');
  t('Add exhibit');
  t('Add exhibition');
  t('Add organization');
  t('Add person');
  t('Administer tags');
  t('Editing tools');
  t('Import calendar');


  return $menu_links;
}
