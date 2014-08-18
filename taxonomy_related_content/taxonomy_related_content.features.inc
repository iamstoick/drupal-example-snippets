<?php
/**
 * @file
 * taxonomy_related_content.features.inc
 */

/**
 * Implements hook_views_api().
 */
function taxonomy_related_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function taxonomy_related_content_node_info() {
  $items = array(
    'bar' => array(
      'name' => t('Bar'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'food' => array(
      'name' => t('Food'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hotel' => array(
      'name' => t('Hotel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resort' => array(
      'name' => t('Resort'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
