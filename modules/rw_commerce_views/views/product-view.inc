$view = new view();
$view->name = 'product';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'commerce_product';
$view->human_name = 'Product';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Product';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Commerce Product: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'commerce_product';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_product'] = 0;
/* Field: Commerce Product: SKU */
$handler->display->display_options['fields']['sku']['id'] = 'sku';
$handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
$handler->display->display_options['fields']['sku']['field'] = 'sku';
$handler->display->display_options['fields']['sku']['link_to_product'] = 0;
/* Field: Commerce Product: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'commerce_product';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: Commerce Product: Add to Cart form */
$handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
$handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
$handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
$handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
$handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
$handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
$handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
$handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
/* Contextual filter: Commerce Product: SKU */
$handler->display->display_options['arguments']['sku']['id'] = 'sku';
$handler->display->display_options['arguments']['sku']['table'] = 'commerce_product';
$handler->display->display_options['arguments']['sku']['field'] = 'sku';
$handler->display->display_options['arguments']['sku']['default_action'] = 'not found';
$handler->display->display_options['arguments']['sku']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['sku']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['sku']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['sku']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['sku']['limit'] = '0';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'product/%';
$translatables['product'] = array(
  t('Master'),
  t('Product'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('SKU'),
  t('Type'),
  t('Add to Cart form'),
  t('All'),
  t('Page'),
);

