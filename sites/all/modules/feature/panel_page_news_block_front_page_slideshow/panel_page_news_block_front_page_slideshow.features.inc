<?php
/**
 * @file
 * panel_page_news_block_front_page_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panel_page_news_block_front_page_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function panel_page_news_block_front_page_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function panel_page_news_block_front_page_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: frontpage_slideshow.
  $styles['frontpage_slideshow'] = array(
    'label' => 'frontpage_slideshow',
    'effects' => array(
      3 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 300,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function panel_page_news_block_front_page_slideshow_node_info() {
  $items = array(
    'front_page_slideshow' => array(
      'name' => t('Front page slideshow'),
      'base' => 'node_content',
      'description' => t('Front page slideshow.content will be unpublished.'),
      'has_title' => '1',
      'title_label' => t('Image Name'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('This content type is used to publish News.'),
      'has_title' => '1',
      'title_label' => t('News Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
