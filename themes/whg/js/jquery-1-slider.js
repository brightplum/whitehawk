//<![CDATA[
TTjquery(window).load(function() {
  TTjquery('.home-bnr-jquery ul').css("background-image", "none");
  TTjquery('.jqslider').css("display", "block");
  TTjquery('.home-bnr-jquery ul').after('<div class="jquery-pager">&nbsp;</div>').cycle({
	  fx: 'fade',
	  timeout: 8000,
	  height: 'auto',
	  pause: 0,
	  pager: '.jquery-pager',
	  cleartypeNoBg: true

  });
  TTjquery('.testimonials').flexslider({
        slideshowSpeed: 80000000,
        pauseOnHover:   true,
        randomize:      false,
        directionNav:   true,
        animation:      'fade',
        animationSpeed: 600,
        controlsContainer: ".testimonials",
        smoothHeight: true
});
});
//]]>
