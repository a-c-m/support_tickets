<?php

/**
 * Implementation of hook_strongarm().
 */
function support_tickets_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_support_ticket';
  $strongarm->value = 0;

  $export['comment_anonymous_support_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_support_ticket';
  $strongarm->value = '1';

  $export['comment_controls_support_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_support_ticket';
  $strongarm->value = '4';

  $export['comment_default_mode_support_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_support_ticket';
  $strongarm->value = '2';

  $export['comment_default_order_support_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_support_ticket';
  $strongarm->value = '50';

  $export['comment_default_per_page_support_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_driven:type:support_ticket:driven_props';
  $strongarm->value = array(
    'enabled' => 1,
    'cck' => array(
      'field_ticket_type' => array(
        'enabled' => 1,
      ),
      'field_ticket_priority' => array(
        'enabled' => 1,
      ),
      'field_ticket_state' => array(
        'enabled' => 1,
      ),
      'field_assigned_to' => array(
        'enabled' => 1,
      ),
      'field_project' => array(
        'enabled' => 0,
      ),
      'field_due' => array(
        'enabled' => 0,
      ),
    ),
  );

  $export['comment_driven:type:support_ticket:driven_props'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_driven:type:support_ticket:settings';
  $strongarm->value = array(
    'empty_comment' => 1,
    'fieldset:collapsed' => 1,
    'fieldset:title' => 'Case information',
    'live_render' => '1',
  );

  $export['comment_driven:type:support_ticket:settings'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_support_ticket';
  $strongarm->value = '1';

  $export['comment_form_location_support_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_support_ticket';
  $strongarm->value = '0';

  $export['comment_preview_support_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_support_ticket';
  $strongarm->value = '0';

  $export['comment_subject_field_support_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_support_ticket';
  $strongarm->value = '2';

  $export['comment_support_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_support_ticket';
  $strongarm->value = array(
    'title' => '27',
    'body_field' => '36',
    'revision_information' => '38',
    'author' => '41',
    'options' => '42',
    'comment_settings' => '40',
    'menu' => '34',
    'book' => '37',
    'attachments' => '39',
    'og_nodeapi' => '35',
  );

  $export['content_extra_weights_support_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_support_ticket';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_support_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_support_ticket';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_support_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_support_ticket';
  $strongarm->value = '1';

  $export['upload_support_ticket'] = $strongarm;
  return $export;
}
