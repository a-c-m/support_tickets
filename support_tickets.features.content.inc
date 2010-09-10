<?php

/**
 * Implementation of hook_content_default_fields().
 */
function support_tickets_content_default_fields() {
  $fields = array();

  // Exported field: field_assigned_to
  $fields['support_ticket-field_assigned_to'] = array(
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
      'weight' => '31',
      'description' => '',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_project
  $fields['support_ticket-field_project'] = array(
    'field_name' => 'field_project',
    'type_name' => 'support_ticket',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
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
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'book' => 0,
      'event' => 0,
      'group' => 0,
      'logged_time' => 0,
      'profile' => 0,
      'shoutbox' => 0,
      'support_project' => 0,
      'support_ticket' => 0,
      'feed_ical_item' => 0,
      'feed_ical' => 0,
    ),
    'advanced_view' => 'support_project_list',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Project',
      'weight' => '32',
      'description' => 'A ticket can belong to a project.',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_ticket_priority
  $fields['support_ticket-field_ticket_priority'] = array(
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
      'weight' => '29',
      'description' => 'How important this ticket is. Tickets marked as EMERGENCY or High may be completed done out of hours and may cost extra.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_ticket_state
  $fields['support_ticket-field_ticket_state'] = array(
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
On-hold
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
      'weight' => '30',
      'description' => 'The current state of the ticket',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_ticket_type
  $fields['support_ticket-field_ticket_type'] = array(
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
Modification
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
      'weight' => '28',
      'description' => 'The type of ticket your submitting, as question, bug or request.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Assigned to');
  t('Priority');
  t('Project');
  t('Status');
  t('Type');

  return $fields;
}
