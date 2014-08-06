<?php
/**
 * @file
 * pc_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pc_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about-us';
  $context->description = 'About Us';
  $context->tag = 'about us';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us' => 'about-us',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-brands' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-brands',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_blocks-promo-life-at-provide' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-life-at-provide',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-7',
        ),
        'provide_blocks-timeline-block' => array(
          'module' => 'provide_blocks',
          'delta' => 'timeline-block',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('about us');
  $export['about-us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about-us_giving-back';
  $context->description = 'our values';
  $context->tag = 'about us';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us/giving-back' => 'about-us/giving-back',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-life-at-provide' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-life-at-provide',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'views-about_us-giving_back_block' => array(
          'module' => 'views',
          'delta' => 'about_us-giving_back_block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about us');
  t('our values');
  $export['about-us_giving-back'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about-us_giving-back_donation-form';
  $context->description = 'giving back';
  $context->tag = 'about us';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us/giving-back/donation-form' => 'about-us/giving-back/donation-form',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-life-at-provide' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-life-at-provide',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'provide_donations-form-block' => array(
          'module' => 'provide_donations',
          'delta' => 'form-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'provide_blocks-giving-back-form-block' => array(
          'module' => 'provide_blocks',
          'delta' => 'giving-back-form-block',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about us');
  t('giving back');
  $export['about-us_giving-back_donation-form'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about-us_giving-back_form';
  $context->description = 'our values';
  $context->tag = 'about us';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us/giving-back/form' => 'about-us/giving-back/form',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-life-at-provide' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-life-at-provide',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'views-0ea081b169b0cd54b47a606f4249aba3' => array(
          'module' => 'views',
          'delta' => '0ea081b169b0cd54b47a606f4249aba3',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about us');
  t('our values');
  $export['about-us_giving-back_form'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about-us_giving-back_thank-you';
  $context->description = 'giving back';
  $context->tag = 'about us';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us/giving-back/thank-you' => 'about-us/giving-back/thank-you',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-life-at-provide' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-life-at-provide',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'provide_donations-thankyou-block' => array(
          'module' => 'provide_donations',
          'delta' => 'thankyou-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'provide_blocks-giving-back-form-block' => array(
          'module' => 'provide_blocks',
          'delta' => 'giving-back-form-block',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about us');
  t('giving back');
  $export['about-us_giving-back_thank-you'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about-us_in-the-news';
  $context->description = '';
  $context->tag = 'about us';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us/in-the-news' => 'about-us/in-the-news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-brands' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-brands',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_blocks-promo-our-people' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-people',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-7',
        ),
        'views-news-block' => array(
          'module' => 'views',
          'delta' => 'news-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'provide_blocks-media-block' => array(
          'module' => 'provide_blocks',
          'delta' => 'media-block',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about us');
  $export['about-us_in-the-news'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about-us_our-story';
  $context->description = 'our story';
  $context->tag = 'about us';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us/our-story' => 'about-us/our-story',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-brands' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-brands',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'views-about_us-our_story_jump_menu' => array(
          'module' => 'views',
          'delta' => 'about_us-our_story_jump_menu',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-about_us-our_story' => array(
          'module' => 'views',
          'delta' => 'about_us-our_story',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about us');
  t('our story');
  $export['about-us_our-story'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about-us_our-values';
  $context->description = 'our values';
  $context->tag = 'about us';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us/our-values' => 'about-us/our-values',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-people' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-people',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about us');
  t('our values');
  $export['about-us_our-values'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about-us_what-we-stand-for';
  $context->description = 'what we stand for';
  $context->tag = 'about us';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us/what-we-stand-for' => 'about-us/what-we-stand-for',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-people' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-people',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'provide_blocks-what-we-stand-for-block' => array(
          'module' => 'provide_blocks',
          'delta' => 'what-we-stand-for-block',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about us');
  t('what we stand for');
  $export['about-us_what-we-stand-for'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact-us';
  $context->description = '';
  $context->tag = 'contact us';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact-us' => 'contact-us',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'provide_blocks-promo-life-at-provide' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-life-at-provide',
          'region' => 'sidebar_left',
          'weight' => '-32',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-31',
        ),
        'provide_blocks-contact-us-image' => array(
          'module' => 'provide_blocks',
          'delta' => 'contact-us-image',
          'region' => 'content',
          'weight' => '-10',
        ),
        'provide_blocks-contact-block' => array(
          'module' => 'provide_blocks',
          'delta' => 'contact-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'provide_blocks-google-map' => array(
          'module' => 'provide_blocks',
          'delta' => 'google-map',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
        'provide_blocks-address-block' => array(
          'module' => 'provide_blocks',
          'delta' => 'address-block',
          'region' => 'sidebar_right',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('contact us');
  $export['contact-us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'error-404';
  $context->description = '';
  $context->tag = 'global';
  $context->conditions = array(
    'error' => array(
      'values' => array(
        403 => 403,
        404 => 404,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-404-error404_block' => array(
          'module' => 'views',
          'delta' => '404-error404_block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('global');
  $export['error-404'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = '';
  $context->tag = 'global';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'header',
          'weight' => '-10',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'footer',
          'weight' => '-22',
        ),
        'provide_blocks-footer-legal-block' => array(
          'module' => 'provide_blocks',
          'delta' => 'footer-legal-block',
          'region' => 'footer',
          'weight' => '-21',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('global');
  $export['global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global-content';
  $context->description = '';
  $context->tag = 'global';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~about-us/our-story' => '~about-us/our-story',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('global');
  $export['global-content'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'homepage';
  $context->tag = 'home';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-home_page-homepage' => array(
          'module' => 'views',
          'delta' => 'home_page-homepage',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('home');
  t('homepage');
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'join-our-team';
  $context->description = 'join our team';
  $context->tag = 'join our team';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'join-our-team' => 'join-our-team',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-brands' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-brands',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_blocks-promo-our-people' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-people',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'provide_blocks-promo-life-at-provide' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-life-at-provide',
          'region' => 'sidebar_left',
          'weight' => '-7',
        ),
        'provide_jobs-joblinksearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'joblinksearch-block',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('join our team');
  $export['join-our-team'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'join-our-team_apply';
  $context->description = 'join our team';
  $context->tag = 'join our team';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'join-our-team/apply*' => 'join-our-team/apply*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('join our team');
  $export['join-our-team_apply'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'join-our-team_benefits-perks';
  $context->description = 'join our team';
  $context->tag = 'join our team';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'join-our-team/benefits-perks' => 'join-our-team/benefits-perks',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-life-at-provide' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-life-at-provide',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'provide_blocks-benefits-block' => array(
          'module' => 'provide_blocks',
          'delta' => 'benefits-block',
          'region' => 'sidebar_right',
          'weight' => '-35',
        ),
        'provide_blocks-promo-our-story' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-story',
          'region' => 'sidebar_right',
          'weight' => '-34',
        ),
        'provide_blocks-promo-our-values' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-values',
          'region' => 'sidebar_right',
          'weight' => '-33',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('join our team');
  $export['join-our-team_benefits-perks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'join-our-team_careers';
  $context->description = 'join our team';
  $context->tag = 'join our team';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'join-our-team/careers*' => 'join-our-team/careers*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-brands' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-brands',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_blocks-promo-our-people' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-people',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'provide_blocks-promo-life-at-provide' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-life-at-provide',
          'region' => 'sidebar_left',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('join our team');
  $export['join-our-team_careers'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'join-our-team_departments';
  $context->description = 'join our team';
  $context->tag = 'join our team';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'join-our-team/departments' => 'join-our-team/departments',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-people' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-people',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'views-join_our_team-departments' => array(
          'module' => 'views',
          'delta' => 'join_our_team-departments',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('join our team');
  $export['join-our-team_departments'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'our-brands';
  $context->description = '';
  $context->tag = 'our brands';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'our-brands' => 'our-brands',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-5' => array(
          'module' => 'menu_block',
          'delta' => '5',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-story' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-story',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_blocks-promo-our-values' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-values',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-7',
        ),
        'views-our_brands-our_brands' => array(
          'module' => 'views',
          'delta' => 'our_brands-our_brands',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('our brands');
  $export['our-brands'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'our-culture';
  $context->description = '';
  $context->tag = 'our culture';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'our-culture' => 'our-culture',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-4' => array(
          'module' => 'menu_block',
          'delta' => '4',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-values' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-values',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_blocks-promo-our-story' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-story',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-7',
        ),
        'views-our_culture-our_culture' => array(
          'module' => 'views',
          'delta' => 'our_culture-our_culture',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('our culture');
  $export['our-culture'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'our-culture_life-at-provide';
  $context->description = '';
  $context->tag = 'our culture';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'our-culture/life-at-provide' => 'our-culture/life-at-provide',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-4' => array(
          'module' => 'menu_block',
          'delta' => '4',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-values' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-values',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_blocks-promo-our-story' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-story',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-7',
        ),
        'views-1068daf27e729884b388843542fc77ae' => array(
          'module' => 'views',
          'delta' => '1068daf27e729884b388843542fc77ae',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('our culture');
  $export['our-culture_life-at-provide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'our-culture_life-at-provide-commerce';
  $context->description = '';
  $context->tag = 'our culture';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'our-culture/life-at-provide-commerce' => 'our-culture/life-at-provide-commerce',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-4' => array(
          'module' => 'menu_block',
          'delta' => '4',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-values' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-values',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_blocks-promo-our-story' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-story',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-7',
        ),
        'views-1068daf27e729884b388843542fc77ae' => array(
          'module' => 'views',
          'delta' => '1068daf27e729884b388843542fc77ae',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('our culture');
  $export['our-culture_life-at-provide-commerce'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'our-culture_life-in-san-diego';
  $context->description = '';
  $context->tag = 'our culture';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'our-culture/life-in-san-diego' => 'our-culture/life-in-san-diego',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-4' => array(
          'module' => 'menu_block',
          'delta' => '4',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-story' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-story',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'views-our_culture-life_in_san_diego' => array(
          'module' => 'views',
          'delta' => 'our_culture-life_in_san_diego',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('our culture');
  $export['our-culture_life-in-san-diego'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'our-culture_our-people';
  $context->description = '';
  $context->tag = 'our culture';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'our-culture/our-people' => 'our-culture/our-people',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-4' => array(
          'module' => 'menu_block',
          'delta' => '4',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-values' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-values',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'views-our_culture-our_people' => array(
          'module' => 'views',
          'delta' => 'our_culture-our_people',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('our culture');
  $export['our-culture_our-people'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'terms-privacy';
  $context->description = '';
  $context->tag = 'terms';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'terms*' => 'terms*',
        'privacy*' => 'privacy*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'provide_blocks-promo-our-brands' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-brands',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'provide_blocks-promo-our-values' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-values',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
        'provide_jobs-jobsearch-block' => array(
          'module' => 'provide_jobs',
          'delta' => 'jobsearch-block',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
        'provide_blocks-promo-our-story' => array(
          'module' => 'provide_blocks',
          'delta' => 'promo-our-story',
          'region' => 'sidebar_left',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('terms');
  $export['terms-privacy'] = $context;

  return $export;
}
