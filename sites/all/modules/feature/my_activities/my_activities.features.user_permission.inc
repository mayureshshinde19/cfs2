<?php
/**
 * @file
 * my_activities.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function my_activities_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access heartbeat activity profiles'.
  $permissions['access heartbeat activity profiles'] = array(
    'name' => 'access heartbeat activity profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'heartbeat',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'admin heartbeat configure'.
  $permissions['admin heartbeat configure'] = array(
    'name' => 'admin heartbeat configure',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'heartbeat_ui',
  );

  // Exported permission: 'admin heartbeat delete all'.
  $permissions['admin heartbeat delete all'] = array(
    'name' => 'admin heartbeat delete all',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'heartbeat',
  );

  // Exported permission: 'admin heartbeat delete own'.
  $permissions['admin heartbeat delete own'] = array(
    'name' => 'admin heartbeat delete own',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'heartbeat',
  );

  // Exported permission: 'admin heartbeat streams'.
  $permissions['admin heartbeat streams'] = array(
    'name' => 'admin heartbeat streams',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'heartbeat_ui',
  );

  // Exported permission: 'admin heartbeat templates'.
  $permissions['admin heartbeat templates'] = array(
    'name' => 'admin heartbeat templates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'heartbeat',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'view Node activity stream'.
  $permissions['view Node activity stream'] = array(
    'name' => 'view Node activity stream',
    'roles' => array(),
    'module' => 'heartbeat',
  );

  // Exported permission: 'view Single activity stream'.
  $permissions['view Single activity stream'] = array(
    'name' => 'view Single activity stream',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'heartbeat',
  );

  // Exported permission: 'view Site activity stream'.
  $permissions['view Site activity stream'] = array(
    'name' => 'view Site activity stream',
    'roles' => array(),
    'module' => 'heartbeat',
  );

  // Exported permission: 'view User activity stream'.
  $permissions['view User activity stream'] = array(
    'name' => 'view User activity stream',
    'roles' => array(),
    'module' => 'heartbeat',
  );

  // Exported permission: 'view User relations activity stream'.
  $permissions['view User relations activity stream'] = array(
    'name' => 'view User relations activity stream',
    'roles' => array(),
    'module' => 'heartbeat',
  );

  // Exported permission: 'view Views activity stream'.
  $permissions['view Views activity stream'] = array(
    'name' => 'view Views activity stream',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'heartbeat',
  );

  // Exported permission: 'view heartbeat messages'.
  $permissions['view heartbeat messages'] = array(
    'name' => 'view heartbeat messages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'heartbeat',
  );

  return $permissions;
}
