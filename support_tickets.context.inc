<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function support_tickets_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'support_ticket';
  $context->description = 'A simple CCK driven ticketing system';
  $context->tag = 'Support ticket';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'support_ticket' => 'support_ticket',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'views' => array(
      'values' => array(
        'support_ticket_list' => 'support_ticket_list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'default',
    ),
    'menu' => 'support-tickets',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A simple CCK driven ticketing system');
  t('Support ticket');

  $export['support_ticket'] = $context;
  return $export;
}
