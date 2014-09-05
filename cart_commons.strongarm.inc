<?php
/**
 * @file
 * cart_commons.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cart_commons_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_cart_date_day';
  $strongarm->value = 'Y-M-d';
  $export['date_format_cart_date_day'] = $strongarm;

  return $export;
}
