<?php
/**
 * Custom filter handler for views, that handles CRF internal requests
 */
class crf_core_handler_filter_internal_request extends views_handler_filter {

  function admin_summary() { }
  function operator_form() { }
  function query() {

    global $user;

    // Check permission or user role?
    // http://drupal.stackexchange.com/questions/15390/check-if-a-user-has-a-role
//    if (!(in_array('administrator', $user->roles) || in_array('CRF_manager', $user->roles))) {
    if (!in_array('CRF_manager', $user->roles)) {

      // make sure our base table is included in the query.
      $this->ensure_my_table();

      // @TODO check why the hell we need to add '_value' to the end of the field name
      $field_condition = $this->table_alias . '.' . $this->real_field . '_value';

      $this->query->add_where($this->options['group'], $field_condition, 0, '=');

    }
/*
    dpm($user, 'crf_core_handler_filter_internal_request > user');
    dpm($this, 'crf_core_handler_filter_internal_request > this');
    dpm($this->query, 'crf_core_handler_filter_internal_request > query');
    dpm($this->view, 'crf_core_handler_filter_internal_request > view');
*/
  }

}
