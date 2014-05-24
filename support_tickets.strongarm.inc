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
  $strongarm->value = '3';

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
  $strongarm->name = 'nodeformscols_field_placements_support_ticket_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Subject',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => NULL,
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'buttons' => array(
      'region' => 'right',
      'weight' => '13',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'notifications' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Notifications',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Book outline',
      'collapsed' => 0,
      'hidden' => 1,
    ),
    'attachments' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'File attachments',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'field_ticket_type' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Type',
    ),
    'field_ticket_priority' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => TRUE,
      'title' => 'Priority',
    ),
    'field_ticket_state' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => TRUE,
      'title' => 'Status',
    ),
    'field_assigned_to' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Assigned to',
      'hidden' => 0,
    ),
    'field_project' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Project',
      'hidden' => 0,
    ),
    'field_due' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Due date',
      'hidden' => 0,
    ),
    'og_nodeapi' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Groups',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'taxonomy' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
  );

  $export['nodeformscols_field_placements_support_ticket_default'] = $strongarm;
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
