<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _support_tickets_node_info() {
  $items = array(
    'support_ticket' => array(
      'name' => t('Support ticket'),
      'module' => 'features',
      'description' => t('A simple CCK driven way to track things that need to be done and who\'s done them.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '25',
      'help' => t('NEEDS COPY'),
    ),
  );
  return $items;
}
