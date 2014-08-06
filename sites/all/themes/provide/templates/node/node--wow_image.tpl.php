<?php if ($teaser): ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<?php if($node->field_wow_link): print '<a href="'.url($node->field_wow_link['und'][0]['value']).'" target="'.$node->field_wow_link_target['und'][0]['value'].'" style="border:none;">'; endif; ?>
	<?php print theme('image', array('path' => $node->field_wow_image['und'][0]['uri'])); ?>
	<?php if($node->field_wow_link): print '</a>'; endif; ?>
</div>
<?php endif; ?>
