crf_core
--------
Common Request Format core module

== Module (crf_core.module)
function crf_core_get_request
Get report (if any) from uid and request id (it searches in field_collection_request).

=== Block hooks

crf_core_block_info
crf_core_block_view

  Block qith add request link


=== Form alter hooks
crf_core_form_request_node_form_alter
crf_core_field_collection_request_preview_validate
crf_core_field_collection_request_preview_submit
crf_core_field_collection_request_cancel_preview_submit

  Preview for the requests (field_collection_request)

=== Theme hooks
crf_core_theme
theme_field_collection_request_preview

  Theme request (field_collection_request) preview


== Content Types

Report
Request


== Field bases/instances

field_collection_item-field_collection_request-field_append_to_alert_email
field_collection_item-field_collection_request-field_reporting_type
field_collection_item-field_collection_request-field_request_recipients
field_collection_item-field_collection_request-field_request_requested_by

node-report-field_collection_request_ref
node-report-field_file
node-report-field_recipient
node-report-field_report_description

node-request-field_append_to_alert_email
node-request-field_collection_request
node-request-field_request_deadline
node-request-field_internal_report

taxonomy_term-reporting_types-field_content_type


== Rules (crf_core.rules_defaults.inc)

rules_content_published - Workflow content type published
rules_email_recipients_on_request_submission - Email recipients on request submission
rules_workflow_content_type_submitted_to_ocha - Workflow content type submitted to OCHA

  @TODO check if still needed


== Taxonomy (crf_core.features.taxonomy.inc)

reporting_types - Reporting types


== Views (crf_core.views_default.inc)

eva_field_collection_request - Render field_collection for entity id



