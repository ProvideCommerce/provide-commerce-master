<?php

/**
* Sets the body tag class and id attributes.
*
* From the Theme Developer's Guide, http://drupal.org/node/32077
*
* @param $is_front
*   boolean Whether or not the current page is the front page.
* @param $layout
*   string Which sidebars are being displayed.
* @return
*   string The rendered id and class attributes.
*/
function phptemplate_page_attributes($is_front = false, $layout = 'none') {
	if ($is_front):
		$body_id = $body_class = 'homepage';
	else:
		// Remove base path and any query string.
		global $base_path;
		list(,$path) = explode($base_path, $_SERVER['REQUEST_URI'], 2);
		list($path,) = explode('?', $path, 2);
		$path = rtrim($path, '/');
		// Construct the id name from the path, replacing slashes with dashes.
		$body_id = str_replace('/', '-', $path);
		// Construct the class name from the first part of the path only.
		list($body_class,) = explode('/', $path, 2);
	endif;
	$body_id = 'page-'. $body_id;
	$body_class = 'section-'. $body_class;
	
	// Use the same sidebar classes as Garland.
	$sidebar_class = ($layout == 'both') ? 'sidebars' : "sidebar-$layout";
	$label = 'labeldiv';
	
	return " class=\"$body_id $body_class $sidebar_class $label\"";
}

function provide_preprocess_page(&$vars, $hook) {
	if (isset($vars['node'])):
		// Templates
		$vars['theme_hook_suggestions'][] = 'page__'. str_replace('_', '--', $vars['node']->type);
		
		// Header Image
		if(!empty($vars['node']->field_headline_image)):
			$vars['headline_image'] = file_create_url($vars['node']->field_headline_image['und'][0]['uri']);
		endif;
		
		if(!empty($vars['node']->field_headline_link)):
			$vars['headline_link'] = url($vars['node']->field_headline_link['und'][0]['value']);
		endif;
		
		// Header WOW Image
		if(!empty($vars['node']->field_headline_wow_image)):
			$vars['headline_wow_image'] = file_create_url($vars['node']->field_headline_wow_image['und'][0]['uri']);
		endif;
		
	endif;
	
	// Page Section for Omniture
	if ($is_front):
		$vars['page_section'] = 'homepage';
	else:
		// Remove base path and any query string.
		global $base_path;
		list(,$path) = explode($base_path, $_SERVER['REQUEST_URI'], 2);
		list($path,) = explode('?', $path, 2);
		$path = rtrim($path, '/');
		// Construct the class name from the first part of the path only.
		list($body_class,) = explode('/', $path, 2);
		
		$vars['page_section'] = $body_class;
	endif;
	
	$status = drupal_get_http_header("status");
	if($status == '404 Not Found'){
		$vars['status'] = '404 Not Found';
  	}


	if (preg_match("/careers/i", current_path()) || preg_match("/apply/i", current_path())):
			$vars['headline_image'] = '/sites/all/themes/provide/includes/images/global/header-apply.png';
			$vars['linkedin'] = '<a class="button" href="http://www.linkedin.com/company/provide-commerce" target="_blank"></a><a href="http://www.linkedin.com/company/provide-commerce" target="_blank">See who you know</a>';
	endif;
	
}