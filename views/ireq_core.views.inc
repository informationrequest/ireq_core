<?php

/**
 * @file
 * Provide extras views data for field_collection.module.
 */


function ireq_core_views_data_alter(&$data) {

  $data['field_data_field_request_audience']['ireq_internal'] = array(
    'group' => t('IREQ'),
    'title' => t('IREQ internal request'),
    'help' => t('Filter for IREQ internal request'),
    'real field' => 'field_request_audience',
    'filter' => array(
      'handler' => 'ireq_core_handler_filter_internal_request',
    ),
  );
}

/**
 * Implements hook_views_data()
 */
function ireq_core_views_data() {

  // hostEntityId
  $data['field_collection_item']['ireq_link'] = array(
    'title' => t('IREQ link'),
    'help' => t('The IREQ link from the ID of the Host Entity. Zonkers says 2'),
    'field' => array(
      'handler' => 'ireq_core_handler_field_ireq_link',
    ),
  );
/*
  $data['field_collection_item']['host_entity_path'] = array(
    'title' => t('Host Entity Path'),
    'help' => t('The Path of the Host Entity.'),
    'field' => array(
      'handler' => 'field_collection_views_handler_field_host_entity_path',
    ),
  );
  $data['field_collection_item']['host_entity_type'] = array(
    'title' => t('Host Entity Type'),
    'help' => t('The Type of the Host Entity.'),
    'field' => array(
      'handler' => 'field_collection_views_handler_field_host_entity_type',
    ),
  );
  $data['field_collection_item']['field_path'] = array(
    'title' => t('Field path'),
    'help' => t('The base path of the field-collection field.'),
    'field' => array(
      'handler' => 'field_collection_views_handler_field_field_path',
    ),
  );
*/
  return $data;
}


