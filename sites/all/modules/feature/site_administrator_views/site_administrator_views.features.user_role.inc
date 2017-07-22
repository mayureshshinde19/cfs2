<?php
/**
 * @file
 * site_administrator_views.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function site_administrator_views_user_default_roles() {
  $roles = array();

  // Exported role: Site Administrator.
  $roles['Site Administrator'] = array(
    'name' => 'Site Administrator',
    'weight' => 6,
  );

  return $roles;
}
