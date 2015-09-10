<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function art_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  art_preprocess_html($variables, $hook);
  art_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function art_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function art_preprocess_page(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function art_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // art_preprocess_node_page() or art_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function art_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function art_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function art_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */
$overlay = false;
function _print_one_overlay(){
	global $overlay;
	
	if(!$overlay){
		$overlay = true;
		return "<div id='art_overlay' class='overlay'> 
          <div class='close-button'>✖</div>
				  <div class='ovr_inner'>   
					<img />
					<span class='next_i'></span>
					<span class='prev_i'></span>
				  </div>
				</div>";		
	}
	return "";
}
/*
function _print_view_gal_js($view , $numberOfItems = 1 ){
	$view_name = str_replace("_","-",$view->name);
	$dispaly_name = $view->current_display;
	$dispaly_name2 = str_replace("_","-",$dispaly_name);
	return "<script>
 var ovrLay = new OverLayHandler('block-views-".$view_name."-".$dispaly_name2."');
 var owlBlock = jQuery('.i18n-he .view-display-id-".$dispaly_name." .owl-carousel ,'+
            '.i18n-en .view-display-id-".$dispaly_name." .owl-carousel');
        
  jQuery(function(){   
    owlBlock.each(function(i,n){
      var isRtl = jQuery(n).parents('body').hasClass('i18n-he');
      jQuery(n).owlCarousel({
        rtl:isRtl,
        loop:false,
        margin:10,
        nav:true,
        dots: true,
        responsive:{
        0:{
          items:".$numberOfItems."
        }
        }
      }); 
      jQuery('.view-display-id-".$dispaly_name." .owl-controls .owl-nav').addClass('first');
    });  
  });  
  owlBlock.on('changed.owl.carousel', owlClick);
  </script>
  ";
}
*/
function art_form_alter(&$form, $form_state, $form_id) {
  if($form['#id'] == 'views-exposed-form-arts-block'){
    foreach ($form['field_campus_tid']['#options'] as $key => &$option) {
      if ($key == 'All') {
        $option = t('Campus Name');
      } 
    }
    foreach ($form['field_art_type_tid']['#options'] as $key => &$option) {
      if ($key == 'All') {
        $option = t('Art Type');
      } 
    }

  }

}
