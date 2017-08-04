$view = new view();
$view->name = 'my_tower_documents';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'My Tower Documents';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'My Tower Documents';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'name' => 'name',
  'field_tower_category' => 'field_tower_category',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_tower_category' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Field: User Service Line (field_service) */
$handler->display->display_options['relationships']['field_service_tid']['id'] = 'field_service_tid';
$handler->display->display_options['relationships']['field_service_tid']['table'] = 'field_data_field_service';
$handler->display->display_options['relationships']['field_service_tid']['field'] = 'field_service_tid';
$handler->display->display_options['relationships']['field_service_tid']['required'] = TRUE;
/* Relationship: Taxonomy term: Content using User Service Line */
$handler->display->display_options['relationships']['reverse_field_service_node']['id'] = 'reverse_field_service_node';
$handler->display->display_options['relationships']['reverse_field_service_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_service_node']['field'] = 'reverse_field_service_node';
$handler->display->display_options['relationships']['reverse_field_service_node']['relationship'] = 'field_service_tid';
$handler->display->display_options['relationships']['reverse_field_service_node']['required'] = TRUE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_service_node';
/* Field: Field: User Service Line */
$handler->display->display_options['fields']['field_service']['id'] = 'field_service';
$handler->display->display_options['fields']['field_service']['table'] = 'field_data_field_service';
$handler->display->display_options['fields']['field_service']['field'] = 'field_service';
$handler->display->display_options['fields']['field_service']['relationship'] = 'reverse_field_service_node';
$handler->display->display_options['fields']['field_service']['label'] = 'Service';
$handler->display->display_options['fields']['field_service']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
$handler->display->display_options['fields']['field_service']['delta_offset'] = '0';
/* Sort criterion: User: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'users';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_service_node';
$handler->display->display_options['filters']['type']['value'] = array(
  'documents' => 'documents',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'my-tower-documents';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
