<?php

/**
 * Implementation of hook_content_default_fields().
 */
function support_tickets_content_default_fields() {
  module_load_include('inc', 'support_tickets', 'support_tickets.defaults');
  $args = func_get_args();
  return call_user_func_array('_support_tickets_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function support_tickets_ctools_plugin_api() {
  module_load_include('inc', 'support_tickets', 'support_tickets.defaults');
  $args = func_get_args();
  return call_user_func_array('_support_tickets_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function support_tickets_node_info() {
  module_load_include('inc', 'support_tickets', 'support_tickets.features.node');
  $args = func_get_args();
  return call_user_func_array('_support_tickets_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function support_tickets_strongarm() {
  module_load_include('inc', 'support_tickets', 'support_tickets.defaults');
  $args = func_get_args();
  return call_user_func_array('_support_tickets_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function support_tickets_views_default_views() {
  module_load_include('inc', 'support_tickets', 'support_tickets.features.views');
  $args = func_get_args();
  return call_user_func_array('_support_tickets_views_default_views', $args);
}
