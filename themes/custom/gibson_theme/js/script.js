/* quarantine the shit out of this namespace and send it the newest version of jQuery available, mapped to $ */
(function($){
	
	/* NOTICE: define functions here */
	
	function emulateBackgroundSizeCoverCSSRuleForIE(){
		var theWindow = $(window),
		    $bg = $("#bg"),
		    aspectRatio = $bg.width() / $bg.height();
			
		function resizeBg() {
			if ( (theWindow.width() / theWindow.height()) < aspectRatio ) {
			    $bg.removeClass().addClass('bgheight');
			} else {
			    $bg.removeClass().addClass('bgwidth');
			}

		}

		theWindow.resize(function() {
			resizeBg();
		}).trigger("resize");  
	}
	
	function collapsibleStockists(){
		
		var stockists = $('.view-gibson-stockists>.view-content>*');
		var stockistWrapper = [];
		var stockistGroup = [];
		
		$.each(stockists, function(i, el) {

			if ($(el).hasClass('views-row-first')) {
				stockistGroup = [];
			}
			
			stockistWrapper.push(el);
			stockistGroup.push(el);
			
			if ($(el).hasClass('views-row-last')) {
				$(stockistWrapper).wrapAll('<div class="group-wrapper" />')
				$(stockistGroup).wrapAll('<div class="rows-wrapper" />')
				stockistWrapper = [];
				stockistGroup = [];
			};	
		});
		
		$('.view-gibson-stockists>.view-content>.group-wrapper>h3').click(function(){
		$(this).siblings().slideToggle('500');
		});
	}
	
	function viewSlider(view, selector, width) {
		$(view + ' ' + selector).carouFredSel(
		
		{
			align: "centre",
			height: "auto",
			width: "100%",
			items: {
				visible: "variable",
				width: "100%",
				height: "variable"
			}, 
			scroll: {
				items: 1,
				event: "click"
			},
			auto: false,
			next: {button: ".controls-next"},
			prev: {button: ".controls-previous"}
		},
		{
			debug:true
		}

		);
	}
	
	function coverBg() {
		
	}
	
	
	$(function(){
		
	  if($.browser.msie) {
	    $('#bg').css('display', 'block');
	    emulateBackgroundSizeCoverCSSRuleForIE();  
	  }
	
		collapsibleStockists();
		viewSlider('.view-gibson-gallery', '.view-content', '2000');
		
		/* NOTICE: document is ready here - call your functions */
		
	});
	
})($jq);