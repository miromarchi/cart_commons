<?php
/**
 * Implements hook_date_formats().
 */
function cart_commons_date_formats() {
  return array(
    // Creates a new format for a new, custom format type.
    array(
      'type' => 'cart_date_day',
      'format' => 'Y M d',
      'locales' => array(),
    ),
  );
}
/**
 * Implements hook_date_format_types().
 */
function cart_commons_date_format_types() {
  return array(
    'cart_date_day' => t('Cart day'),
  );
}
