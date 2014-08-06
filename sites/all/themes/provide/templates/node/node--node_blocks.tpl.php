<?php
if ($teaser){
?>


<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>



  <div class="content clearfix"<?php print $content_attributes; ?>>
    <?php
		switch($node->field_block_type['und'][0]['value']):
			case 'weather_single':
	      		$block = block_load('provide_blocks', 'weather-single');
	      		break;
	      	case 'weather_forecast':
	      		$block = block_load('provide_blocks', 'weather-forecast');
	      		break;
	      	case 'jobs':
				$block = block_load('provide_jobs', 'jobsearch-block');
				break;
			case 'timeline':
				$block = block_load('provide_blocks', 'timeline-block');
				break;
			default:
       endswitch;
       
       $block_content = _block_render_blocks(array($block));
	   $build = _block_get_renderable_array($block_content);
	   $block_rendered = drupal_render($build);
	   print $block_rendered;
    ?>
  </div>

  


</div>



<?php }else{

       if($node->field_block_type['und'][0]['value'] == 'weather'){
	      $block = block_load('provide_blocks', 'weather-block');
       }else{
	      $block = block_load('provide_jobs', 'jobsearch-block');
       }
       $block_content = _block_render_blocks(array($block));
	   $build = _block_get_renderable_array($block_content);
	   $block_rendered = drupal_render($build);
	   print $block_rendered;
       
    
}?>
