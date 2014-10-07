<?php
/**
 * @file
 * cart_commons.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function cart_commons_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-editing.
  $menus['menu-editing'] = array(
    'menu_name' => 'menu-editing',
    'title' => 'Editing tools',
    'description' => 'Editing tools',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Editing tools');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');


  return $menus;
}
