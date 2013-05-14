<?php
/**
 * @file
 * Contains the CRF report link based on host_entity_path field handler.
 */

/**
 * Field handler to display the Report link
 */
class crf_core_handler_field_crf_add extends views_handler_field {
  function query() {
    // Do nothing, as this handler does not need to do anything to the query itself.
  }

  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  /**
   * Render report link.
   */
  function render($values) {
    // Get Entity (field_collection) Request id
    $request_id =  $values->item_id;
//dpm($values, 'values');
//    $field_collection_item = field_collection_item_load($request_id);
//dpm($field_collection_item, 'field_collection_item');

    // Get recipient uid
    $recipient_uid = $values->field_data_field_request_recipients_field_request_recipients;

    // Get request content type
    $report_term_entity = $values->field_field_reporting_type[0]['raw']['entity'];
    $report_term_wrapper = entity_metadata_wrapper('taxonomy_term', $report_term_entity);
    $content_type = $report_term_wrapper->field_content_type->value() ? $report_term_wrapper->field_content_type->value() : 'report';
//dpm($report_term_entity , '$report_term_entity ');
//dsm($report_term_wrapper->field_content_type->value(), '$report_term_wrapper->field_content_type->value()');
//dsm("Content type: $content_type - Request entity: $request_id - User: $recipient_uid");

    // get request node (if any)
    $request_nid = crf_core_get_request($request_id, $recipient_uid);
//dpm($request_nid);

    if ($request_nid) {
      $report_link_text = t('Edit @rt', array('@rt' => $content_type));
      $report_link = l($report_link_text, 'node/edit/' . $request_nid);
    }
    else {
      $report_link_text = t('Add @rt', array('@rt' => $content_type));
      $report_link = l($report_link_text, 'node/add/' . str_replace('_', '-', $content_type),
        array('html' => TRUE,
          'query' => array(
            array('edit' =>
              array(
                'field_collection_request_ref' => array(LANGUAGE_NONE => $request_id),
                'field_recipient' => array(LANGUAGE_NONE => $recipient_uid),
              ),
            ),
          )
        )
      );
    }
    return $report_link;

  }
}
