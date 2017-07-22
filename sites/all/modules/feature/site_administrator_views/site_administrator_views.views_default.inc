<?php
/**
 * @file
 * site_administrator_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function site_administrator_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Site Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Site Documents';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Document Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Upload File */
  $handler->display->display_options['fields']['field_upload_file']['id'] = 'field_upload_file';
  $handler->display->display_options['fields']['field_upload_file']['table'] = 'field_data_field_upload_file';
  $handler->display->display_options['fields']['field_upload_file']['field'] = 'field_upload_file';
  $handler->display->display_options['fields']['field_upload_file']['label'] = 'File';
  $handler->display->display_options['fields']['field_upload_file']['click_sort_column'] = 'fid';
  /* Field: Content: Document type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['label'] = 'Document tag';
  $handler->display->display_options['fields']['field_document_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_type']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'documents' => 'documents',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-documents';
  $export['all_documents'] = $view;

  $view = new view();
  $view->name = 'site_activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'heartbeat_activity';
  $view->human_name = 'Site Activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Site Activities';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Heartbeat activity: Activity message */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'heartbeat_activity';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  /* Field: Heartbeat activity: Creation date */
  $handler->display->display_options['fields']['created_at']['id'] = 'created_at';
  $handler->display->display_options['fields']['created_at']['table'] = 'heartbeat_activity';
  $handler->display->display_options['fields']['created_at']['field'] = 'created_at';
  $handler->display->display_options['fields']['created_at']['date_format'] = 'short';
  $handler->display->display_options['fields']['created_at']['second_date_format'] = 'long';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'site-activities';
  $export['site_activities'] = $view;

  $view = new view();
  $view->name = 'site_discussions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Site Discussions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Site Discussions';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Topic of Discussion';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Field: Content: Last comment author */
  $handler->display->display_options['fields']['last_comment_name']['id'] = 'last_comment_name';
  $handler->display->display_options['fields']['last_comment_name']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_name']['field'] = 'last_comment_name';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['last_comment_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['date_format'] = 'short';
  $handler->display->display_options['fields']['last_updated']['second_date_format'] = 'long';
  /* Sort criterion: Content: Comment count */
  $handler->display->display_options['sorts']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forum' => 'forum',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'site-discussions';
  $export['site_discussions'] = $view;

  return $export;
}
