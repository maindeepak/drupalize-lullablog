<?php
/**
 * @file
 * lullablog.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function lullablog_user_default_roles() {
  $roles = array();

  // Exported role: Lullablogger
  $roles['Lullablogger'] = array(
    'name' => 'Lullablogger',
    'weight' => '3',
  );

  return $roles;
}
