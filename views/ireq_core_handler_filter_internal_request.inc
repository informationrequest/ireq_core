<?php
/**
 * Custom filter handler for views, that handles IREQ internal requests
 */
class ireq_core_handler_filter_internal_request extends views_handler_filter {

  function admin_summary() { }
  function operator_form() { }
  function query() {

    // Check permission or user role?
    // http://drupal.stackexchange.com/questions/15390/check-if-a-user-has-a-role
    // Use permission event though uid=1 has all privileges
    if (!user_access('access_internal_ocha_requests')) {

      // make sure our base table is included in the query.
      $this->ensure_my_table();

      // @TODO check why the hell we need to add '_value' to the end of the field name
      $field_condition = $this->table_alias . '.' . $this->real_field . '_value';

      $this->query->add_where($this->options['group'], $field_condition, 0, '=');

    }
  }

}
