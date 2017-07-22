<?php
/**
 * @file
 * site_administrator_views.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function site_administrator_views_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'site_quick_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Site Quick Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'all_documents',
      'display' => 'default',
      'args' => '',
      'use_title' => 0,
      'title' => 'Site Documents',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'my_discussions',
      'display' => 'default',
      'args' => '',
      'use_title' => 0,
      'title' => 'Site Discussions',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'site_activities',
      'display' => 'default',
      'args' => '',
      'use_title' => 0,
      'title' => 'Site Activities',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Site Activities');
  t('Site Discussions');
  t('Site Documents');
  t('Site Quick Tabs');

  $export['site_quick_tabs'] = $quicktabs;

  return $export;
}
