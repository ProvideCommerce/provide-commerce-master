<?php if ($teaser): ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<div class="preview-info">
		<div class="button"></div>
		<h3><?php print $node->title; ?></h3>
	</div>
	<div class="full-info">
		<div class="close"></div>
		<div class="content">
			<h3><?php print $node->title; ?></h3>
			<div class="copy"><?php print $node->body['und'][0]['value']; ?></div>
		</div>
	</div>
</div>
<?php endif; ?>
