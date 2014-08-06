<?php if ($teaser): ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<?php if($node->field_quote_image): ?>
		<div class="image background-<?php print $node->field_isotope_color['und'][0]['value']; ?> <?php if($node->field_isotope_image_float): print $node->field_isotope_image_float['und'][0]['value']; endif; ?>"><?php print theme('image', array('path' => $node->field_quote_image['und'][0]['uri'])); ?></div>
	<?php endif; ?>
	<div class="text <?php print $node->field_isotope_color['und'][0]['value']; ?> <?php if($node->field_isotope_image_float): print $node->field_isotope_image_float['und'][0]['value']; endif; ?>">
		<div style="display:block"><span class="quote">&ldquo;</span><?php print strip_tags(trim($node->body['und'][0]['value'])); ?><span class="quote">&rdquo;</span></div>
		<?php if($node->field_quote_attribution): ?><span class="attribution">- <?php print $node->field_quote_attribution['und'][0]['value']; ?></span><?php endif; ?>
	</div>
</div>
<?php endif; ?>
