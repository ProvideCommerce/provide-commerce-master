<?php if ($teaser): ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<?php if($node->field_blurb_image): ?><div class="image dark background-<?php print $node->field_isotope_color['und'][0]['value']; ?> <?php if($node->field_isotope_image_float): print $node->field_isotope_image_float['und'][0]['value']; endif; ?>"><?php print theme('image', array('path' => $node->field_blurb_image['und'][0]['uri'])); ?></div><?php endif; ?>
	<?php $background = ($node->field_is_background_color['und'][0]['value'] == 1) ? 'white background-'.$node->field_isotope_color['und'][0]['value'] : ''; ?>
	<div class="blurb-copy  <?php print $background; ?>" >
		<div class="spacer <?php if($node->field_isotope_color): print $node->field_isotope_color['und'][0]['value']; endif; ?>"></div>
		<div class="text <?php print $node->field_isotope_color['und'][0]['value']; ?> <?php if($node->field_isotope_image_float): print $node->field_isotope_image_float['und'][0]['value']; endif; ?>"><?php print $node->body['und'][0]['value']; ?></div>
	</div>
</div>
<?php endif; ?>
