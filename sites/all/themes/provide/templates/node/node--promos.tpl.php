<?php if ($teaser): ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	
	<?php
		if($node->field_isotope_grid_size):
			$term = taxonomy_term_load($node->field_isotope_grid_size['und'][0]['tid']);
			$term_class = strtolower(str_replace(' ','-',$term->name));
			unset($term);
		endif;
	?>
	
	<?php if($term_class == 'grid-2x2'): ?>
	
	<a class="link" href="<?php print url($node->field_promos_link['und'][0]['value']); ?>">
		<div class="preview grid-2x2 background-<?php print $node->field_isotope_color['und'][0]['value']; ?> alpha" style="background-image:url('<?php print file_create_url($node->field_overlay_image['und'][0]['uri']); ?>');"><div class="button"></div></div>
		<div class="preview-image"><?php print theme('image', array('path' => $node->field_promos_image['und'][0]['uri'])); ?></div>
	</a>
	
	<?php else: ?>
	
	<a class="link <?php print $node->field_isotope_color['und'][0]['value']; ?>" href="<?php print $node->field_promos_link['und'][0]['value']; ?>">
		<div class="preview background-<?php print $node->field_isotope_color['und'][0]['value']; ?> alpha">
			<div class="button"></div>
			<div class="label"><?php print strip_tags($node->body['und'][0]['value']); ?></div>
		</div>
		<div class="preview-image"><?php print theme('image', array('path' => $node->field_promos_image['und'][0]['uri'])); ?></div>
	</a>
	
	<?php endif; ?>
</div>
<?php endif; ?>
