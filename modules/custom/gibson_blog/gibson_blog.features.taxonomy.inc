<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function gibson_blog_taxonomy_default_vocabularies() {
  return array(
    'blog_post_categories' => array(
      'name' => 'Blog Post Categories',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_blog_post_categories',
      'weight' => '0',
      'nodes' => array(
        'blog_post' => 'blog_post',
      ),
    ),
    'blog_post_tags' => array(
      'name' => 'Blog Post Tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_blog_post_tags',
      'weight' => '0',
      'nodes' => array(
        'blog_post' => 'blog_post',
      ),
    ),
  );
}
