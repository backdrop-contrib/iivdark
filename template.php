<?php
/**
 * @file
 * Contains a theme's functions to manipulate or override the default markup.
 */

/**
 * Prepares variables for maintenance page templates.
 *
 * @see maintenance_page.tpl.php
 */
function iivdark_preprocess_maintenance_page(&$variables) {
  backdrop_add_css(backdrop_get_path('theme', 'iivdark') . '/css/maintenance-page.css');
}


/**
 * Prepares variables for layout template files.
 *
 * @see layout.tpl.php
 */
function iivdark_preprocess_layout(&$variables) {
  if (isset($variables['content']['header'])) {
    $extra_header_classes = array();
    $extra_header_classes[] = "square-tabs";
    $variables['content']['header'] = '<div class="' . implode(' ', $extra_header_classes) . '">' . $variables['content']['header'] . '</div>';
  }
}

/**
 * Overrides theme_field__FIELD_TYPE().
 */
function iivdark_field__taxonomy_term_reference($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<h3 class="field-label">' . $variables['label'] . ': </h3>';
  }

  // Render the items.
  $output .= ($variables['element']['#label_display'] == 'inline') ? '<ul class="links inline">' : '<ul class="links">';
  foreach ($variables['items'] as $delta => $item) {
    $item_attributes = (isset($variables['item_attributes'][$delta])) ? backdrop_attributes($variables['item_attributes'][$delta]) : '';
    $output .= '<li class="taxonomy-term-reference-' . $delta . '"' . $item_attributes . '>' . backdrop_render($item) . '</li>';
  }
  $output .= '</ul>';

  // Render the surrounding DIV with appropriate classes and attributes.
  if (!in_array('clearfix', $variables['classes'])) {
    $variables['classes'][] = 'clearfix';
  }
  $output = '<div class="' . implode(' ', $variables['classes']) . '"' . backdrop_attributes($variables['attributes']) . '>' . $output . '</div>';

  return $output;
}


/**
 * Overrides theme_breadcrumb(). Removes &raquo; from markup.
 *
 * @see theme_breadcrumb().
 */
function iivdark_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  $output = '';
  if (!empty($breadcrumb)) {
    $output .= '<nav class="breadcrumb" aria-label="' . t('Breadcrumb') . '">';
    $output .= '<ol><li>' . implode('</li> | <li>', $breadcrumb) . '</li></ol>';
    $output .= '</nav>';
  }
  return $output;
}

function iivdark_preprocess_block(&$variables) {
  $block = $variables['block'];
  if (get_class($block) == 'BlockHero') {
    $variables['classes'][] = 'block-hero';
    if (isset($block->settings['image_path'])) {
      $variables['attributes']['style'] = 'background-image:url(' . $block->settings['image_path'] . ');';
      $variables['classes'][] = 'block-hero-image iivdark';
    }
    else {
      $variables['classes'][] = 'block-hero-no-image iivdark';
    }
  }
}
