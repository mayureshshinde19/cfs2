<?php
/**
 * @file
 * my_documents.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function my_documents_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'my_documents';
  $view->description = 'This page gives details on the list of documents available to the user under a particular tower';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Documents';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
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
  /* Relationship: Content: Tower Type (field_tower_type) */
  $handler->display->display_options['relationships']['field_tower_type_tid']['id'] = 'field_tower_type_tid';
  $handler->display->display_options['relationships']['field_tower_type_tid']['table'] = 'field_data_field_tower_type';
  $handler->display->display_options['relationships']['field_tower_type_tid']['field'] = 'field_tower_type_tid';
  /* Relationship: Taxonomy term: User using Tower Category */
  $handler->display->display_options['relationships']['reverse_field_tower_category_user']['id'] = 'reverse_field_tower_category_user';
  $handler->display->display_options['relationships']['reverse_field_tower_category_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_tower_category_user']['field'] = 'reverse_field_tower_category_user';
  $handler->display->display_options['relationships']['reverse_field_tower_category_user']['relationship'] = 'field_tower_type_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Document Page';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Document attached */
  $handler->display->display_options['fields']['field_document_attached']['id'] = 'field_document_attached';
  $handler->display->display_options['fields']['field_document_attached']['table'] = 'field_data_field_document_attached';
  $handler->display->display_options['fields']['field_document_attached']['field'] = 'field_document_attached';
  $handler->display->display_options['fields']['field_document_attached']['click_sort_column'] = 'fid';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Document type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_tower_category_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Document type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_document_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['operator_id'] = 'field_document_type_tid_op';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['label'] = 'Search by tag';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['operator'] = 'field_document_type_tid_op';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['identifier'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Document attached (field_document_attached:description) */
  $handler->display->display_options['filters']['field_document_attached_description']['id'] = 'field_document_attached_description';
  $handler->display->display_options['filters']['field_document_attached_description']['table'] = 'field_data_field_document_attached';
  $handler->display->display_options['filters']['field_document_attached_description']['field'] = 'field_document_attached_description';
  $handler->display->display_options['filters']['field_document_attached_description']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_document_attached_description']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_attached_description']['expose']['operator_id'] = 'field_document_attached_description_op';
  $handler->display->display_options['filters']['field_document_attached_description']['expose']['label'] = 'Search by File Name';
  $handler->display->display_options['filters']['field_document_attached_description']['expose']['operator'] = 'field_document_attached_description_op';
  $handler->display->display_options['filters']['field_document_attached_description']['expose']['identifier'] = 'field_document_attached_description';
  $handler->display->display_options['filters']['field_document_attached_description']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'my-documents';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['my_documents'] = $view;

  return $export;
}
