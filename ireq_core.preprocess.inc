<?php

/**
 * @file
 * Preprocess functions for the CRF feature
 */

/**
 * Preprocess "request" content type
 */
function crf_core_preprocess_node_request($node, &$variables) {

  // init request_table
  $headers = array(t('Recipient'), t('Request Type'), t('Status'));
  $rows = array();

  // set row with recipients
  if (empty($node->field_request_recipients)) {
    $rows[] = 'Uh uh, something wrong in the request! No recipients';
  }
  else {
    foreach ($node->field_request_recipients['und'] as $key => $contact) {
      $account = $contact['entity'];
      if ($account) {
        // set recipient cell
        $recipient_title = t('@first_name @last_name', array(
          '@first_name' => $account->field_first_name['und'][0]['value'],
          '@last_name' => $account->field_last_name['und'][0]['value'],
        ));
        // get additional info
        // TODO translation, escape term->name
        $recipient_info = array();
        if (isset($account->field_job_title['und'][0]['tid'])) {
          $job_title_term = taxonomy_term_load($account->field_job_title['und'][0]['tid']);
          $recipient_info[] = $job_title_term->name;
        }
        if (isset($account->field_organization['und'][0]['tid'])) {
          $organization_term = taxonomy_term_load($account->field_organization['und'][0]['tid']);
          $recipient_info[] = $organization_term->name;
        }
        if (isset($account->field_locations['und'][0]['tid'])) {
          $location_term = taxonomy_term_load($account->field_locations['und'][0]['tid']);
          $recipient_info[] = $location_term->name;
        }
        if (isset($account->field_clusters['und'][0]['tid'])) {
          $cluster_term = taxonomy_term_load($account->field_clusters['und'][0]['tid']);
          $recipient_info[] = $cluster_term->name;
        }
        if (count($recipient_info)) {
          $recipient_title .= ' (' . implode(" - ", $recipient_info) . ')';
        }
      }
      else {
        $recipient_title = "NO ACCOUNT ($key)";
      }

      // get report type
      $reporting_type = $node->field_reporting_type['und'][0];
      $reporting_type_term = taxonomy_term_load($reporting_type['target_id']);
      $reporting_type_name = $reporting_type_term->name;

      // get status
      $report_status = 'pending';

      // set row
      $rows[] = array($recipient_title, $reporting_type_name, $report_status);
    }
  }

  $request_table = theme('table', array(
    'header' => $headers,
    'rows' => $rows,
    'attributes' => array('class' => 'crf-request-table'),
    'caption' => '',
    'colgroups' => array(),
    'sticky' => array(),
    'empty' => array(),
  ));

  $icon_vars = array();
  if ($node->field_request_type['und'][0]['value']) {
    $icon_vars = array(
      'path' => path_to_theme() . '/images/crf_request/internal-request.png',
      'alt' => 'Internal Request',
      'title' => 'Internal Request',
      'width' => '128',
      'height' => '41',
      'attributes' => array('class' => 'request-icon'),
    );
  }
  else {
    $icon_vars = array(
      'path' => path_to_theme() . '/images/crf_request/external-request.png',
      'alt' => 'External Request',
      'title' => 'External Request',
      'width' => '128',
      'height' => '41',
      'attributes' => array('class' => 'request-icon'),
    );
  }

  $variables['request_icon'] = theme('image', $icon_vars);
  $variables['request_table'] = theme('ctools_collapsible', array(
    'handle' => 'Expand to view request submissions',
    'content' => $request_table,
    'collapsed' => TRUE,
  ));
}

/**
 * Preprocess assesmant_batch node type
 */
function crf_core_preprocess_node_assessments_batch($node, &$variables) {
  $variables['assessments_batch_table'] = views_embed_view('assessments_batch', 'table', $node->uuid);
}

/**
 * Preprocess contacts_upload node type
 */
function crf_core_preprocess_node_contacts_upload($node, &$variables) {
  $cluster_tid = isset($node->field_cluster['und'][0]['tid']) ? $node->field_cluster['und'][0]['tid'] : NULL;
  if ($cluster_tid) {
    $variables['contacts_table'] = views_embed_view('contacts', 'page_2', $cluster_tid);
  }
}

/**
 * Preprocess fts_message node type
 */
function crf_core_preprocess_node_fts_message($node, &$variables) {
  $crf_request = $node->field_crf_request['und'][0]['entity'];
  $emergencies_term = taxonomy_term_load($crf_request->field_emergencies['und'][0]['tid']);

  $cluster_term = $node->field_cluster['und'][0]['taxonomy_term'];
  if (!empty($cluster_term->field_information_focal_points)) {
    $cluster_focal_point = node_load($cluster_term->field_information_focal_points['und'][0]['target_id']);
    $cluster_contact_first_name = $cluster_focal_point->field_contact_first_name['und'][0]['value'];
    $cluster_contact_last_name = $cluster_focal_point->field_contact_lastname['und'][0]['value'];
  }
  else {
    $cluster_contact_first_name = '[first name]';
    $cluster_contact_last_name = '[last name]';
  }

  $variables['cluster_contact'] = $cluster_contact_first_name . ' ' . $cluster_contact_last_name;
  $variables['date'] = isset($crf_request->field_fts_date['und'][0]['value']) ? $crf_request->field_fts_date['und'][0]['value'] : $crf_request->field_crf_req_date['und'][0]['value'];
  $variables['emergency'] = $emergencies_term->name;
  $variables['url'] = !empty($crf_request->field_fts_url['und']) ? $crf_request->field_fts_url['und'][0]['url'] : '';
}

/**
 * Preprocess indicator_data_batch node type
 */
function crf_core_preprocess_node_indicator_data_batch($node, &$variables) {
  if (isset($node->view)) {
    $variables['indicator_data_batch_table'] = views_embed_view('indicator_data_batch', 'teaser', $node->uuid);
    $variables['indicator_data_batch_graphs'] = views_embed_view('indicator_data_batch', 'teaser_graphs', $node->uuid);
  }
  else {
    $variables['indicator_data_batch_table'] = views_embed_view('indicator_data_batch', 'table', $node->uuid);
  }
}

