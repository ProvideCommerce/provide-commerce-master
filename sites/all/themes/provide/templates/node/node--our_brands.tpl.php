<?php if ($teaser): ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<?php
		$title = str_replace(' ','-',$title);
		$title = str_replace('.','',$title);
		$title = strtolower($title);
	?>
	<a name="<?php print $title ?>" id="<?php print $title; ?>"></a>
	<div class="brand-image four_four"><?php print theme('image', array('path' => $node->field_brands_logo['und'][0]['uri'])); ?></div>
	<div class="brand-info <?php if($node->field_brand_background): print $node->field_brand_background['und'][0]['value']; endif; ?>">
		<div class="copy"><?php print $node->body['und'][0]['value']; ?></div>
		<a class="brand-link" href="<?php print $node->field_brands_link['und'][0]['value']; ?>" target="_blank"><?php print str_replace('http://www.','',$node->field_brands_link['und'][0]['value']); ?><span class="button"></span></a>
	</div>
</div>
<?php endif; ?>