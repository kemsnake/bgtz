<?php
/**
 * @file
 * feature_general_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_general_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_:feedback.
  $menu_links['main-menu_:feedback'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'feedback',
    'router_path' => 'feedback',
    'link_title' => 'Отзывы',
    'options' => array(
      'identifier' => 'main-menu_:feedback',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:news.
  $menu_links['main-menu_:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'Новости',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_:news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:<nolink>',
  );
  // Exported menu link: main-menu_:staff.
  $menu_links['main-menu_:staff'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'staff',
    'router_path' => 'staff',
    'link_title' => 'Сотрудники',
    'options' => array(
      'identifier' => 'main-menu_:staff',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:<nolink>',
  );
  // Exported menu link: main-menu_:video.
  $menu_links['main-menu_:video'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'video',
    'router_path' => 'video',
    'link_title' => 'Видео',
    'options' => array(
      'identifier' => 'main-menu_:video',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:<nolink>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Видео');
  t('Новости');
  t('Отзывы');
  t('Сотрудники');

  return $menu_links;
}
