(function($) {
	$(document).ready(function() {
	
		/*
		 * Menu Sytesm Modification
		 *
		 * @Main Menu
		 */
		$('#block-menu-block-1 ul.menu li a').each(function(){
			var title = $(this).attr('title').toLowerCase();
			while (title != (title = title.replace(' & ', '-')));
			while (title != (title = title.replace(' ', '-')));
			$(this).parent()
				.addClass('menu-'+title)
				.prepend('<span>/</span>');
		});
		
		/*
		 * Menu Sytesm Modification
		 *
		 * @Footer Menu
		 */
		$('#block-menu-block-2 ul.menu li a').each(function(){
			var title = $(this).attr('title').toLowerCase();
			while (title != (title = title.replace(' & ', '-')));
			while (title != (title = title.replace(' ', '-')));
			$(this).parent()
				.addClass('menu-'+title)
				.prepend('<span>/</span>');
		});
		
		/*
		 * Menu Sytesm Modification
		 *
		 * @Our Brands Menu
		 */
		$('#block-menu-block-5 ul.menu li a').each(function(){
			var href = $(this).text().toLowerCase();
			while (href != (href = href.replace(' ', '-')));
			while (href != (href = href.replace('.', '')));
			$(this).attr('href','#'+href).addClass('anchorLink');
		});
	
	
		/*
		 * Isotope
		 *
		 * @Initiate
		 */
		var mozillaFrontCheck = true; 
		if($('body').hasClass('front') && $.browser.mozilla){
			mozillaFrontCheck = false;
		}
		if($.browser.msie){
			mozillaFrontCheck = false;
		}
		if($('#isotope-container').length){ 
			var $container = $('#isotope-container');
			$container.isotope({
				itemSelector: '.isotope-element',
				masonry: {
					columnWidth: 40,
					cornerStampSelector: '.corner-stamp'
				},
				transformsEnabled: mozillaFrontCheck
			});
			
			
			
			/*
			 * Isotope Modifications
			 *
			 * @Collapse/Expand One at a Time
			 */
			function collapseAllIsotopes(node){
				$('.isotope-element').each(function(){
					if($(this) != $(node)){
						$(this).find('.close').click();
					}
				})
			}
			
	  
			/*
			 * Isotope Modifications
			 *
			 * @Slideshows Expansion
			 */
			$container.delegate('.slide_show .expand', 'click', function(){
				
				// Grab the Isotope Element
				var node = $(this).closest('.isotope-element');
				// Close all others
				collapseAllIsotopes(node);
				
				// Hide the Expand Panel
				$(this).fadeOut('200');
				// Resize the elements for slideshow
				$(node).find('.node').css({height:590, width:630});
				$(node).addClass('grid-8x8').css('z-index','1000');
				// ReLayout Isotope for expanded slideshow
				$container.isotope('reLayout');
				
				// Animate Slideshow
				$(node).find('.slideshow').show().animate({height:590, opacity:1, width:630}, 250, function(){
					// Initiate Slideshow
					var showConstants = {container:'#'+$(node).find('.node').attr('id')+' .slideshow-slides', btnLeft:'#'+$(node).find('.node').attr('id')+' .controls-previous', btnRight:'#'+$(node).find('.node').attr('id')+' .controls-next', itemClass:'.slide', interval:500, slideNumber:1, numberShown:1, speed:1000}
					var showScroll = new dScroll(showConstants);
					
					// Close Slideshow
					$(node).find('.slideshow .close').click(200, function(){
						// Isotope Elements back to normal size
						if($(node).hasClass('grid-6x4')){
							$(node).find('.node').css({height:290, width:470});
							$(node).find('.slideshow').hide().css({height:290, opacity:0, width:470});
						} else if($(node).hasClass('grid-4x4')){
							$(node).find('.node').css({height:290, width:310});
							$(node).find('.slideshow').hide().css({height:290, opacity:0, width:310});
						}
						$(node).removeClass('grid-8x8').css('z-index','2');
						$(node).find('.expand').fadeIn();
						// ReLayout Isotope for collpased slideshow
						$container.isotope('reLayout');
						// Kill existing slideshow
						showScroll.resetSlide();
						delete showConstants;
						delete showScroll;
					});
				});
			});
			
	
			/*
			 * Isotope Modifications
			 *
			 * @Video Expansion
			 */
			$container.delegate('.video_node .expand', 'click', function(){
				
				// Grab the Isotope Element
				var node = $(this).closest('.isotope-element');
				// Close all others
				collapseAllIsotopes(node);
				
				// Hide the Expand Panel
				$(this).fadeOut('200');
				// Resize the elements for slideshow
				$(node).find('.node').css({height:590, width:630});
				$(node).addClass('grid-8x8').css('z-index','1000');
				// ReLayout Isotope for expanded slideshow
				$container.isotope('reLayout');
				
				// Animate Video
				$(node).find('.video').show().animate({height:590, opacity:1, width:630}, 250, function(){
					var $videoSrc = $(node).find('.video-container iframe').attr('src');
						$(node).find('.video-container iframe').attr('src','');
						$(node).find('.video-container iframe').attr('src', $videoSrc + '&autoplay=1');
								
					// Close Video
					$(node).find('.video .close').click(200, function(){
						var $videoSrc = $(node).find('.video-container iframe').attr('src');
						$videoSrc = $videoSrc.replace('&autoplay=1','&autoplay=0');
						$(node).find('.video-container iframe').attr('src','');
						$(node).find('.video-container iframe').attr('src', $videoSrc);
					
						// Isotope Elements back to normal size
						if($(node).hasClass('grid-6x4')){
							$(node).find('.node').css({height:290, width:470});
							$(node).find('.slideshow').hide().css({height:290, opacity:0, width:470});
						} else if($(node).hasClass('grid-4x4')){
							$(node).find('.node').css({height:290, width:310});
							$(node).find('.video').hide().css({height:290, opacity:0, width:310});
						}
						$(node).removeClass('grid-8x8').css('z-index','2');
						$(node).find('.expand').fadeIn();
						// ReLayout Isotope for collpased slideshow
						$container.isotope('reLayout');
					});
				});
			});
			
			
			/*
			 * Isotope Modifications
			 *
			 * @Our People Expansion
			 */
			$container.delegate( '.people .expand', 'click', function(){
				
				// Grab the Isotope Element
				var node = $(this).closest('.isotope-element');
				// Close all others
				collapseAllIsotopes(node);
				
				// Hide the Expand Panel
				$(this).fadeOut('200', function(){
					// Resize the elements for slideshow
					var $infoHeight = 130 + $(node).find('.bio').height();
					if( $infoHeight < 440 ){
						$infoHeight = 400;
					} else if( $infoHeight < 590 ){
						$infoHeight = 590;
					} else if( $infoHeight < 740 ){
						$infoHeight = 740;
					} else if( $infoHeight < 890 ){
						$infoHeight = 890;
					} else if( $infoHeight < 1040 ){
						$infoHeight = 1040;
					} else if( $infoHeight < 1190 ){
						$infoHeight = 1190;
					}
					$(node).css({height:$infoHeight, width:470});
					$container.isotope('reLayout');
					$(node).find('.bio').height($infoHeight - 150).delay(200).slideDown(300, function(){
						$(node).find('.close').click(function(){
							$(node).find('.bio').slideUp(200, function(){
								$(node).css({height:290, width:150});
								$container.isotope('reLayout');
								$(node).find('.expand').fadeIn().delay(150);
							});
						});
					});
				});
			});
			
			/*
			 * Isotope Modifications
			 *
			 * @Departments Expansion
			 */
			$container.delegate( '.department .preview-info', 'click', function(){

				// Grab the Isotope Element
				var node = $(this).closest('.isotope-element');
				// Close all others
				collapseAllIsotopes(node);
				
				$(node).find('.preview-info').addClass('orange');
				var $infoHeight = 125 + $(node).find('.full-info').outerHeight();
				if( $infoHeight < 440 ){
					$infoHeight = 400;
				} else if( $infoHeight < 590 ){
					$infoHeight = 590;
				} else if( $infoHeight < 740 ){
					$infoHeight = 740;
				} else if( $infoHeight < 890 ){
					$infoHeight = 890;
				} else if( $infoHeight < 1040 ){
					$infoHeight = 1040;
				} else if( $infoHeight < 1190 ){
					$infoHeight = 1190;
				}
				$(node).css({height:$infoHeight, width:470});
				$container.isotope('reLayout');
				$(node).find('.full-info').height($infoHeight - 150).delay(200).slideDown(300, function(){
					$(node).find('.close').click(function(){
						$(node).find('.full-info').slideUp(200, function(){
							$(node).css({height:140, width:150});
							$(node).find('.preview-info').removeClass('orange');
							$container.isotope('reLayout');
						});
					});
				});
			});
			
			/*
			 * Isotope Expansions
			 *
			 * @Quotes Color
			 */
		
				
		} // end isotope
		
		/*
		 * Isotope Modification
		 *
		 * @Job Form Styling
		 */ 
		$('.form-item-location select').each(function(){
			var title = $(this).attr('title');
			if( $('option:selected', this).val() != ''  ) title = $('option:selected',this).text();
			$(this)
				.css({'z-index':10000,'opacity':0,'-khtml-appearance':'none'})
				.after('<div class="select"><span>' + title + '</span></div>')
				.change(function(){
					val = $('option:selected',this).text();
					$('.form-item-location div.select span').text(val);
				});
		});
		
		$('.form-item-category select').each(function(){
			var title = $(this).attr('title');
			if( $('option:selected', this).val() != ''  ) title = $('option:selected',this).text();
			$(this)
				.css({'z-index':10,'opacity':0,'-khtml-appearance':'none'})
				.after('<div class="select"><span>' + title + '</span></div>')
				.change(function(){
					val = $('option:selected',this).text();
					$('.form-item-category div.select span').text(val);
				});
		}); 
		
		$('.form-item-department select').each(function(){
			var title = $(this).attr('title');
			if( $('option:selected', this).val() != ''  ) title = $('option:selected',this).text();
			$(this)
				.css({'z-index':10000,'opacity':0,'-khtml-appearance':'none'})
				.after('<div class="select"><span>' + title + '</span></div>')
				.change(function(){
					val = $('option:selected',this).text();
					$('.form-item-department div.select span').text(val);
				});
		});
		
		/*
		 * Our Story Modification
		 *
		 * @Jump Menu
		 */
		 
		$("#block-views-about-us-our-story-jump-menu").jScroll(); 
		$('#block-views-about-us-our-story-jump-menu a').each(function(){
			var year = '#year'+$(this).text();
			$(this).attr('href',year).addClass('anchorLink');
			$(this).click(function(){
				$('#block-views-about-us-our-story-jump-menu a').removeClass('active');
				$(this).addClass('active');
			});
		});
		/*
		$('#block-views-about-us-our-story h3').each(function(){
			$(this).prepend('<a name="year'+$(this).text()+'" id="year'+$(this).text()+'" />');
			if(!$(this).is(':first-child')){
				$(this).css('margin-top','50px');
			}
		})
		*/
		
	    $("#edit-department").change(function() {
		 	if($("#edit-department").val() == 5){
			  window.location.href = '/about-us/giving-back';
		    }else{
			  $(".contact_content").show().load("/contact/"+$("#edit-department").val());
		    }
		});
		
		
		
		/*
		 * Anchor Links
		 *
		 * @Sliding Functionality
		 */
		 
		jQuery.fn.anchorAnimate = function(settings) {
		 	settings = jQuery.extend({
				speed : 1100
			}, settings);	
			return this.each(function(){
				var caller = this
				jQuery(caller).click(function (event) {	
					event.preventDefault()
					var locationHref = window.location.href
					var elementClick = jQuery(caller).attr("href")
					
					var destination = jQuery(elementClick).offset().top;
					jQuery("html:not(:animated),body:not(:animated)").animate({ scrollTop: destination}, settings.speed, function() {
						window.location.hash = elementClick
					});
				  	return false;
				})
			})
		} 
		$("a.anchorLink").anchorAnimate();
		
		/*
		 * Mini Timeline
		 */
				
	$("#block-provide-blocks-timeline-block .imageLg, #block-provide-blocks-timeline-block .imageSm").hover(function(){ 
		$('#block-provide-blocks-timeline-block').closest('.isotope-item').css('z-index','1000');
		$(this).find(".tl_text").fadeIn('200'); },
	function(){
		$('#block-provide-blocks-timeline-block').closest('.isotope-item').css('z-index','2');
		$(this).find(".tl_text").fadeOut('200');
  	}); 

 });
})(jQuery);

