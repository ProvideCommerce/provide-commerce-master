<?php
/**
 * @file
 * pc_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function pc_feeds_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'news_feeds';
  $feeds_importer->config = array(
    'name' => 'News Feeds',
    'description' => 'Iimpier news feeds to Provide',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 1,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'news_items',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'url',
            'target' => 'field_news_url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => 0,
          ),
          4 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
      ),
    ),
    'content_type' => 'feeds',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['news_feeds'] = $feeds_importer;

  return $export;
}
