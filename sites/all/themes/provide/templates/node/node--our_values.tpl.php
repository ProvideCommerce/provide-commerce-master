<?php if ($teaser): ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<div class="spacer"></div>
	<div class="body"><?php print $node->body['und'][0]['value']; ?></div>
</div>
<?php endif; ?>