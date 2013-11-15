crf_core
--------
Common Request Format core module

== Module (crf_core.module)
function crf_core_get_request
  Get report (if any) from uid and request id (it searches in field_collection_request).

=== Form alter hooks
crf_core_form_alter
  Remove audience filter for users without permission "access_internal_ocha_requests".

== Moderation
* needs_input (draft)
* needs_review
* finalized (published)
* public

Multiple workflows for different content types.
https://drupal.org/node/1206854
$conf['workbench_moderation_per_node_type'] = TRUE;

=== Context
crf
  Define CRF base context; triggered by other context (to avoid override on pluggin new content type).

=== Menu
/crf => CRF
  Main menu item fro CRF feature.

=== Permission
access_internal_ocha_requests
  Access internal request.

=== Views
requests
  CRF home page view, with exposed block for filtering,

field_collection_requests_view
  Report list view attached to requests.

@TODO
* Implement hook_uninstall() https://drupal.org/node/1055460

@TODO feed entity import
* Entityforms - https://drupal.org/node/1540680
* Rules Forms Support - https://drupal.org/project/rules_forms
* Rules Data Transforms - https://drupal.org/project/rules_data_transforms
* Feeds entity reference - https://drupal.org/project/feeds_entityreference
* Field collection feeds - https://drupal.org/project/field_collection_feeds (https://drupal.org/node/1831004)
* Field collection add feeds integration - https://drupal.org/node/1063434

@TODO remove from here

=== Theme hooks
crf_core_theme
theme_field_collection_request_preview

  Theme request (field_collection_request) preview



== Taxonomy (crf_core.features.taxonomy.inc)

reporting_types - Reporting types


== Views (crf_core.views_default.inc)

eva_field_collection_request - Render field_collection for entity id



