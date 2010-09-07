<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function support_tickets_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function support_tickets_node_info() {
  $items = array(
    'support_ticket' => array(
      'name' => t('Support ticket'),
      'module' => 'features',
      'description' => t('A simple CCK driven way to track things that need to be done and who\'s done them.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '10',
      'help' => t('A support ticket is used to document a task to be executed.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function support_tickets_views_api() {
  return array(
    'api' => '2',
  );
}
