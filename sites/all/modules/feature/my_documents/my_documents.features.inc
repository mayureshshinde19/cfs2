<?php
/**
 * @file
 * my_documents.features.inc
 */

/**
 * Implements hook_views_api().
 */
function my_documents_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function my_documents_node_info() {
  $items = array(
    'documents' => array(
      'name' => t('Documents'),
      'base' => 'node_content',
      'description' => t('This content type is used to upload, maintain and manipulate the documents put up by the user. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
