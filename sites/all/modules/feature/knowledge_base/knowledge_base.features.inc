<?php
/**
 * @file
 * knowledge_base.features.inc
 */

/**
 * Implements hook_views_api().
 */
function knowledge_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function knowledge_base_node_info() {
  $items = array(
    'knowledge_base' => array(
      'name' => t('Knowledge Base'),
      'base' => 'node_content',
      'description' => t('This is to add all contents for knowledge base.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'knowledge_base_article_' => array(
      'name' => t('Knowledge Base Article'),
      'base' => 'node_content',
      'description' => t('This is to create knowledge base articles for site.  '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
