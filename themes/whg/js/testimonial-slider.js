//<![CDATA[
TTjquery(document).ready(function() {
	function onAfter(curr, next, opts, fwd) {
var index = opts.currSlide;
TTjquery('#prev,#prev2,#prev3,#prev4,#prev5')[index == 0 ? 'hide' : 'show']();
TTjquery('#next,#next2,#next3,#next4,#next5')[index == opts.slideCount - 1 ? 'hide' : 'show']();
//get the height of the current slide
var $ht = TTjquery(this).height();
//set the container's height to that of the current slide
TTjquery(this).parent().animate({height: $ht});
}
    TTjquery('.testimonials').after('<div class="testimonial-pager">&nbsp;</div>').cycle({
		fx: 'fade',
		timeout: 8000,
		height: 'auto',
		pause: 1,
		pager: '.testimonial-pager',
		before: onAfter,
		cleartypeNoBg: true

	});
});
//]]>
