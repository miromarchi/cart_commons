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

  // Exported menu link: user-menu_add-exhibit:node/add/cart-exhibition
  $menu_links['user-menu_add-exhibit:node/add/cart-exhibition'] = array(
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
      'identifier' => 'user-menu_add-exhibit:node/add/cart-exhibition',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -7,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add exhibit');


  return $menu_links;
}
