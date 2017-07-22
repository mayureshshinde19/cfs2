<?php
/**
 * @file
 * panel_page_news_block_front_page_slideshow.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panel_page_news_block_front_page_slideshow_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_page';
  $page->task = 'page';
  $page->admin_title = 'Dashboard page';
  $page->admin_description = 'Dashboard page';
  $page->path = 'dashboard';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'My Dashboard';
  $display->uuid = '8a080f64-1667-4a41-9f19-f510f3c50eb0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cae47564-4329-450b-839d-931a5eac4dd4';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'saved_search_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'Saved Searches',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cae47564-4329-450b-839d-931a5eac4dd4';
  $display->content['new-cae47564-4329-450b-839d-931a5eac4dd4'] = $pane;
  $display->panels['left'][0] = 'new-cae47564-4329-450b-839d-931a5eac4dd4';
  $pane = new stdClass();
  $pane->pid = 'new-9f892354-877a-46e0-9f06-6ac1a23c6bc5';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Useful Links',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9f892354-877a-46e0-9f06-6ac1a23c6bc5';
  $display->content['new-9f892354-877a-46e0-9f06-6ac1a23c6bc5'] = $pane;
  $display->panels['left'][1] = 'new-9f892354-877a-46e0-9f06-6ac1a23c6bc5';
  $pane = new stdClass();
  $pane->pid = 'new-5343ade0-39fd-412d-aa78-f17cfd288a69';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'front_page_slideshow';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => 'Banner',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5343ade0-39fd-412d-aa78-f17cfd288a69';
  $display->content['new-5343ade0-39fd-412d-aa78-f17cfd288a69'] = $pane;
  $display->panels['middle'][0] = 'new-5343ade0-39fd-412d-aa78-f17cfd288a69';
  $pane = new stdClass();
  $pane->pid = 'new-8cf684d4-51a5-4454-990e-b5aea7d1bd18';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'quicktabs-my_quick_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8cf684d4-51a5-4454-990e-b5aea7d1bd18';
  $display->content['new-8cf684d4-51a5-4454-990e-b5aea7d1bd18'] = $pane;
  $display->panels['middle'][1] = 'new-8cf684d4-51a5-4454-990e-b5aea7d1bd18';
  $pane = new stdClass();
  $pane->pid = 'new-3b05a0a5-f8fe-4485-b929-a8567bd54068';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'news_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'News',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3b05a0a5-f8fe-4485-b929-a8567bd54068';
  $display->content['new-3b05a0a5-f8fe-4485-b929-a8567bd54068'] = $pane;
  $display->panels['right'][0] = 'new-3b05a0a5-f8fe-4485-b929-a8567bd54068';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cae47564-4329-450b-839d-931a5eac4dd4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_page'] = $page;

  return $pages;

}
