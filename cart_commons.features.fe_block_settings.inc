<?php
/**
 * @file
 * cart_commons.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cart_commons_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-cart_block_footer'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'cart_block_footer',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>
directory
directory/*
calendar
calendar/*
map
map/*
about
node/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'cart_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'cart_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
