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
  $context->tag = 'Support';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'support_ticket' => 'support_ticket',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'support_ticket_list:page_1' => 'support_ticket_list:page_1',
        'support_ticket_user:page_1' => 'support_ticket_user:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-support_ticket_list-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-support_ticket_list-page_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-support_ticket_user-block_2' => array(
          'module' => 'views',
          'delta' => 'support_ticket_user-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-support_ticket_list-block_1' => array(
          'module' => 'views',
          'delta' => 'support_ticket_list-block_1',
          'region' => 'right',
          'weight' => 2,
        ),
      ),
      'layout' => 'default',
    ),
    'breadcrumb' => 'support',
    'menu' => 'support',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A simple CCK driven ticketing system');
  t('Support');

  $export['support_ticket'] = $context;
  return $export;
}
