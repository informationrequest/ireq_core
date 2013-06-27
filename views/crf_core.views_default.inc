<?php
/**
 * @file
 * crf_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crf_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'field_collection_requests_view';
  $view->description = 'Render field_collection request with reports from entity uid';
  $view->tag = 'CRF';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Field collection Requests view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    139443077 => '139443077',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'host_entity_id' => 'host_entity_id',
    'item_id' => 'item_id',
    'nid' => 'nid',
    'title' => 'title',
    'edit_node' => 'title',
    'field_recipient' => 'field_recipient',
    'field_request_requested_by' => 'field_request_requested_by',
    'crf_link' => 'crf_link',
    'uid' => 'uid',
    'state' => 'state',
    'stamp' => 'stamp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'host_entity_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_recipient' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_request_requested_by' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'crf_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_collection_request_ref_node']['id'] = 'reverse_field_collection_request_ref_node';
  $handler->display->display_options['relationships']['reverse_field_collection_request_ref_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_collection_request_ref_node']['field'] = 'reverse_field_collection_request_ref_node';
  /* Relationship: Workbench Moderation: Node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['relationship'] = 'reverse_field_collection_request_ref_node';
  $handler->display->display_options['relationships']['nid']['label'] = 'Workbench Node';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'nid';
  /* Relationship: Content revision: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'reverse_field_collection_request_ref_node';
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'Report';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['alter']['text'] = '[field_reporting_type] [item_id]-[uid]';
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_collection_request_ref_node';
  $handler->display->display_options['fields']['nid']['label'] = 'Report';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[title] ([edit_node])';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_collection_request_ref_node';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'reverse_field_collection_request_ref_node';
  $handler->display->display_options['fields']['edit_node']['text'] = '(add/edit)';
  /* Field: Field collection item: CRF link */
  $handler->display->display_options['fields']['crf_link']['id'] = 'crf_link';
  $handler->display->display_options['fields']['crf_link']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['crf_link']['field'] = 'crf_link';
  $handler->display->display_options['fields']['crf_link']['label'] = 'Status';
  $handler->display->display_options['fields']['crf_link']['exclude'] = TRUE;
  /* Field: Workbench Moderation: State */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['relationship'] = 'reverse_field_collection_request_ref_node';
  /* Field: Field collection item: Requested by */
  $handler->display->display_options['fields']['field_request_requested_by']['id'] = 'field_request_requested_by';
  $handler->display->display_options['fields']['field_request_requested_by']['table'] = 'field_data_field_request_requested_by';
  $handler->display->display_options['fields']['field_request_requested_by']['field'] = 'field_request_requested_by';
  $handler->display->display_options['fields']['field_request_requested_by']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_request_requested_by']['delta_offset'] = '0';
  /* Field: Content: Requested to */
  $handler->display->display_options['fields']['field_recipient']['id'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['fields']['field_recipient']['field'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['relationship'] = 'reverse_field_collection_request_ref_node';
  $handler->display->display_options['fields']['field_recipient']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name']['label'] = 'Provided by';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Workbench Moderation: Timestamp */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['relationship'] = 'nid';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'long';
  /* Sort criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['sorts']['item_id']['id'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['sorts']['item_id']['field'] = 'item_id';
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = TRUE;
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['relationship'] = 'reverse_field_collection_request_ref_node';
  $handler->display->display_options['filters']['current']['value'] = '1';
  $translatables['field_collection_requests_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content referencing Field collection item from field_collection_request_ref'),
    t('Workbench Node'),
    t('author'),
    t('revision user'),
    t('Host Entity ID'),
    t('Report'),
    t('[field_reporting_type] [item_id]-[uid]'),
    t('.'),
    t('[title] ([edit_node])'),
    t('Title'),
    t('Edit link'),
    t('(add/edit)'),
    t('Status'),
    t('State'),
    t('Requested by'),
    t('Requested to'),
    t('Provided by'),
    t('Timestamp'),
    t('All'),
  );
  $export['field_collection_requests_view'] = $view;

  $view = new view();
  $view->name = 'requests';
  $view->description = 'List of reports grouped by request';
  $view->tag = 'CRF';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Request List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Requests';
  $handler->display->display_options['css_class'] = 'view-requests';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    139443077 => '139443077',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_emergencies_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_reporting_type_target_id' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'state' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
        'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_request_audience_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'field_emergencies' => 'field_emergencies',
    'field_request_audience' => 'field_request_audience',
    'field_request_deadline' => 'field_request_deadline',
    'item_id' => 'item_id',
    'title' => 'title',
    'edit_node' => 'title',
    'timestamp' => 'timestamp',
    'state' => 'state',
    'field_request_requested_by' => 'field_request_requested_by',
    'field_recipient' => 'field_recipient',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_emergencies' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_request_audience' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_request_deadline' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_request_requested_by' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_recipient' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No requests have been recorded yet';
  $handler->display->display_options['empty']['area']['format'] = 'simple';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_collection_request_ref_node']['id'] = 'reverse_field_collection_request_ref_node';
  $handler->display->display_options['relationships']['reverse_field_collection_request_ref_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_collection_request_ref_node']['field'] = 'reverse_field_collection_request_ref_node';
  $handler->display->display_options['relationships']['reverse_field_collection_request_ref_node']['label'] = 'node_report';
  /* Relationship: Field collection item: Entity with the Request (field_collection_request) */
  $handler->display->display_options['relationships']['field_collection_request_node']['id'] = 'field_collection_request_node';
  $handler->display->display_options['relationships']['field_collection_request_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_collection_request_node']['field'] = 'field_collection_request_node';
  $handler->display->display_options['relationships']['field_collection_request_node']['label'] = 'node_request';
  /* Relationship: Workbench Moderation: Node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['relationship'] = 'reverse_field_collection_request_ref_node';
  $handler->display->display_options['relationships']['nid']['label'] = 'Workbench Node';
  /* Relationship: Content revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'reverse_field_collection_request_ref_node';
  /* Field: Content revision: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_collection_request_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = TRUE;
  /* Field: Field: Emergencies */
  $handler->display->display_options['fields']['field_emergencies']['id'] = 'field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['table'] = 'field_data_field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['field'] = 'field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['relationship'] = 'field_collection_request_node';
  $handler->display->display_options['fields']['field_emergencies']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_emergencies']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_emergencies']['element_class'] = 'field-item';
  $handler->display->display_options['fields']['field_emergencies']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_emergencies']['element_label_class'] = 'field-label';
  $handler->display->display_options['fields']['field_emergencies']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_emergencies']['element_wrapper_class'] = 'field-items';
  $handler->display->display_options['fields']['field_emergencies']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_emergencies']['delta_offset'] = '0';
  /* Field: Content: Request Audience */
  $handler->display->display_options['fields']['field_request_audience']['id'] = 'field_request_audience';
  $handler->display->display_options['fields']['field_request_audience']['table'] = 'field_data_field_request_audience';
  $handler->display->display_options['fields']['field_request_audience']['field'] = 'field_request_audience';
  $handler->display->display_options['fields']['field_request_audience']['relationship'] = 'field_collection_request_node';
  $handler->display->display_options['fields']['field_request_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_request_audience']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_request_audience']['element_class'] = 'field-item';
  $handler->display->display_options['fields']['field_request_audience']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_request_audience']['element_label_class'] = 'field-label';
  $handler->display->display_options['fields']['field_request_audience']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_request_audience']['element_wrapper_class'] = 'field';
  /* Field: Content: Deadline for information submission */
  $handler->display->display_options['fields']['field_request_deadline']['id'] = 'field_request_deadline';
  $handler->display->display_options['fields']['field_request_deadline']['table'] = 'field_data_field_request_deadline';
  $handler->display->display_options['fields']['field_request_deadline']['field'] = 'field_request_deadline';
  $handler->display->display_options['fields']['field_request_deadline']['relationship'] = 'field_collection_request_node';
  $handler->display->display_options['fields']['field_request_deadline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_request_deadline']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_request_deadline']['element_class'] = 'field-item';
  $handler->display->display_options['fields']['field_request_deadline']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_request_deadline']['element_label_class'] = 'field-label';
  $handler->display->display_options['fields']['field_request_deadline']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_request_deadline']['element_wrapper_class'] = 'field';
  $handler->display->display_options['fields']['field_request_deadline']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* Field: Content revision: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_collection_request_ref_node';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'reverse_field_collection_request_ref_node';
  $handler->display->display_options['fields']['edit_node']['text'] = '(edit)';
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['relationship'] = 'reverse_field_collection_request_ref_node';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Updated on';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'long';
  /* Field: Workbench Moderation: State */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['relationship'] = 'nid';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Field: Field collection item: Requested by */
  $handler->display->display_options['fields']['field_request_requested_by']['id'] = 'field_request_requested_by';
  $handler->display->display_options['fields']['field_request_requested_by']['table'] = 'field_data_field_request_requested_by';
  $handler->display->display_options['fields']['field_request_requested_by']['field'] = 'field_request_requested_by';
  $handler->display->display_options['fields']['field_request_requested_by']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Requested to */
  $handler->display->display_options['fields']['field_recipient']['id'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['fields']['field_recipient']['field'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['relationship'] = 'reverse_field_collection_request_ref_node';
  $handler->display->display_options['fields']['field_recipient']['label'] = 'Sent to';
  $handler->display->display_options['fields']['field_recipient']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Provided By';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_collection_request_node';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Field: Emergencies (field_emergencies) */
  $handler->display->display_options['filters']['field_emergencies_tid']['id'] = 'field_emergencies_tid';
  $handler->display->display_options['filters']['field_emergencies_tid']['table'] = 'field_data_field_emergencies';
  $handler->display->display_options['filters']['field_emergencies_tid']['field'] = 'field_emergencies_tid';
  $handler->display->display_options['filters']['field_emergencies_tid']['relationship'] = 'field_collection_request_node';
  $handler->display->display_options['filters']['field_emergencies_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_emergencies_tid']['expose']['operator_id'] = 'field_emergencies_tid_op';
  $handler->display->display_options['filters']['field_emergencies_tid']['expose']['label'] = 'Emergencies';
  $handler->display->display_options['filters']['field_emergencies_tid']['expose']['operator'] = 'field_emergencies_tid_op';
  $handler->display->display_options['filters']['field_emergencies_tid']['expose']['identifier'] = 'field_emergencies_tid';
  $handler->display->display_options['filters']['field_emergencies_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
    139443077 => 0,
    2023496 => 0,
  );
  $handler->display->display_options['filters']['field_emergencies_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_emergencies_tid']['vocabulary'] = 'emergencies';
  /* Filter criterion: Field collection item: Reporting types (field_reporting_type) */
  $handler->display->display_options['filters']['field_reporting_type_target_id']['id'] = 'field_reporting_type_target_id';
  $handler->display->display_options['filters']['field_reporting_type_target_id']['table'] = 'field_data_field_reporting_type';
  $handler->display->display_options['filters']['field_reporting_type_target_id']['field'] = 'field_reporting_type_target_id';
  $handler->display->display_options['filters']['field_reporting_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reporting_type_target_id']['expose']['operator_id'] = 'field_reporting_type_target_id_op';
  $handler->display->display_options['filters']['field_reporting_type_target_id']['expose']['label'] = 'Reporting type';
  $handler->display->display_options['filters']['field_reporting_type_target_id']['expose']['operator'] = 'field_reporting_type_target_id_op';
  $handler->display->display_options['filters']['field_reporting_type_target_id']['expose']['identifier'] = 'field_reporting_type_target_id';
  $handler->display->display_options['filters']['field_reporting_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
    139443077 => 0,
    2023496 => 0,
  );
  $handler->display->display_options['filters']['field_reporting_type_target_id']['group_info']['label'] = 'Reporting types (field_reporting_type)';
  $handler->display->display_options['filters']['field_reporting_type_target_id']['group_info']['identifier'] = 'field_reporting_type_target_id';
  $handler->display->display_options['filters']['field_reporting_type_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_reporting_type_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'reverse_field_collection_request_ref_node';
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
    139443077 => 0,
    2023496 => 0,
  );
  /* Filter criterion: CRF: CRF internal request */
  $handler->display->display_options['filters']['crf_internal']['id'] = 'crf_internal';
  $handler->display->display_options['filters']['crf_internal']['table'] = 'field_data_field_request_audience';
  $handler->display->display_options['filters']['crf_internal']['field'] = 'crf_internal';
  $handler->display->display_options['filters']['crf_internal']['relationship'] = 'field_collection_request_node';
  /* Filter criterion: Content: Request Audience (field_request_audience) */
  $handler->display->display_options['filters']['field_request_audience_value']['id'] = 'field_request_audience_value';
  $handler->display->display_options['filters']['field_request_audience_value']['table'] = 'field_data_field_request_audience';
  $handler->display->display_options['filters']['field_request_audience_value']['field'] = 'field_request_audience_value';
  $handler->display->display_options['filters']['field_request_audience_value']['relationship'] = 'field_collection_request_node';
  $handler->display->display_options['filters']['field_request_audience_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_request_audience_value']['expose']['operator_id'] = 'field_request_audience_value_op';
  $handler->display->display_options['filters']['field_request_audience_value']['expose']['label'] = 'Request Audience';
  $handler->display->display_options['filters']['field_request_audience_value']['expose']['operator'] = 'field_request_audience_value_op';
  $handler->display->display_options['filters']['field_request_audience_value']['expose']['identifier'] = 'field_request_audience_value';
  $handler->display->display_options['filters']['field_request_audience_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
    139443077 => 0,
    2023496 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'crf';
  $translatables['requests'] = array(
    t('Master'),
    t('Requests'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No requests have been recorded yet'),
    t('node_report'),
    t('node_request'),
    t('Workbench Node'),
    t('revision user'),
    t('Emergencies'),
    t('Request Audience'),
    t('Deadline for information submission'),
    t('Field collection item ID'),
    t('.'),
    t(','),
    t('Title'),
    t('Edit link'),
    t('(edit)'),
    t('Updated on'),
    t('State'),
    t('Requested by'),
    t('Sent to'),
    t('Provided By'),
    t('Reporting type'),
    t('Reporting types (field_reporting_type)'),
    t('Page'),
  );


  $export['requests'] = $view;

  return $export;
}
