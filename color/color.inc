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
      'title' => t('IIV Dark Blue'),
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
    'Red' => array(
      'title' => t('IIV Dark Red'),
      'colors' => array(
        'brand' => '#eb4747',
        'surface1' => '#382e2e',
        'surface2' => '#463939',
        'surface3' => '#504949',
        'surface4' => '#5e5555',
        'text1' => '#c9b6b6',
        'text2' => '#a59292',
      ),
    ),
    'Or' => array(
      'title' => t('IIV Dark Or'),
      'colors' => array(
        'brand' => '#e19f2c',
        'surface1' => '#38342e',
        'surface2' => '#464139',
        'surface3' => '#504e49',
        'surface4' => '#5e5a55',
        'text1' => '#c9c2b6',
        'text2' => '#a59e92',
      ),
    ),
    'Mint' => array(
      'title' => t('IIV Dark Mint'),
      'colors' => array(
        'brand' => '#7bdcaf',
        'surface1' => '#2e3833',
        'surface2' => '#394640',
        'surface3' => '#49504d',
        'surface4' => '#555e5a',
        'text1' => '#b6c9c0',
        'text2' => '#92a59c',
      ),
    ),
    'Light' => array(
      'title' => t('IIV Light'),
      'colors' => array(
        'brand' => '#00aaff',
        'surface1' => '#dfe8ec',
        'surface2' => '#fcfdfd',
        'surface3' => '#e7ecef',
        'surface4' => '#d1dbe0',
        'text1' => '#002233',
        'text2' => '#365463',
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
