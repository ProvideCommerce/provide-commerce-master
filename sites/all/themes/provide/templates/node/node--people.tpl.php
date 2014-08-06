<?php if ($teaser): ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<div class="person-image"><?php print theme('image_style', array('style_name' => 'thumbnail', 'path' => $node->field_people_image['und'][0]['uri'])); ?></div>

	<div class="expand">
		<div class="preview">
			<div class="button"></div>
			<h3><?php print $node->title; ?></h3>
			<div class="job-title"><?php print $node->field_people_job_title['und']['0']['value']; ?></div>
		</div>
	</div>
	
	<div class="bio">
		<div class="bio-header"><div class="close"></div></div>
		<div class="content">
			<h3><?php print $node->title; ?></h3>
			<?php if(!empty($node->field_people_linkedin)): ?><a href="<?php print $node->field_people_linkedin['und'][0]['value']; ?>" target="_blank" class="linkedin"></a><?php endif; ?>
			<div class="job-title"><?php print $node->field_people_job_title['und']['0']['value']; ?></div>
			<div class="full-bio"><?php print $node->body['und'][0]['value']; ?></div>
		</div>
	</div>
		
</div>
<?php endif; ?>
