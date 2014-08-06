<?php
/**
 * @file
 * pc_nodequeue.features.inc
 */

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function pc_nodequeue_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: about_us
  $nodequeues['about_us'] = array(
    'qid' => '2',
    'name' => 'about_us',
    'title' => 'About Us',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'article',
      1 => 'blank',
      2 => 'node_blocks',
      3 => 'promos',
      4 => 'quotes_text',
      5 => 'wow_image',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: departments
  $nodequeues['departments'] = array(
    'qid' => '8',
    'name' => 'departments',
    'title' => 'departments',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'blank',
      1 => 'departments',
      2 => 'promos',
      3 => 'quotes_text',
      4 => 'wow_image',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: error_404
  $nodequeues['error_404'] = array(
    'qid' => '12',
    'name' => 'error_404',
    'title' => 'Error 404',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'blank',
      1 => 'blurb',
      2 => 'promos',
      3 => 'wow_image',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: giving_back
  $nodequeues['giving_back'] = array(
    'qid' => '11',
    'name' => 'giving_back',
    'title' => 'Giving Back',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'article',
      1 => 'blank',
      2 => 'blurb',
      3 => 'people',
      4 => 'promos',
      5 => 'quotes_text',
      6 => 'slide_show',
      7 => 'video',
      8 => 'wow_image',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: homepage
  $nodequeues['homepage'] = array(
    'qid' => '1',
    'name' => 'homepage',
    'title' => 'homepage',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'article',
      1 => 'blank',
      2 => 'node_blocks',
      3 => 'people',
      4 => 'promos',
      5 => 'quotes_text',
      6 => 'slide_show',
      7 => 'video',
      8 => 'wow_image',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: life_at_provide_commerce
  $nodequeues['life_at_provide_commerce'] = array(
    'qid' => '6',
    'name' => 'life_at_provide_commerce',
    'title' => 'Life at Provide Commerce',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'article',
      1 => 'blank',
      2 => 'people',
      3 => 'promos',
      4 => 'quotes_text',
      5 => 'slide_show',
      6 => 'wow_image',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: life_in_san_diego
  $nodequeues['life_in_san_diego'] = array(
    'qid' => '5',
    'name' => 'life_in_san_diego',
    'title' => 'Life in San Diego',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'article',
      1 => 'blank',
      2 => 'node_blocks',
      3 => 'promos',
      4 => 'quotes_text',
      5 => 'slide_show',
      6 => 'wow_image',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: our_brands
  $nodequeues['our_brands'] = array(
    'qid' => '7',
    'name' => 'our_brands',
    'title' => 'Our Brands',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'our_brands',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: our_culture
  $nodequeues['our_culture'] = array(
    'qid' => '3',
    'name' => 'our_culture',
    'title' => 'Our Culture',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'article',
      1 => 'blank',
      2 => 'blurb',
      3 => 'node_blocks',
      4 => 'people',
      5 => 'promos',
      6 => 'quotes_text',
      7 => 'slide_show',
      8 => 'video',
      9 => 'wow_image',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: our_people
  $nodequeues['our_people'] = array(
    'qid' => '4',
    'name' => 'our_people',
    'title' => 'Our People',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'blank',
      1 => 'people',
      2 => 'quotes_text',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: our_values
  $nodequeues['our_values'] = array(
    'qid' => '10',
    'name' => 'our_values',
    'title' => 'Our Values',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'article',
      1 => 'blank',
      2 => 'our_values',
      3 => 'promos',
      4 => 'quotes_text',
      5 => 'slide_show',
      6 => 'wow_image',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: sidebar
  $nodequeues['sidebar'] = array(
    'qid' => '9',
    'name' => 'sidebar',
    'title' => 'Sidebar',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'node_blocks',
      1 => 'promos',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
