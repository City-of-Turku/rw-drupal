<?php
$view = new view();
$view->name = 'product_view';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'commerce_product';
$view->human_name = 'Product view';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'lisää';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'row';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Kenttä: Commerce tuote: Otsikko */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'commerce_product';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_type'] = 'h2';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_product'] = 0;
/* Kenttä: Commerce tuote: Tyyppi */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'commerce_product';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['exclude'] = TRUE;
$handler->display->display_options['fields']['type']['element_type'] = 'em';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['type']['link_to_product'] = 0;
$handler->display->display_options['fields']['type']['use_raw_value'] = 0;
/* Kenttä: Commerce tuote: Koodi */
$handler->display->display_options['fields']['sku']['id'] = 'sku';
$handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
$handler->display->display_options['fields']['sku']['field'] = 'sku';
$handler->display->display_options['fields']['sku']['label'] = 'SKU';
$handler->display->display_options['fields']['sku']['exclude'] = TRUE;
$handler->display->display_options['fields']['sku']['link_to_product'] = 0;
/* Kenttä: Commerce tuote: Muokkaa linkkiä */
$handler->display->display_options['fields']['edit_product']['id'] = 'edit_product';
$handler->display->display_options['fields']['edit_product']['table'] = 'commerce_product';
$handler->display->display_options['fields']['edit_product']['field'] = 'edit_product';
$handler->display->display_options['fields']['edit_product']['label'] = '';
$handler->display->display_options['fields']['edit_product']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit_product']['element_type'] = 'span';
$handler->display->display_options['fields']['edit_product']['element_class'] = 'btn btn-default';
$handler->display->display_options['fields']['edit_product']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_product']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['edit_product']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['edit_product']['text'] = 'Muokkaa';
/* Kenttä: Commerce tuote: Poistolinkki */
$handler->display->display_options['fields']['delete_product']['id'] = 'delete_product';
$handler->display->display_options['fields']['delete_product']['table'] = 'commerce_product';
$handler->display->display_options['fields']['delete_product']['field'] = 'delete_product';
$handler->display->display_options['fields']['delete_product']['label'] = '';
$handler->display->display_options['fields']['delete_product']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_product']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['delete_product']['alter']['link_class'] = 'btn btn-danger';
$handler->display->display_options['fields']['delete_product']['element_class'] = 'btn btn-danger';
$handler->display->display_options['fields']['delete_product']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['delete_product']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['delete_product']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['delete_product']['text'] = 'Poista';
/* Kenttä: Commerce tuote: Lisää ostoskoriin -lomake */
$handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
$handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
$handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
$handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
$handler->display->display_options['fields']['add_to_cart_form']['exclude'] = TRUE;
$handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
$handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
$handler->display->display_options['fields']['add_to_cart_form']['combine'] = 0;
$handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
$handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
/* Kenttä: Commerce tuote: Stock */
$handler->display->display_options['fields']['commerce_stock']['id'] = 'commerce_stock';
$handler->display->display_options['fields']['commerce_stock']['table'] = 'field_data_commerce_stock';
$handler->display->display_options['fields']['commerce_stock']['field'] = 'commerce_stock';
$handler->display->display_options['fields']['commerce_stock']['label'] = '';
$handler->display->display_options['fields']['commerce_stock']['exclude'] = TRUE;
$handler->display->display_options['fields']['commerce_stock']['element_type'] = 'span';
$handler->display->display_options['fields']['commerce_stock']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['commerce_stock']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['commerce_stock']['settings'] = array(
  'thousand_separator' => '',
  'decimal_separator' => '.',
  'scale' => '0',
  'prefix_suffix' => 1,
);
/* Kenttä: Commerce tuote: Body */
$handler->display->display_options['fields']['field_body']['id'] = 'field_body';
$handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
$handler->display->display_options['fields']['field_body']['field'] = 'field_body';
$handler->display->display_options['fields']['field_body']['label'] = '';
$handler->display->display_options['fields']['field_body']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_body']['element_default_classes'] = FALSE;
/* Kenttä: Kenttä: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_image']['alter']['text'] = '<div class="row">
<div class="col-lg-8">[field_image]</div>
<div class="col-lg-4">
<div class="panel panel-primary">
 <div class="panel-heading"><h3 class="panel-title">[type]</h3></div>
 <div class="panel-body">
  <div>[sku]</div>
  <div>Saldo: <span class="badge">[commerce_stock]</span></div>
  <div>[field_body]</div>
  <div><div class="btn">[edit_product] [delete_product]</div>[add_to_cart_form]</div>
 </div>
</div>
</div>
</div>';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['type'] = 'flexslider';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'optionset' => 'tuotekuvat',
  'image_style' => 'svga',
  'caption' => '0',
);
$handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_image']['separator'] = '';
/* Kenttä: Commerce tuote: Kategoria */
$handler->display->display_options['fields']['field_kategoria']['id'] = 'field_kategoria';
$handler->display->display_options['fields']['field_kategoria']['table'] = 'field_data_field_kategoria';
$handler->display->display_options['fields']['field_kategoria']['field'] = 'field_kategoria';
$handler->display->display_options['fields']['field_kategoria']['label'] = 'Kategoriat';
$handler->display->display_options['fields']['field_kategoria']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_kategoria']['delta_offset'] = '0';
/* Kenttä: Commerce tuote: Merkki */
$handler->display->display_options['fields']['field_merkki']['id'] = 'field_merkki';
$handler->display->display_options['fields']['field_merkki']['table'] = 'field_data_field_merkki';
$handler->display->display_options['fields']['field_merkki']['field'] = 'field_merkki';
$handler->display->display_options['fields']['field_merkki']['element_type'] = 'span';
$handler->display->display_options['fields']['field_merkki']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_merkki']['type'] = 'taxonomy_term_reference_plain';
/* Kenttä: Commerce tuote: Malli */
$handler->display->display_options['fields']['field_malli']['id'] = 'field_malli';
$handler->display->display_options['fields']['field_malli']['table'] = 'field_data_field_malli';
$handler->display->display_options['fields']['field_malli']['field'] = 'field_malli';
$handler->display->display_options['fields']['field_malli']['element_type'] = 'span';
$handler->display->display_options['fields']['field_malli']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_malli']['type'] = 'taxonomy_term_reference_plain';
/* Kenttä: Commerce tuote: Koko */
$handler->display->display_options['fields']['field_koko']['id'] = 'field_koko';
$handler->display->display_options['fields']['field_koko']['table'] = 'field_data_field_koko';
$handler->display->display_options['fields']['field_koko']['field'] = 'field_koko';
$handler->display->display_options['fields']['field_koko']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_koko']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_koko']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_koko']['click_sort_column'] = 'length';
/* Kenttä: Commerce tuote: Paino */
$handler->display->display_options['fields']['field_paino']['id'] = 'field_paino';
$handler->display->display_options['fields']['field_paino']['table'] = 'field_data_field_paino';
$handler->display->display_options['fields']['field_paino']['field'] = 'field_paino';
$handler->display->display_options['fields']['field_paino']['element_type'] = 'span';
$handler->display->display_options['fields']['field_paino']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_paino']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_paino']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_paino']['click_sort_column'] = 'weight';
/* Kenttä: Commerce tuote: Väri */
$handler->display->display_options['fields']['field_vari']['id'] = 'field_vari';
$handler->display->display_options['fields']['field_vari']['table'] = 'field_data_field_vari';
$handler->display->display_options['fields']['field_vari']['field'] = 'field_vari';
$handler->display->display_options['fields']['field_vari']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_vari']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_vari']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_vari']['delta_offset'] = '0';
/* Kenttä: Commerce tuote: Varasto */
$handler->display->display_options['fields']['field_varasto']['id'] = 'field_varasto';
$handler->display->display_options['fields']['field_varasto']['table'] = 'field_data_field_varasto';
$handler->display->display_options['fields']['field_varasto']['field'] = 'field_varasto';
$handler->display->display_options['fields']['field_varasto']['label'] = 'Varastossa';
$handler->display->display_options['fields']['field_varasto']['settings'] = array(
  'link' => 1,
);
/* Kenttä: Commerce tuote: Price */
$handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
$handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
$handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
$handler->display->display_options['fields']['commerce_price']['label'] = '';
$handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
$handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['commerce_price']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['commerce_price']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
$handler->display->display_options['fields']['commerce_price']['settings'] = array(
  'calculation' => '0',
);
/* Sisältöriippuvanen suodatin: Commerce tuote: Koodi */
$handler->display->display_options['arguments']['sku']['id'] = 'sku';
$handler->display->display_options['arguments']['sku']['table'] = 'commerce_product';
$handler->display->display_options['arguments']['sku']['field'] = 'sku';
$handler->display->display_options['arguments']['sku']['default_action'] = 'access denied';
$handler->display->display_options['arguments']['sku']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['sku']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['sku']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['sku']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['sku']['limit'] = '0';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'product/%';
$translatables['product_view'] = array(
  t('Master'),
  t('lisää'),
  t('Käytä'),
  t('Palauta oletusarvoihin'),
  t('Lajittele'),
  t('Asc'),
  t('Desc'),
  t('SKU'),
  t('Muokkaa'),
  t('Poista'),
  t('<div class="row">
<div class="col-lg-8">[field_image]</div>
<div class="col-lg-4">
<div class="panel panel-primary">
 <div class="panel-heading"><h3 class="panel-title">[type]</h3></div>
 <div class="panel-body">
  <div>[sku]</div>
  <div>Saldo: <span class="badge">[commerce_stock]</span></div>
  <div>[field_body]</div>
  <div><div class="btn">[edit_product] [delete_product]</div>[add_to_cart_form]</div>
 </div>
</div>
</div>
</div>'),
  t('Kategoriat'),
  t('Merkki'),
  t('Malli'),
  t('Koko'),
  t('Paino'),
  t('Väri'),
  t('Varastossa'),
  t('All'),
  t('Page'),
);

