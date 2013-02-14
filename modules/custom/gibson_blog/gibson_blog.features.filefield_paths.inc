<?php

/**
 * Implementation of hook_default_filefield_paths().
 */
function gibson_blog_default_filefield_paths() {
  $settings = array();

  // Exported blog_post-field_blog_post_images
  $settings['blog_post-field_blog_post_images'] = array(
    'type' => 'blog_post',
    'field' => 'field_blog_post_images',
    'filename' => array(
      'value' => '[filefield-onlyname-original].[filefield-extension-original]',
      'tolower' => 1,
      'pathauto' => 1,
      'transliterate' => 1,
    ),
    'filepath' => array(
      'value' => 'blog_post/images/[yyyy]/[mon]',
      'tolower' => 1,
      'pathauto' => 1,
      'transliterate' => 1,
    ),
  );

  return $settings;
}
