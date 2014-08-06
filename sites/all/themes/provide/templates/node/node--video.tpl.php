<?php if ($teaser): ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<div class="expand">
		<div class="preview background-<?php print $node->field_isotope_color['und'][0]['value']; ?> alpha">
			<div class="button"></div>
			<div class="label"><?php print $node->title; ?></div>
		</div>
		<div class="preview-image"><?php print theme('image', array('path' => $node->field_video_preview_image['und'][0]['uri'])); ?></div>
	</div>
	
	<div class="video">
		<div class="video-header">
			<div class="close"></div>
		</div>
		<div class="video-container">
			<iframe src="http://player.vimeo.com/video/<?php print $node->field_vimeo_video_id['und'][0]['value']; ?>?title=0&amp;byline=0&amp;portrait=0&amp;color=717171" width="630" height="440" frameborder="0" webkitAllowFullScreen mozallowfullscreen allowFullScreen></iframe>
		</div>
		<div class="link">
			<div class="caption background-<?php print $node->field_isotope_color['und'][0]['value']; ?>">
				<div class="button"></div>
				<div class="label"><?php print $node->title; ?></div>
				<div class="copy"><?php print $node->body['und'][0]['value']; ?></div>
			</div>
		</div>
	</div>
</div>
<?php endif; ?>