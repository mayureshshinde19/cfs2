<?php
/**
 * @file
 * events_useful_links_my_blogs.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function events_useful_links_my_blogs_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'my_blogs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'My Blogs quicktab';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'view_my_blogs',
      'display' => 'page',
      'args' => '',
      'use_title' => 0,
      'title' => 'View My Blogs',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'path' => 'node/add/blog',
      'use_title' => 0,
      'title' => 'Add a Blog',
      'weight' => '-99',
      'type' => 'callback',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Add a Blog');
  t('My Blogs quicktab');
  t('View My Blogs');

  $export['my_blogs'] = $quicktabs;

  return $export;
}
