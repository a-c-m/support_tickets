<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function support_tickets_user_default_permissions() {
  $permissions = array();

  // Exported permission: create support_ticket content
  $permissions['create support_ticket content'] = array(
    'name' => 'create support_ticket content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own support_ticket content
  $permissions['edit own support_ticket content'] = array(
    'name' => 'edit own support_ticket content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
