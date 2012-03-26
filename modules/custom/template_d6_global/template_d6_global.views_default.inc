<?php

/**
 * Implementation of hook_views_default_views().
 */
function template_d6_global_views_default_views() {
  $views = array();

  // Exported view: gibson_gallery
  $view = new view;
  $view->name = 'gibson_gallery';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
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
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h1><?php 
$gallery_name = node_get_by_uuid(\'e0d10b68-7702-11e1-bcca-adfbe380d8bb\');
print_r($gallery_name->field_gallery_title[0][\'value\']);
?></h1>
';
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  /* Field: Content: Gallery Image (field_gallery_image) */
  $handler->display->display_options['fields']['field_gallery_image_fid']['id'] = 'field_gallery_image_fid';
  $handler->display->display_options['fields']['field_gallery_image_fid']['table'] = 'node_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_fid']['field'] = 'field_gallery_image_fid';
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_gallery_image_fid']['format'] = 'gallery-image_default';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery_image' => 'gallery_image',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="controls-previous">Previous</div>
<div class="controls-next">Next</div>';
  $handler->display->display_options['footer']['area']['format'] = '3';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image (field_gallery_image) */
  $handler->display->display_options['fields']['field_gallery_image_fid']['id'] = 'field_gallery_image_fid';
  $handler->display->display_options['fields']['field_gallery_image_fid']['table'] = 'node_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_fid']['field'] = 'field_gallery_image_fid';
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_gallery_image_fid']['format'] = 'gallery-image_default';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery_image' => 'gallery_image',
  );
  $handler->display->display_options['path'] = 'gallery';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'gallery';
  $handler->display->display_options['menu']['weight'] = '0';

  $views[$view->name] = $view;

  // Exported view: gibson_stockists
  $view = new view;
  $view->name = 'gibson_stockists';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Stockists Page';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'field_state_value';
  $handler->display->display_options['style_options']['row_class'] = 'row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* Field: Content: Address (field_address) */
  $handler->display->display_options['fields']['field_address_value']['id'] = 'field_address_value';
  $handler->display->display_options['fields']['field_address_value']['table'] = 'node_data_field_address';
  $handler->display->display_options['fields']['field_address_value']['field'] = 'field_address_value';
  $handler->display->display_options['fields']['field_address_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_address_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_address_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_address_value']['label_type'] = 'none';
  /* Field: Content: Company (field_company) */
  $handler->display->display_options['fields']['field_company_value']['id'] = 'field_company_value';
  $handler->display->display_options['fields']['field_company_value']['table'] = 'node_data_field_company';
  $handler->display->display_options['fields']['field_company_value']['field'] = 'field_company_value';
  $handler->display->display_options['fields']['field_company_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_company_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_company_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_company_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_company_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_company_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_company_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_company_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_company_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_company_value']['label_type'] = 'none';
  /* Field: Content: Phone Number (field_phone_number) */
  $handler->display->display_options['fields']['field_phone_number_value']['id'] = 'field_phone_number_value';
  $handler->display->display_options['fields']['field_phone_number_value']['table'] = 'node_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number_value']['field'] = 'field_phone_number_value';
  $handler->display->display_options['fields']['field_phone_number_value']['label'] = 'ph:';
  $handler->display->display_options['fields']['field_phone_number_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone_number_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_number_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['label_type'] = 'custom';
  /* Field: Content: State (field_state) */
  $handler->display->display_options['fields']['field_state_value']['id'] = 'field_state_value';
  $handler->display->display_options['fields']['field_state_value']['table'] = 'node_data_field_state';
  $handler->display->display_options['fields']['field_state_value']['field'] = 'field_state_value';
  $handler->display->display_options['fields']['field_state_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_state_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_state_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_state_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_state_value']['element_type'] = 'h1';
  $handler->display->display_options['fields']['field_state_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_state_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_state_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_state_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_state_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_state_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_state_value']['label_type'] = 'none';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="company">[field_company_value]</span>[field_address_value] ph:[field_phone_number_value]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: State (field_state) */
  $handler->display->display_options['sorts']['field_state_value']['id'] = 'field_state_value';
  $handler->display->display_options['sorts']['field_state_value']['table'] = 'node_data_field_state';
  $handler->display->display_options['sorts']['field_state_value']['field'] = 'field_state_value';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gibson_stockist' => 'gibson_stockist',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h1>Where the party\'s at</h1>';
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Address (field_address) */
  $handler->display->display_options['fields']['field_address_value']['id'] = 'field_address_value';
  $handler->display->display_options['fields']['field_address_value']['table'] = 'node_data_field_address';
  $handler->display->display_options['fields']['field_address_value']['field'] = 'field_address_value';
  $handler->display->display_options['fields']['field_address_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_address_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_address_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_address_value']['label_type'] = 'none';
  /* Field: Content: Company (field_company) */
  $handler->display->display_options['fields']['field_company_value']['id'] = 'field_company_value';
  $handler->display->display_options['fields']['field_company_value']['table'] = 'node_data_field_company';
  $handler->display->display_options['fields']['field_company_value']['field'] = 'field_company_value';
  $handler->display->display_options['fields']['field_company_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_company_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_company_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_company_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_company_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_company_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_company_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_company_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_company_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_company_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_company_value']['label_type'] = 'none';
  /* Field: Content: Phone Number (field_phone_number) */
  $handler->display->display_options['fields']['field_phone_number_value']['id'] = 'field_phone_number_value';
  $handler->display->display_options['fields']['field_phone_number_value']['table'] = 'node_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number_value']['field'] = 'field_phone_number_value';
  $handler->display->display_options['fields']['field_phone_number_value']['label'] = 'ph:';
  $handler->display->display_options['fields']['field_phone_number_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone_number_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_number_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_phone_number_value']['label_type'] = 'custom';
  /* Field: Content: State (field_state) */
  $handler->display->display_options['fields']['field_state_value']['id'] = 'field_state_value';
  $handler->display->display_options['fields']['field_state_value']['table'] = 'node_data_field_state';
  $handler->display->display_options['fields']['field_state_value']['field'] = 'field_state_value';
  $handler->display->display_options['fields']['field_state_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_state_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_state_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_state_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_state_value']['element_type'] = 'h1';
  $handler->display->display_options['fields']['field_state_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_state_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_state_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_state_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_state_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_state_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_state_value']['label_type'] = 'none';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="company">[field_company_value]</span>[field_address_value] ph:[field_phone_number_value]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  $handler->display->display_options['path'] = 'where-the-partys-at';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Where the party\'s at';
  $handler->display->display_options['menu']['weight'] = '0';

  $views[$view->name] = $view;

  return $views;
}
