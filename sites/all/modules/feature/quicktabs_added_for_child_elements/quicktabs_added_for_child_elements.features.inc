<?php
/**
 * @file
 * quicktabs_added_for_child_elements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function quicktabs_added_for_child_elements_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}
