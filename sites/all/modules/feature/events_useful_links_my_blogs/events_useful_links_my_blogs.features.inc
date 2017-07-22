<?php
/**
 * @file
 * events_useful_links_my_blogs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function events_useful_links_my_blogs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function events_useful_links_my_blogs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function events_useful_links_my_blogs_node_info() {
  $items = array(
    'engagements_' => array(
      'name' => t('Engagements'),
      'base' => 'node_content',
      'description' => t('This contains all project engagements.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('This contains all events.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'useful_links' => array(
      'name' => t('Useful Links'),
      'base' => 'node_content',
      'description' => t('This contains useful links.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
