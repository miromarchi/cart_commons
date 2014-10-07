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

  // Exported menu link: user-menu:node/add/cart-exhibition
  $menu_links['user-menu:node/add/cart-exhibition'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/cart-exhibition',
    'router_path' => 'node/add/cart-exhibition',
    'link_title' => 'Add exhibit',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new exhibition to the database',
        'id' => 'btn-add-exhibit',
        'class' => array(
          0 => 'btn',
          1 => 'btn-success',
        ),
      ),
      'identifier' => 'user-menu:node/add/cart-exhibition',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -7,
    'customized' => 1,
  );
  // Exported menu link: user-menu:editing
  $menu_links['user-menu:editing'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'editing',
    'router_path' => 'editing',
    'link_title' => 'Editing tools',
    'options' => array(
      'identifier' => 'user-menu:editing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: user-menu:user/login
  $menu_links['user-menu:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(
      'identifier' => 'user-menu:user/login',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: user-menu:user/logout
  $menu_links['user-menu:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add exhibit');
  t('Editing tools');
  t('Log in');
  t('Log out');


  return $menu_links;
}
