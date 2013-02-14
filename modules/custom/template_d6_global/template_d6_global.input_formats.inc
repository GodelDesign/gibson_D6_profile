<?php

/**
 * Implementation of hook_input_formats().
 */
function template_d6_global_input_formats() {
  $input_formats = array();

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'wysiwyg_test';
  $input_format->roles = array(
    1 => 'anonymous user',
    2 => 'authenticated user',
  );
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      'filter_html' => 1,
      'allowed_html' => '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd>',
      'filter_html_help' => 1,
      'filter_html_nofollow' => FALSE,
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      '2' => '0',
      '0' => '1',
      '1' => '2',
      '3' => '10',
    ),
  );
  $input_format->machine = 'wysiwyg_test';
  $input_formats['wysiwyg_test'] = $input_format;

  return $input_formats;

}
