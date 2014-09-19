<?php
/**
 * @file
 * cart_commons.staticmap_presets.inc
 */

/**
 * Implements hook_staticmap_presets().
 */
function cart_commons_staticmap_presets() {
  $export = array();

  $staticmap_presets = new stdClass();
  $staticmap_presets->disabled = FALSE; /* Edit this to true to make a default staticmap_presets disabled initially */
  $staticmap_presets->api_version = 1;
  $staticmap_presets->name = 'cart_staticmap_teaser';
  $staticmap_presets->title = 'Cart Map Teaser';
  $staticmap_presets->description = '';
  $staticmap_presets->data = 'a:5:{s:5:"title";s:15:"Cart Map Teaser";s:4:"name";s:21:"cart_staticmap_teaser";s:8:"provider";s:6:"google";s:7:"mapsize";s:6:"260x80";s:7:"maptype";s:7:"terrain";}';
  $export['cart_staticmap_teaser'] = $staticmap_presets;

  return $export;
}
