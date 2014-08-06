<?php if ($teaser): ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<div class="spacer <?php if($node->field_isotope_color): print $node->field_isotope_color['und'][0]['value']; endif; ?>"></div>
	<?php if($node->field_image): ?><div class="article-image"><?php print theme('image', array('path' => $node->field_image['und'][0]['uri'])); ?></div><?php endif; ?>
	<div class="article-info <?php if($node->field_isotope_color): print $node->field_isotope_color['und'][0]['value']; endif; ?>">
		<div class="copy"><?php print $node->body['und'][0]['value']; ?></div>
	</div>
</div>
<?php endif; ?>