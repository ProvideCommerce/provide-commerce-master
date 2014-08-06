<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 */
?>




<div id="site-wrap" <?php print phptemplate_page_attributes($is_front); ?>>

	<div id="header-wrap">
		
		<?php if ($page['header']): ?>
		<div id="header" class="container_12">
			<?php if ($logo): ?><a id="logo" href="/"><img src="<?php print $logo; ?>" alt="<?php print t('Provide Commerce'); ?>" /></a><?php endif; ?>
			<?php print render($page['header']); ?>
		</div><!-- end #header -->
		<?php endif; ?>
		<div class="clearfix"></div>
	</div><!-- end #header-wrap -->
	
	<div id="page-wrap">
	
		
		
		<div id="content-wrap" class="container_12">
			
			<?php if($page['content_top'] || !empty($headline_image)): ?>
			<div id="content-top">
				<?php if(!empty($headline_wow_image)): ?>
					<div class="header-wow-image"><?php print theme('image', array( 'path' =>  $headline_wow_image)); ?></div>
				<?php endif; ?>
				
				<?php if(!empty($linkedin)): ?>
					<div class="linkedin-callout"><?php print $linkedin; ?></div>
				<?php endif; ?>
				
				<?php if(!empty($headline_image)): ?>
					<?php if(!empty($headline_link)): ?>
					<a class="header-image" href="<?php print $headline_link; ?>"><?php print theme('image', array( 'path' =>  $headline_image)); ?></a>
					<?php else: ?>
					<div class="header-image"><?php print theme('image', array( 'path' =>  $headline_image)); ?></div>
					<?php endif; ?>
				<?php endif; ?>
				<?php print render($page['content_top']); ?>
			</div><!-- end #content-top -->
			<?php endif; ?>
			
			<div id="help" class="grid_12">
				<?php print $messages; ?>
        		<?php if($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
        		<?php print render($page['help']); ?>
        		<div class="clear"></div>
			</div>
			
			<?php if ($page['sidebar_left']): ?>
			<div id="sidebar-left" class="grid_2">
				<?php print render($page['sidebar_left']); ?>
			</div><!-- end #sidebar-left -->
			<?php endif; ?>
			
			<?php if ($page['content']): ?>
			<div id="content" class="<?php if ($is_front || (!empty($status) && $status == '404 Not Found')){
				print "grid_12";
			}elseif($page['sidebar_right']){
				print "grid_6";
			}else{
				print "grid_10";
			} ?>">
				<?php print render($page['content']); ?>
			</div><!-- end #content -->
			<?php endif; ?>
			
			<?php if ($page['sidebar_right']): ?>
			<div id="sidebar-right" class="grid_4">
				<?php print render($page['sidebar_right']); ?>
			</div><!-- end #sidebar-right -->
			<?php endif; ?>
			
			<?php if ($page['content_bottom']): ?>
			<div id="content-bottom">
				<?php print render($page['content_bottom']); ?>
			</div><!-- end #content-bottom -->
			<?php endif; ?>
			<div class="clearfix"></div>
		</div><!-- end #content-wrap -->
		
	</div><!-- end #page-wrap -->
	
	<div id="footer-wrap" class="container_12">
	
		<?php if ($page['footer']): ?>
		<div id="footer" class="container_12">
			<?php print render($page['footer']); ?>
		</div><!-- end #footer -->
		<?php endif; ?>
		<div class="clearfix"></div>
	</div><!-- end #footer-wrap -->

</div><!-- end #site-wrap -->

<!-- SiteCatalyst code version: H.25.1.
Copyright 1996-2012 Adobe, Inc. All Rights Reserved
More info available at http://www.omniture.com -->
<script language="JavaScript" type="text/javascript" src="/sites/all/themes/provide/includes/js/s_code.js"></script>
<script language="JavaScript" type="text/javascript">
<!-- /* You may give each page an identifying name, server, and channel on the next lines. */
var pageid=window.location.pathname.toLowerCase();
s.pageName=pageid.substring(1,pageid.length);
s.server=window.location.host;
s.channel="<?php print $page_section; ?>" 
s.pageType="Content"
s.prop1=document.title
/* Conversion Variables */
s.eVar1="D=p0"
s.eVar2="D=s.channel"
s.eVar3="D=p1"
/************* DO NOT ALTER ANYTHING BELOW THIS LINE ! **************/
var s_code=s.t();if(s_code)document.write(s_code)//--></script>
<script language="JavaScript" type="text/javascript"><!--
if(navigator.appVersion.indexOf('MSIE')>=0)document.write(unescape('%3C')+'\!-'+'-')
//--></script><noscript><img src="http://proflowers1.112.2o7.net/b/ss/proflodevelopment/1/H.25.1--NS/0"
height="1" width="1" border="0" alt="" /></noscript><!--/DO NOT REMOVE/-->
<!-- End SiteCatalyst code version: H.25.1. -->