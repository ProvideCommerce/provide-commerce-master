<?php if ($teaser): ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<div class="expand">
		<div class="preview background-<?php print $node->field_isotope_color['und'][0]['value']; ?> alpha">
			<div class="button"></div>
			<div class="label"><?php print $node->title; ?></div>
		</div>
		<div class="preview-image"><?php print theme('image', array('path' => $node->field_slide_show_preview_image['und'][0]['uri'])); ?></div>
	</div>

	<div class="slideshow">
		<div class="slideshow-header"><div class="close"></div></div>
		
		<div class="slideshow-container">
			<a class="controls-previous" title="" href="#"></a>
			<div class="slideshow-window">
				<div class="slideshow-slides">
				<?php
				foreach($node->field_slide_show_image['und'] as $image):
					print '<div class="slide">';
					print theme('image', array('path' => $image['uri']));
					print '</div>';
				endforeach;
				?>
				</div>
			</div>
			<a class="controls-next" title="" href="#"></a>
		</div>
		
		<?php if($node->field_slideshow_link): ?><a class="link background-<?php print $node->field_isotope_color['und'][0]['value']; ?>" href="<?php print $node->field_slideshow_link['und'][0]['value']; ?>"><?php else: ?><div class="link background-<?php print $node->field_isotope_color['und'][0]['value']; ?>"><?php endif; ?>
			<div class="caption background-<?php print $node->field_isotope_color['und'][0]['value']; ?>">
				<div class="button"></div>
				<div class="label"><?php print $node->title; ?></div>
				<div class="copy"><?php print $node->body['und'][0]['value']; ?></div>
			</div>
		<?php if($node->field_slideshow_link): ?></a><?php else: ?></div><?php endif; ?>
	</div>
</div>
<?php endif; ?>