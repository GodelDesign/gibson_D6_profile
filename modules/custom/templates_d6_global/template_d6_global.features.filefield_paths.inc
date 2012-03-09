<?php

/**
 * Implementation of hook_default_filefield_paths().
 */
function template_d6_global_default_filefield_paths() {
  $settings = array();

  // Exported gallery_image-field_gallery_image
  $settings['gallery_image-field_gallery_image'] = array(
    'type' => 'gallery_image',
    'field' => 'field_gallery_image',
    'filename' => array(
      'value' => '[filefield-onlyname-original].[filefield-extension-original]',
      'tolower' => 0,
      'pathauto' => 0,
      'transliterate' => 0,
    ),
    'filepath' => array(
      'value' => '',
      'tolower' => 0,
      'pathauto' => 0,
      'transliterate' => 0,
    ),
  );

  return $settings;
}
