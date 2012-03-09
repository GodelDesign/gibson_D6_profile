<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function template_d6_global_ds_default_settings() {
  $data = array(
    'nd' => array(
      'gibson_page' => array(
        'full' => array(
          'fields' => array(
            'title' => array(
              'region' => 'header',
              'weight' => '-100',
              'format' => 'nd_title_h1_nolink',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'body' => array(
              'region' => 'middle',
              'weight' => '-99',
              'format' => 'nd_bodyfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
          ),
          'status' => 2,
          'region_styles' => array(
            'header' => '',
            'left' => '',
            'middle' => '',
            'right' => '',
            'footer' => '',
          ),
        ),
      ),
    ),
  );
  return $data;
}
