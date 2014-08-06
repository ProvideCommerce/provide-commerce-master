<?php if ($teaser): ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<div class="timeline-image"><?php if($node->field_timeline_image): print theme('image', array('path' => $node->field_timeline_image['und'][0]['uri'])); endif; ?></div>
	<div class="timeline-info">
		<p><?php print $node->body['und'][0]['value']; ?></p>
	</div>
</div>
<?php endif; ?>