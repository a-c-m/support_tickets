<?php

/*
function support_tickets_theme($existing, $type, $theme, $path) {
  $path = drupal_get_path('module', 'support_tickets') . '/theme';

  return array(
    'views_view_table__support_ticket_list__page' => array(
      'arguments' => array('title' => NULL, 'header' => NULL, 'fields' => NULL, 'class' => NULL, 'row_classes' => NULL, 'rows' => NULL),
      'path' => $path,
      'template' => 'views-view-table--support-ticket-list--page',
    ),
  );
}
*/


/**
 * THEME ==============================================================
 */


/**
 * Preprocessor for theme('views_view_table').
 *
 * Adds a class name to the table so that we can show priority values as images
 * and other nice things.
 */
function support_tickets_preprocess_views_view_table(&$vars) {
  $view = $vars['view'];
  
  if ($view->name == 'support_ticket_list') {
    $vars['class'] .= " cases";

    global $user;
/*     $inactive_states = atrium_casetracker_get_inactive_states(); */

    foreach ($view->result as $index => $row) {
      if (!empty($row->node_data_field_assigned_to_field_assigned_to_uid) && $row->node_data_field_assigned_to_field_assigned_to_uid  == $user->uid) {
        $vars['row_classes'][$index][] = 'mine';
      }
/*
      if (!empty($row->casetracker_case_case_status_id) && in_array($row->casetracker_case_case_status_id, $inactive_states)) {
        $vars['row_classes'][$index][] = 'status-inactive';
      }
*/
    }

  }
}
