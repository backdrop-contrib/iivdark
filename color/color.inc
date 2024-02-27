<?php

// Put the logo path into JavaScript for the live preview.
backdrop_add_js(array('color' => array('logo' => theme_get_setting('logo', 'iivdark'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'brand' => t('Brand color'),
    'surface1' => t('Surface 1'),
    'surface2' => t('Surface 2'),
    'surface3' => t('Surface 3'),
    'surface4' => t('Surface 4'),
    'text1' => t('Text 1'),
    'text2' => t('Text 2'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('IIV Dark'),
      'colors' => array(
        'brand' => '#1481b8',
        'surface1' => '#2e3538',
        'surface2' => '#394246',
        'surface3' => '#494e50',
        'surface4' => '#555b5e',
        'text1' => '#b6c2c9',
        'text2' => '#929fa5',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),

  // Files to copy.
  'copy' => array(),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
