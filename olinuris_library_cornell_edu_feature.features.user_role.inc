<?php
/**
 * @file
 * olinuris_library_cornell_edu_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function olinuris_library_cornell_edu_feature_user_default_roles() {
  $roles = array();

  // Exported role: Digital Sign Worker.
  $roles['Digital Sign Worker'] = array(
    'name' => 'Digital Sign Worker',
    'weight' => 36,
  );

  // Exported role: Form Editor.
  $roles['Form Editor'] = array(
    'name' => 'Form Editor',
    'weight' => 35,
  );

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => 33,
  );

  // Exported role: unfiltered contributor.
  $roles['unfiltered contributor'] = array(
    'name' => 'unfiltered contributor',
    'weight' => 37,
  );

  return $roles;
}
