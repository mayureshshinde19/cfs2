<?php
/**
 * @file
 * quicktabs_added_for_child_elements.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function quicktabs_added_for_child_elements_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'my_activities_quicktab';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 999999;
  $quicktabs->title = 'My Activities Quicktab';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'my_activities',
      'display' => 'default',
      'args' => '',
      'use_title' => 0,
      'title' => 'View My Activities',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'site_activities',
      'display' => 'default',
      'args' => '',
      'use_title' => 0,
      'title' => 'All Activities',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('All Activities');
  t('My Activities Quicktab');
  t('View My Activities');

  $export['my_activities_quicktab'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'my_asset_quicktab';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'My asset quicktab';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'my_documents',
      'display' => 'default',
      'args' => '',
      'use_title' => 0,
      'title' => 'View My Assets',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'path' => 'node/add/documents',
      'use_title' => 0,
      'title' => 'Add Asset',
      'weight' => '-99',
      'type' => 'callback',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Asset');
  t('My asset quicktab');
  t('View My Assets');

  $export['my_asset_quicktab'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'my_discussion_quicktab';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'My Discussion quicktab';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'my_discussions',
      'display' => 'default',
      'args' => '',
      'use_title' => 0,
      'title' => 'View My Discussions',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'path' => 'node/add/forum',
      'use_title' => 0,
      'title' => 'Add Discussion',
      'weight' => '-99',
      'type' => 'callback',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Discussion');
  t('My Discussion quicktab');
  t('View My Discussions');

  $export['my_discussion_quicktab'] = $quicktabs;

  return $export;
}
