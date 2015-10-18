<?php

function artb_preprocess_views_view(&$variables) {
  $view = $variables['view'];
  $galleries = array(
    'now_exhibition', 'exhibition_gallery', 'arts_galleries',
  );
  if (in_array($view->name, $galleries)) {
    $path = drupal_get_path('theme', 'art');
    drupal_add_js($path . '/js/art_galleries.js');
  }
}

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
