<?php

/**
 * Implementation of hook_user_default_roles().
 */
function template_d6_global_user_default_roles() {
  $roles = array();

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: staff
  $roles['staff'] = array(
    'name' => 'staff',
  );

  return $roles;
}
