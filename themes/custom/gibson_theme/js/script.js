/* quarantine the shit out of this namespace and send it the newest version of jQuery available, mapped to $ */
(function($){
	
	/* NOTICE: define functions here */
	
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
			width: width,
			align: "centre",
			height: "auto",
			items: {
				visible: 8,
				width: "auto",
				height: "variable"
			}, 
			scroll: {
				items: 1,
				event: "click"
			},
			auto: true,
			next: {button: ".controls-next"},
			prev: {button: ".controls-previous"}
		},
		{
			debug:true
		}

		);
	}
	
	
	$(function(){
		
		collapsibleStockists();
		viewSlider('.view-gibson-gallery', '.view-content', '2000');
		
		/* NOTICE: document is ready here - call your functions */
		
	});
	
})($jq);