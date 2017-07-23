<?php
/**
 * @file
 * search_page_search_block_save_search_button_and_save_search_list.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function search_page_search_block_save_search_button_and_save_search_list_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer search_api_saved_searches'.
  $permissions['administer search_api_saved_searches'] = array(
    'name' => 'administer search_api_saved_searches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api_saved_searches',
  );

  // Exported permission: 'use search_api_saved_searches'.
  $permissions['use search_api_saved_searches'] = array(
    'name' => 'use search_api_saved_searches',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Tower Member' => 'Tower Member',
      'administrator' => 'administrator',
    ),
    'module' => 'search_api_saved_searches',
  );

  return $permissions;
}
