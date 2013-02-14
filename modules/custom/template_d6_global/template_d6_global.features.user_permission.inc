<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function template_d6_global_user_default_permissions() {
  $permissions = array();

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: access all webform results
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'staff',
    ),
  );

  // Exported permission: access own webform results
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(),
  );

  // Exported permission: access own webform submissions
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(),
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
  );

  // Exported permission: administer google analytics
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(),
  );

  // Exported permission: administer imageapi
  $permissions['administer imageapi'] = array(
    'name' => 'administer imageapi',
    'roles' => array(),
  );

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(),
  );

  // Exported permission: administer less
  $permissions['administer less'] = array(
    'name' => 'administer less',
    'roles' => array(),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
  );

  // Exported permission: administer page manager
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
  );

  // Exported permission: collapse format fieldset by default
  $permissions['collapse format fieldset by default'] = array(
    'name' => 'collapse format fieldset by default',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: collapsible format selection
  $permissions['collapsible format selection'] = array(
    'name' => 'collapsible format selection',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: create email content
  $permissions['create email content'] = array(
    'name' => 'create email content',
    'roles' => array(),
  );

  // Exported permission: create gallery_image content
  $permissions['create gallery_image content'] = array(
    'name' => 'create gallery_image content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: create gallery_name content
  $permissions['create gallery_name content'] = array(
    'name' => 'create gallery_name content',
    'roles' => array(),
  );

  // Exported permission: create gibson_background_image content
  $permissions['create gibson_background_image content'] = array(
    'name' => 'create gibson_background_image content',
    'roles' => array(),
  );

  // Exported permission: create gibson_page content
  $permissions['create gibson_page content'] = array(
    'name' => 'create gibson_page content',
    'roles' => array(),
  );

  // Exported permission: create gibson_stockist content
  $permissions['create gibson_stockist content'] = array(
    'name' => 'create gibson_stockist content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
  );

  // Exported permission: create webform content
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
  );

  // Exported permission: delete all webform submissions
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(),
  );

  // Exported permission: delete any email content
  $permissions['delete any email content'] = array(
    'name' => 'delete any email content',
    'roles' => array(),
  );

  // Exported permission: delete any gallery_image content
  $permissions['delete any gallery_image content'] = array(
    'name' => 'delete any gallery_image content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete any gallery_name content
  $permissions['delete any gallery_name content'] = array(
    'name' => 'delete any gallery_name content',
    'roles' => array(),
  );

  // Exported permission: delete any gibson_background_image content
  $permissions['delete any gibson_background_image content'] = array(
    'name' => 'delete any gibson_background_image content',
    'roles' => array(),
  );

  // Exported permission: delete any gibson_page content
  $permissions['delete any gibson_page content'] = array(
    'name' => 'delete any gibson_page content',
    'roles' => array(),
  );

  // Exported permission: delete any gibson_stockist content
  $permissions['delete any gibson_stockist content'] = array(
    'name' => 'delete any gibson_stockist content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete any webform content
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
  );

  // Exported permission: delete own email content
  $permissions['delete own email content'] = array(
    'name' => 'delete own email content',
    'roles' => array(),
  );

  // Exported permission: delete own gallery_image content
  $permissions['delete own gallery_image content'] = array(
    'name' => 'delete own gallery_image content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete own gallery_name content
  $permissions['delete own gallery_name content'] = array(
    'name' => 'delete own gallery_name content',
    'roles' => array(),
  );

  // Exported permission: delete own gibson_background_image content
  $permissions['delete own gibson_background_image content'] = array(
    'name' => 'delete own gibson_background_image content',
    'roles' => array(),
  );

  // Exported permission: delete own gibson_page content
  $permissions['delete own gibson_page content'] = array(
    'name' => 'delete own gibson_page content',
    'roles' => array(),
  );

  // Exported permission: delete own gibson_stockist content
  $permissions['delete own gibson_stockist content'] = array(
    'name' => 'delete own gibson_stockist content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete own webform content
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
  );

  // Exported permission: delete own webform submissions
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
  );

  // Exported permission: edit all webform submissions
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(),
  );

  // Exported permission: edit any email content
  $permissions['edit any email content'] = array(
    'name' => 'edit any email content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit any gallery_image content
  $permissions['edit any gallery_image content'] = array(
    'name' => 'edit any gallery_image content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit any gallery_name content
  $permissions['edit any gallery_name content'] = array(
    'name' => 'edit any gallery_name content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit any gibson_background_image content
  $permissions['edit any gibson_background_image content'] = array(
    'name' => 'edit any gibson_background_image content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit any gibson_page content
  $permissions['edit any gibson_page content'] = array(
    'name' => 'edit any gibson_page content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit any gibson_stockist content
  $permissions['edit any gibson_stockist content'] = array(
    'name' => 'edit any gibson_stockist content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit any webform content
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
  );

  // Exported permission: edit own email content
  $permissions['edit own email content'] = array(
    'name' => 'edit own email content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own gallery_image content
  $permissions['edit own gallery_image content'] = array(
    'name' => 'edit own gallery_image content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own gallery_name content
  $permissions['edit own gallery_name content'] = array(
    'name' => 'edit own gallery_name content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own gibson_background_image content
  $permissions['edit own gibson_background_image content'] = array(
    'name' => 'edit own gibson_background_image content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own gibson_page content
  $permissions['edit own gibson_page content'] = array(
    'name' => 'edit own gibson_page content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own gibson_stockist content
  $permissions['edit own gibson_stockist content'] = array(
    'name' => 'edit own gibson_stockist content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own webform content
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own webform submissions
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
  );

  // Exported permission: opt-in or out of tracking
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(),
  );

  // Exported permission: show format selection for blocks
  $permissions['show format selection for blocks'] = array(
    'name' => 'show format selection for blocks',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: show format selection for comments
  $permissions['show format selection for comments'] = array(
    'name' => 'show format selection for comments',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: show format selection for nodes
  $permissions['show format selection for nodes'] = array(
    'name' => 'show format selection for nodes',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: show format tips
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: show more format tips link
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(),
  );

  // Exported permission: use PHP for tracking visibility
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(),
  );

  // Exported permission: use admin toolbar
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(),
  );

  // Exported permission: use page manager
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(),
  );

  // Exported permission: view imagecache gallery-image
  $permissions['view imagecache gallery-image'] = array(
    'name' => 'view imagecache gallery-image',
    'roles' => array(),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
  );

  return $permissions;
}
