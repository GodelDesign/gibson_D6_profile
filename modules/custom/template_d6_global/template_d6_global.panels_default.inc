<?php

/**
 * Implementation of hook_default_panels_mini().
 */
function template_d6_global_default_panels_mini() {
  $export = array();

  $mini = new stdClass;
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Gibson Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display;
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<?php $email_node = node_get_by_uuid(\'adaa186c-7ee9-11e1-8a43-1d802d5f5899\'); ?>
<span class=\'copyright\'> © 2012 Gibson </span><span class=\'footer-right\'>JOIN US</span>
<br/>
<!-- Begin MailChimp Signup Form -->
<link href="http://cdn-images.mailchimp.com/embedcode/classic-081711.css" rel="stylesheet" type="text/css">
<style type="text/css">
	#mc_embed_signup{background:#fff; clear:left; font:10px Helvetica,Arial,sans-serif; }
	/* Add your own MailChimp form style overrides in your site stylesheet or in this style block.
	   We recommend moving this block and the preceding CSS link to the HEAD of your HTML file. */
</style>
<div id="mc_embed_signup">
<form action="http://gibsonclothing.us5.list-manage.com/subscribe/post?u=a8037fa55315599940ea93bc1&amp;id=5ba82604ef" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank">
	<h2>JOIN US</h2>
<div class="mc-field-group">
	<label for="mce-FNAME">First Name  <span class="asterisk">*</span>
</label>
	<input type="text" value="" name="FNAME" class="required" id="mce-FNAME">
</div>
<div class="mc-field-group">
	<label for="mce-LNAME">Last Name  <span class="asterisk">*</span>
</label>
	<input type="text" value="" name="LNAME" class="required" id="mce-LNAME">
</div>
<div class="mc-field-group">
	<label for="mce-EMAIL">Email Address  <span class="asterisk">*</span>
</label>
	<input type="email" value="" name="EMAIL" class="required email" id="mce-EMAIL">
</div>
<div class="mc-field-group">
	<label for="mce-PROMO">Promo Code  
</label>
	<input type="text" value="" name="MMERGE4" class="promocode" id="mce-PROMO">
</div>
	<div id="mce-responses" class="clear">
		<div class="response" id="mce-error-response" style="display:none"></div>
		<div class="response" id="mce-success-response" style="display:none"></div>
	</div>	<div class="clear"><input type="submit" value="Subscribe" name="subscribe" id="mc-embedded-subscribe" class="button"></div>
</form>
</div>
<script type="text/javascript">
var fnames = new Array();var ftypes = new Array();fnames[1]=\'FNAME\';ftypes[1]=\'text\';fnames[2]=\'LNAME\';ftypes[2]=\'text\';fnames[0]=\'EMAIL\';ftypes[0]=\'email\';fnames[3]=\'MMERGE3\';ftypes[3]=\'phone\';fnames[4]=\'MMERGE4\';ftypes[4]=\'number\';
try {
    var jqueryLoaded=jQuery;
    jqueryLoaded=true;
} catch(err) {
    var jqueryLoaded=false;
}
var head= document.getElementsByTagName(\'head\')[0];
if (!jqueryLoaded) {
    var script = document.createElement(\'script\');
    script.type = \'text/javascript\';
    script.src = \'http://ajax.googleapis.com/ajax/libs/jquery/1.4.4/jquery.min.js\';
    head.appendChild(script);
    if (script.readyState && script.onload!==null){
        script.onreadystatechange= function () {
              if (this.readyState == \'complete\') mce_preload_check();
        }    
    }
}
var script = document.createElement(\'script\');
script.type = \'text/javascript\';
script.src = \'http://downloads.mailchimp.com/js/jquery.form-n-validate.js\';
head.appendChild(script);
var err_style = \'\';
try{
    err_style = mc_custom_error_style;
} catch(e){
    err_style = \'#mc_embed_signup input.mce_inline_error{border-color:#6B0505;} #mc_embed_signup div.mce_inline_error{margin: 0 0 1em 0; padding: 5px 10px; background-color:#6B0505; font-weight: bold; z-index: 1; color:#fff;}\';
}
var head= document.getElementsByTagName(\'head\')[0];
var style= document.createElement(\'style\');
style.type= \'text/css\';
if (style.styleSheet) {
  style.styleSheet.cssText = err_style;
} else {
  style.appendChild(document.createTextNode(err_style));
}
head.appendChild(style);
setTimeout(\'mce_preload_check();\', 250);

var mce_preload_checks = 0;
function mce_preload_check(){
    if (mce_preload_checks>40) return;
    mce_preload_checks++;
    try {
        var jqueryLoaded=jQuery;
    } catch(err) {
        setTimeout(\'mce_preload_check();\', 250);
        return;
    }
    try {
        var validatorLoaded=jQuery("#fake-form").validate({});
    } catch(err) {
        setTimeout(\'mce_preload_check();\', 250);
        return;
    }
    mce_init_form();
}
function mce_init_form(){
    jQuery(document).ready( function($) {
      var options = { errorClass: \'mce_inline_error\', errorElement: \'div\', onkeyup: function(){}, onfocusout:function(){}, onblur:function(){}  };
      var mce_validator = $("#mc-embedded-subscribe-form").validate(options);
      $("#mc-embedded-subscribe-form").unbind(\'submit\');//remove the validator so we can get into beforeSubmit on the ajaxform, which then calls the validator
      options = { url: \'http://gibsonclothing.us5.list-manage.com/subscribe/post-json?u=a8037fa55315599940ea93bc1&id=5ba82604ef&c=?\', type: \'GET\', dataType: \'json\', contentType: "application/json; charset=utf-8",
                    beforeSubmit: function(){
                        $(\'#mce_tmp_error_msg\').remove();
                        $(\'.datefield\',\'#mc_embed_signup\').each(
                            function(){
                                var txt = \'filled\';
                                var fields = new Array();
                                var i = 0;
                                $(\':text\', this).each(
                                    function(){
                                        fields[i] = this;
                                        i++;
                                    });
                                $(\':hidden\', this).each(
                                    function(){
                                        var bday = false;
                                        if (fields.length == 2){
                                            bday = true;
                                            fields[2] = {\'value\':1970};//trick birthdays into having years
                                        }
                                    	if ( fields[0].value==\'MM\' && fields[1].value==\'DD\' && (fields[2].value==\'YYYY\' || (bday && fields[2].value==1970) ) ){
                                    		this.value = \'\';
									    } else if ( fields[0].value==\'\' && fields[1].value==\'\' && (fields[2].value==\'\' || (bday && fields[2].value==1970) ) ){
                                    		this.value = \'\';
									    } else {
									        if (/\\[day\\]/.test(fields[0].name)){
    	                                        this.value = fields[1].value+\'/\'+fields[0].value+\'/\'+fields[2].value;									        
									        } else {
    	                                        this.value = fields[0].value+\'/\'+fields[1].value+\'/\'+fields[2].value;
	                                        }
	                                    }
                                    });
                            });
                        return mce_validator.form();
                    }, 
                    success: mce_success_cb
                };
      $(\'#mc-embedded-subscribe-form\').ajaxForm(options);
      
      
    });
}
function mce_success_cb(resp){
    $(\'#mce-success-response\').hide();
    $(\'#mce-error-response\').hide();
    if (resp.result=="success"){
        $(\'#mce-\'+resp.result+\'-response\').show();
        $(\'#mce-\'+resp.result+\'-response\').html(resp.msg);
        $(\'#mc-embedded-subscribe-form\').each(function(){
            this.reset();
    	});
    } else {
        var index = -1;
        var msg;
        try {
            var parts = resp.msg.split(\' - \',2);
            if (parts[1]==undefined){
                msg = resp.msg;
            } else {
                i = parseInt(parts[0]);
                if (i.toString() == parts[0]){
                    index = parts[0];
                    msg = parts[1];
                } else {
                    index = -1;
                    msg = resp.msg;
                }
            }
        } catch(e){
            index = -1;
            msg = resp.msg;
        }
        try{
            if (index== -1){
                $(\'#mce-\'+resp.result+\'-response\').show();
                $(\'#mce-\'+resp.result+\'-response\').html(msg);            
            } else {
                err_id = \'mce_tmp_error_msg\';
                html = \'<div id="\'+err_id+\'" style="\'+err_style+\'"> \'+msg+\'</div>\';
                
                var input_id = \'#mc_embed_signup\';
                var f = $(input_id);
                if (ftypes[index]==\'address\'){
                    input_id = \'#mce-\'+fnames[index]+\'-addr1\';
                    f = $(input_id).parent().parent().get(0);
                } else if (ftypes[index]==\'date\'){
                    input_id = \'#mce-\'+fnames[index]+\'-month\';
                    f = $(input_id).parent().parent().get(0);
                } else {
                    input_id = \'#mce-\'+fnames[index];
                    f = $().parent(input_id).get(0);
                }
                if (f){
                    $(f).append(html);
                    $(input_id).focus();
                } else {
                    $(\'#mce-\'+resp.result+\'-response\').show();
                    $(\'#mce-\'+resp.result+\'-response\').html(msg);
                }
            }
        } catch(e){
            $(\'#mce-\'+resp.result+\'-response\').show();
            $(\'#mce-\'+resp.result+\'-response\').html(msg);
        }
    }
}

</script>
<!--End mc_embed_signup-->',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['center'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
