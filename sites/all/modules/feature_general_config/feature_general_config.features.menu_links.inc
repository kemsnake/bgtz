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

  // Exported menu link: main-menu_-:node/21
  $menu_links['main-menu_-:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'Задать вопрос',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_-:node/21',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_-:node/23
  $menu_links['main-menu_-:node/23'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Подать заявку',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_-:node/23',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:<front>
  $menu_links['main-menu_:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Новости',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:feedback
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
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:news
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
    'parent_identifier' => 'main-menu_:<front>',
  );
  // Exported menu link: main-menu_:node/24
  $menu_links['main-menu_:node/24'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Ссылки',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_:node/24',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:node/25
  $menu_links['main-menu_:node/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Ревизиты',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_:node/25',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:<front>',
  );
  // Exported menu link: main-menu_:node/26
  $menu_links['main-menu_:node/26'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Контракты',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_:node/26',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:staff
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
    'parent_identifier' => 'main-menu_:<front>',
  );
  // Exported menu link: main-menu_:video
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
    'parent_identifier' => 'main-menu_:<front>',
  );
  // Exported menu link: navigation_add-content:node/add
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Видео');
  t('Задать вопрос');
  t('Контракты');
  t('Новости');
  t('Отзывы');
  t('Подать заявку');
  t('Ревизиты');
  t('Сотрудники');
  t('Ссылки');


  return $menu_links;
}
