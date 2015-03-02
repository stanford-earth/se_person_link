<?php
/**
 * @file
 * se_person_link.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function se_person_link_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function se_person_link_node_info() {
  $items = array(
    'person_link' => array(
      'name' => t('Person Link'),
      'base' => 'node_content',
      'description' => t('Link to a person\'s profile on another site.  (I.E.; CAP, LinkedIn, Personal Site...)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
