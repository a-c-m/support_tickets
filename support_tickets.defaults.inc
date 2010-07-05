<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _support_tickets_content_default_fields() {
  $fields = array();

  // Exported field: field_assigned_to
  $fields[] = array(
    'field_name' => 'field_assigned_to',
    'type_name' => 'support_ticket',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '3' => 0,
      '4' => 0,
    ),
    'referenceable_status' => '1',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_assigned_to][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Assigned to',
      'weight' => 0,
      'description' => '',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_ticket_priority
  $fields[] = array(
    'field_name' => 'field_ticket_priority',
    'type_name' => 'support_ticket',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'EMERGENCY
High
Normal
Low',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => 'Normal',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Priority',
      'weight' => '-2',
      'description' => 'How important this ticket is. Tickets marked as EMERGENCY or High may be completed done out of hours and may cost extra.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_ticket_state
  $fields[] = array(
    'field_name' => 'field_ticket_state',
    'type_name' => 'support_ticket',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'New
Open
Needs feedback
Complete
Rejected',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'New',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Status',
      'weight' => '-1',
      'description' => 'The current state of the ticket',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_ticket_type
  $fields[] = array(
    'field_name' => 'field_ticket_type',
    'type_name' => 'support_ticket',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Bug
Edit/Add content
Help/Question
Request',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'Help/Question',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Type',
      'weight' => '-3',
      'description' => 'The type of ticket your submitting, as question, bug or request.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  array(
    t('Assigned to'),
    t('Priority'),
    t('Status'),
    t('Type'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _support_tickets_context_default_contexts() {
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

  $translatables['support_ticket'] = array(
    t('A simple CCK driven ticketing system'),
    t('Support ticket'),
  );

  $export['support_ticket'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _support_tickets_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  else if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _support_tickets_strongarm() {
  $export = array();
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
    'title' => '-5',
    'body_field' => '3',
    'revision_information' => '5',
    'comment_settings' => '7',
    'menu' => '1',
    'book' => '4',
    'attachments' => '6',
    'og_nodeapi' => '2',
  );

  $export['content_extra_weights_support_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_support_ticket';
  $strongarm->value = 'group_post_wiki';

  $export['og_content_type_usage_support_ticket'] = $strongarm;
  return $export;
}
