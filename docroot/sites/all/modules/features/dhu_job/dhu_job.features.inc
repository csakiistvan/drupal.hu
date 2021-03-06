<?php
/**
 * @file
 * dhu_job.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dhu_job_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dhu_job_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dhu_job_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Munkaajánlat'),
      'base' => 'node_content',
      'description' => t('Munkaajánlat.'),
      'has_title' => '1',
      'title_label' => t('Ajánlat megnevezése'),
      'help' => t('Munkaajánlatok feladása oldalunkra. Töltsd ki a megfelelő mezőket, minél pontosabban. A munkaajánlatokra a válaszok a megadott e-mail címre fognak megérkezni.
'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
