<?php

/**
 * Implementation of hook_views_default_views().
 */
function gibson_blog_views_default_views() {
  $views = array();

  // Exported view: gibson_paparazzi
  $view = new view;
  $view->name = 'gibson_paparazzi';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Gibson Paparazzi Page';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h1>Papparazzi</h1>';
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Images (field_blog_post_images) */
  $handler->display->display_options['fields']['field_blog_post_images_fid']['id'] = 'field_blog_post_images_fid';
  $handler->display->display_options['fields']['field_blog_post_images_fid']['table'] = 'node_data_field_blog_post_images';
  $handler->display->display_options['fields']['field_blog_post_images_fid']['field'] = 'field_blog_post_images_fid';
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_blog_post_images_fid']['format'] = 'blog-image_default';
  $handler->display->display_options['fields']['field_blog_post_images_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['multiple']['multiple_reversed'] = 0;
  /* Field: Content: Body (field_blog_post_text_body) */
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['id'] = 'field_blog_post_text_body_value';
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['table'] = 'node_data_field_blog_post_text_body';
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['field'] = 'field_blog_post_text_body_value';
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['label_type'] = 'none';
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog_post' => 'blog_post',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Images (field_blog_post_images) */
  $handler->display->display_options['fields']['field_blog_post_images_fid']['id'] = 'field_blog_post_images_fid';
  $handler->display->display_options['fields']['field_blog_post_images_fid']['table'] = 'node_data_field_blog_post_images';
  $handler->display->display_options['fields']['field_blog_post_images_fid']['field'] = 'field_blog_post_images_fid';
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_blog_post_images_fid']['format'] = 'blog-image_default';
  $handler->display->display_options['fields']['field_blog_post_images_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_blog_post_images_fid']['multiple']['multiple_reversed'] = 0;
  /* Field: Content: Body (field_blog_post_text_body) */
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['id'] = 'field_blog_post_text_body_value';
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['table'] = 'node_data_field_blog_post_text_body';
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['field'] = 'field_blog_post_text_body_value';
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_blog_post_text_body_value']['label_type'] = 'none';
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['path'] = 'papparazzi';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Papparazzi';
  $handler->display->display_options['menu']['weight'] = '0';

  $views[$view->name] = $view;

  return $views;
}
