<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
  <head>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js"></script>
    <script>
      $jq = $.noConflict();
    </script>
    
<style>.page-front {background-image:url('/<?php 
$front_bg_node = node_get_by_uuid('acc41196-757a-11e1-9767-6793aca74049');
print_r($front_bg_node->field_background_image[0]['filepath']);
?>');}

body {background-image:url('/<?php 
$bg_node = node_get_by_uuid('ae954318-76d9-11e1-bcca-adfbe380d8bb');
print_r($bg_node->field_background_image[0]['filepath']);
?>');}


</style>

<?php print $head;
?>
    <?php print $styles ?>
    <title><?php print $head_title ?></title>
  </head>
  <body <?php print drupal_attributes($attr) ?>>

  <?php print $skipnav ?>



  <?php if ($header): ?>
    <div id='header'><div class='limiter clear-block'>
	  <div id="header_highlight"></div>
	  <div id="logo-wrapper">
		<a href="/"><img src="<?php print $logo; ?>" alt="CLIENTSITE" /></a>
	  </div>
      <?php print $header; ?>
    </div></div>
  <?php endif; ?>

  <?php if($page_top) : ?>
  <div id="page-top"><div class="limiter clear-block"><?php print $page_top; ?></div></div>
  <?php endif; ?>

  <div id='page'><div class='limiter clear-block'>
	
	  <?php if ($help || ($show_messages && $messages)): ?>
	    <div id='console'><div class='limiter clear-block'>
	      <?php print $help; ?>
	      <?php if ($show_messages && $messages): print $messages; endif; ?>
	    </div></div>
	  <?php endif; ?>

    <?php if ($left): ?>
      <div id='left' class='clear-block'><?php print $left ?></div>
    <?php endif; ?>

    <div id='main' class='clear-block'>
        <?php if ($tabs) print $tabs ?>
        <?php if ($tabs2) print $tabs2 ?>
        
        <?php if ($content_above): ?>
          <div id="content-above" class="clear-block"><?php print $content_above; ?></div>
        <?php endif; ?>
        
        <div id='content' class='clear-block'><?php print $content ?></div>
        
        <?php if ($content_below): ?>
          <div id="content-below" class="clear-block"><?php print $content_below; ?></div>
        <?php endif; ?>
        
    </div>

    <?php if ($right): ?>
      <div id='right' class='clear-block'><?php print $right ?></div>
    <?php endif; ?>

  </div></div>

  <div id="footer"><div class='limiter clear-block'>
    <?php print $feed_icons ?>
    <?php print $footer ?>
    <?php print $footer_message ?>
  </div></div>

  <?php print $scripts ?>
  <?php print $closure ?>

  </body>
</html>
