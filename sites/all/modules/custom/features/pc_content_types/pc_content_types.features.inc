<?php
/**
 * @file
 * pc_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function pc_content_types_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'blank' => array(
      'name' => t('Blank'),
      'base' => 'node_content',
      'description' => t('For spacing Isotope'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'blurb' => array(
      'name' => t('Blurb'),
      'base' => 'node_content',
      'description' => t('<em>Blurbs are blurbs. Cool, huh?</em>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'departments' => array(
      'name' => t('departments'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'feeds' => array(
      'name' => t('feeds'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news_items' => array(
      'name' => t('news items'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'node_blocks' => array(
      'name' => t('node_blocks'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'organization' => array(
      'name' => t('Organization'),
      'base' => 'node_content',
      'description' => t('<em>Organizations Creation.</em>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'our_brands' => array(
      'name' => t('Our Brands'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'our_values' => array(
      'name' => t('Our Values'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'people' => array(
      'name' => t('People'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'promos' => array(
      'name' => t('Promos'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'quotes_text' => array(
      'name' => t('Quotes-Text'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slide_show' => array(
      'name' => t('Slide Show'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'timeline' => array(
      'name' => t('Timeline'),
      'base' => 'node_content',
      'description' => t('time line items'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wow_image' => array(
      'name' => t('Wow Image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
