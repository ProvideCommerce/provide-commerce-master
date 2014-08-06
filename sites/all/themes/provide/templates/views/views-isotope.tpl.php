<?php
/**
 * @file views-isotope.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

?>
<div id="isotope-container">
	<?php $count = 0; ?>
	<?php foreach ( $rows as $id => $row ): ?>
	<?php
		$classlist = '';
		$bgstyle = '';      
		$iso_class = '';
		$field_isotope_grid_size = '';
        $term_class = '';

		$nid = $view->result[$id]->nid;
		$node = node_load($nid);
		
		if($node->field_isotope_grid_size):
			$term = taxonomy_term_load($node->field_isotope_grid_size['und'][0]['tid']);
			$term_class = strtolower(str_replace(' ','-',$term->name));
			unset($term);
		endif;

		switch ($node->type):
			case 'slide_show':
				$iso_class = 'slide_show '.$term_class;
				break;
			case 'video':	
				$iso_class = 'video_node '.$term_class;
				break;
			case 'quotes_text':
				$iso_class = 'quote '.$term_class;
				break;
			case 'blurb':
				$iso_class = 'blurb '.$term_class;
				break;
			case 'promos':
				$iso_class = 'promo '.$term_class;
				break;
			case 'article':
				$iso_class = 'article '.$term_class;
				break;
			case 'people':
				$iso_class = 'people grid-2x4';
				break;
			case 'node_blocks':
				$iso_class = 'node_blocks '.strtolower(str_replace(' ','-',$node->title));
				break;
			case 'blank':
				$iso_class = 'blank '.$term_class;
				break;
			case 'wow_image':
				$iso_class = 'wow '.$term_class;
				break;
			case 'departments':
				$iso_class = 'department grid-2x2';
				break;
			case 'our_values':
				$iso_class = 'our-values';
				break;
		endswitch;


		// added for easy multi-color display 
		if ($count == 5): $count = 0; endif;
      
		$classlist .= $iso_class;
      
		?>
		<div class="isotope-element isotope-element-<?php print $count; ?> <?php print $classlist; ?>" data-category="<?php print $classlist; ?>" <?php print $bgstyle ?>>
		<?php print $row; ?>
		</div>
		<?php 
		// reset
		$rowparts = NULL;
		$filterclass = NULL;
		$count++;
		
		unset($node);
		
		?>
	<?php endforeach; ?>
</div>


