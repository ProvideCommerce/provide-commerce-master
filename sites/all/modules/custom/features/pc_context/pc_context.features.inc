<?php
/**
 * @file
 * pc_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pc_context_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}