<?php
$view = new view();
$view->name = 'warehouse_status';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'commerce_line_item';
$view->human_name = 'Varastotilanne';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Varastotilanne';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'lisää';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Merkintöjä sivua kohti';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Kaikki -';
$handler->display->display_options['pager']['options']['tags']['first'] = '« ensimmäinen';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ edellinen';
$handler->display->display_options['pager']['options']['tags']['next'] = 'seuraava ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'viimeinen »';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
/* Suhde: Commerce Line item: Referenced products */
$handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
$handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
$handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
$handler->display->display_options['relationships']['commerce_product_product_id']['required'] = TRUE;
/* Kenttä: Commerce Line Item: Tuoterivin ID */
$handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
$handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
$handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
/* Suodatinkriteeri: Commerce Line Item: Tyyppi */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'commerce_line_item';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'product' => 'product',
);
/* Suodatinkriteeri: Commerce tuote: Varasto (field_varasto) */
$handler->display->display_options['filters']['field_varasto_target_id']['id'] = 'field_varasto_target_id';
$handler->display->display_options['filters']['field_varasto_target_id']['table'] = 'field_data_field_varasto';
$handler->display->display_options['filters']['field_varasto_target_id']['field'] = 'field_varasto_target_id';
$handler->display->display_options['filters']['field_varasto_target_id']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['filters']['field_varasto_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_varasto_target_id']['expose']['operator_id'] = 'field_varasto_target_id_op';
$handler->display->display_options['filters']['field_varasto_target_id']['expose']['label'] = 'Varasto';
$handler->display->display_options['filters']['field_varasto_target_id']['expose']['operator'] = 'field_varasto_target_id_op';
$handler->display->display_options['filters']['field_varasto_target_id']['expose']['identifier'] = 'field_varasto_target_id';
$handler->display->display_options['filters']['field_varasto_target_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  8 => 0,
  7 => 0,
  5 => 0,
  6 => 0,
  3 => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/commerce/warehouse-order-status';
$translatables['warehouse_status'] = array(
  t('Master'),
  t('Varastotilanne'),
  t('lisää'),
  t('Käytä'),
  t('Palauta oletusarvoihin'),
  t('Lajittele'),
  t('Asc'),
  t('Desc'),
  t('Merkintöjä sivua kohti'),
  t('- Kaikki -'),
  t('Offset'),
  t('« ensimmäinen'),
  t('‹ edellinen'),
  t('seuraava ›'),
  t('viimeinen »'),
  t('Products referenced by commerce_product'),
  t('Tuoterivin ID'),
  t('.'),
  t(','),
  t('Varasto'),
  t('Page'),
);

