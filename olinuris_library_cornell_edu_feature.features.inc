<?php
/**
 * @file
 * olinuris_library_cornell_edu_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function olinuris_library_cornell_edu_feature_node_info() {
  $items = array(
    'banner_image' => array(
      'name' => t('Banner Image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('banner image for front page. 890x370 (on D6 version)'),
    ),
    'blog_entry' => array(
      'name' => t('Blog Entry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course_guide_link' => array(
      'name' => t('Course Guide Link'),
      'base' => 'node_content',
      'description' => t('Link to a Course Guide'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'digital_sign' => array(
      'name' => t('Digital Sign'),
      'base' => 'node_content',
      'description' => t('Olin Library LCD Sign images.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'equipment' => array(
      'name' => t('Equipment'),
      'base' => 'node_content',
      'description' => t('Borrowable equipment from web service http://mannservices.mannlib.cornell.edu/LibServices/showEquipmentInfo.do?locationId=18&output=xml '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'imported_page' => array(
      'name' => t('Imported Page'),
      'base' => 'node_content',
      'description' => t('Page imported from the old, old site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'laptop_count' => array(
      'name' => t('Laptop Count'),
      'base' => 'node_content',
      'description' => t('Current Laptops Available'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}