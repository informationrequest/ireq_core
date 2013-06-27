<?php

/**
 * @file
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $caption: The caption for this table. May be empty.
 * - $header_classes: An array of header classes keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $field_classes: An array of classes to apply to each field, indexed by
 *   field id, then row number. This matches the index in $rows.
 * @ingroup views_templates
 */
/*
if (isset($result[0])) {
  dpm($view);
  dpm($view->display_handler);
  dpm($view->display_handler->handlers['field']['field_emergencies']);
  dpm($view->display_handler->handlers['field']['field_request_audience']);
}
*/

// @TODO move to preprocess
$row = array_pop(array_keys($rows));
$field_emergencies = $view->render_field('field_emergencies', $row);
$field_request_audience = $view->render_field('field_request_audience', $row);
$field_request_deadline = $view->render_field('field_request_deadline', $row);

//dpm($result[$row], "row: $row");

?>
<h2 property="dc:title" datatype="" class="node-title"><?php print $title; ?></h2>
<div class="field field-name-field-request-audience field-type-list-boolean field-label-inline clearfix">
  <div class="field-label"><?php print t('Audience');?>:&nbsp;</div>
  <div class="field-items"><div class="field-item"><?php print $field_request_audience; ?></div></div>
</div>
<?php if ($field_emergencies): ?>
<div class="field field-name-field-emergencies field-type-taxonomy-term-reference field-label-inline clearfix">
  <div class="field-label"><?php print t('Emergencies');?>:&nbsp;</div>
  <div class="field-items"><div class="field-item"><?php print $field_emergencies; ?></div></div>
</div>
<?php endif; ?>
<table <?php if ($classes) { print 'class="'. $classes . '" '; } ?><?php print $attributes; ?>>
  <caption></caption>
  <thead>
    <tr>
      <?php foreach ($header as $field => $label): ?>
        <th <?php if ($header_classes[$field]) { print 'class="'. $header_classes[$field] . '" '; } ?>>
          <?php print $label; ?>
        </th>
      <?php endforeach; ?>
    </tr>
  </thead>
  <tbody>
    <?php foreach ($rows as $row_count => $row): ?>
      <tr <?php if ($row_classes[$row_count]) { print 'class="' . implode(' ', $row_classes[$row_count]) .'"';  } ?>>
        <?php foreach ($row as $field => $content): ?>
          <td <?php if ($field_classes[$field][$row_count]) { print 'class="'. $field_classes[$field][$row_count] . '" '; } ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
            <?php print $content; ?>
          </td>
        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>
<div class="field field-name-field-request-deadline field-type-datetime field-label-inline clearfix">
  <div class="field-label"><?php print t('Deadline for information submission');?>:&nbsp;</div><div class="field-items">
  <div class="field-item even"><?php print $field_request_deadline; ?></div></div>
</div>

