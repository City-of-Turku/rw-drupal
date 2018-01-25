$view = new view();
$view->name = 'varastotilaukset';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'commerce_order';
$view->human_name = 'Varastotilaukset';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'lisää';
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  7 => '7',
  8 => '8',
  5 => '5',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Merkintöjä sivua kohti';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Kaikki -';
$handler->display->display_options['pager']['options']['tags']['first'] = '« ensimmäinen';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ edellinen';
$handler->display->display_options['pager']['options']['tags']['next'] = 'seuraava ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'viimeinen »';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'order_number' => 'order_number',
  'created' => 'created',
  'field_kategoria' => 'field_kategoria',
  'sku' => 'sku',
  'state' => 'state',
  'status' => 'status',
  'field_varasto' => 'field_varasto',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'order_number' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_kategoria' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'sku' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'state' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_varasto' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 0,
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
$handler->display->display_options['style_options']['responsive'] = 0;
/* Ylätunniste: Yleinen: Suodattamaton teksti */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['header']['area_text_custom']['content'] = 'Käsittelyä odottavat tuotteet eri varastoissa.';
/* Suhde: Commerce Order: Referenced line items */
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['required'] = TRUE;
/* Suhde: Commerce Line item: Referenced products */
$handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
$handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
$handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
$handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['relationships']['commerce_product_product_id']['required'] = TRUE;
/* Suhde: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_varasto_target_id']['id'] = 'field_varasto_target_id';
$handler->display->display_options['relationships']['field_varasto_target_id']['table'] = 'field_data_field_varasto';
$handler->display->display_options['relationships']['field_varasto_target_id']['field'] = 'field_varasto_target_id';
$handler->display->display_options['relationships']['field_varasto_target_id']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['relationships']['field_varasto_target_id']['required'] = TRUE;
/* Kenttä: Commerce tilaus: Tilauksen numero */
$handler->display->display_options['fields']['order_number']['id'] = 'order_number';
$handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
$handler->display->display_options['fields']['order_number']['field'] = 'order_number';
$handler->display->display_options['fields']['order_number']['link_to_order'] = 'admin';
/* Kenttä: Commerce tilaus: Luontipäivä */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'commerce_order';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['date_format'] = 'd_m_y_24h';
$handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
/* Kenttä: Commerce tuote: Kategoria */
$handler->display->display_options['fields']['field_kategoria']['id'] = 'field_kategoria';
$handler->display->display_options['fields']['field_kategoria']['table'] = 'field_data_field_kategoria';
$handler->display->display_options['fields']['field_kategoria']['field'] = 'field_kategoria';
$handler->display->display_options['fields']['field_kategoria']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['fields']['field_kategoria']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_kategoria']['delta_offset'] = '0';
/* Kenttä: Commerce tuote: Koodi */
$handler->display->display_options['fields']['sku']['id'] = 'sku';
$handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
$handler->display->display_options['fields']['sku']['field'] = 'sku';
$handler->display->display_options['fields']['sku']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['fields']['sku']['link_to_product'] = 1;
/* Kenttä: Commerce tilaus: Tilauksen tila */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'commerce_order';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['exclude'] = TRUE;
/* Kenttä: Commerce tilaus: Tilauksen tilanne */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'commerce_order';
$handler->display->display_options['fields']['status']['field'] = 'status';
/* Kenttä: Commerce tuote: Varasto */
$handler->display->display_options['fields']['field_varasto']['id'] = 'field_varasto';
$handler->display->display_options['fields']['field_varasto']['table'] = 'field_data_field_varasto';
$handler->display->display_options['fields']['field_varasto']['field'] = 'field_varasto';
$handler->display->display_options['fields']['field_varasto']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['fields']['field_varasto']['settings'] = array(
  'link' => 1,
);
/* Lajittelukriteeri: Commerce tuote: Varasto (field_varasto) */
$handler->display->display_options['sorts']['field_varasto_target_id']['id'] = 'field_varasto_target_id';
$handler->display->display_options['sorts']['field_varasto_target_id']['table'] = 'field_data_field_varasto';
$handler->display->display_options['sorts']['field_varasto_target_id']['field'] = 'field_varasto_target_id';
$handler->display->display_options['sorts']['field_varasto_target_id']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['sorts']['field_varasto_target_id']['order'] = 'DESC';
/* Lajittelukriteeri: Commerce tilaus: Luontipäivä */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'commerce_order';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['granularity'] = 'hour';
/* Lajittelukriteeri: Commerce Line Item: Tilauksen ID */
$handler->display->display_options['sorts']['order_id']['id'] = 'order_id';
$handler->display->display_options['sorts']['order_id']['table'] = 'commerce_line_item';
$handler->display->display_options['sorts']['order_id']['field'] = 'order_id';
$handler->display->display_options['sorts']['order_id']['relationship'] = 'commerce_line_items_line_item_id';
/* Suodatinkriteeri: Commerce tilaus: Tilaustyyppi */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'commerce_order';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'commerce_order' => 'commerce_order',
);
/* Suodatinkriteeri: Commerce tilaus: Tilauksen tila */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'commerce_order';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['value'] = array(
  'pending' => 'pending',
);
/* Suodatinkriteeri: Commerce tuote: Tila */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'commerce_product';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['filters']['status']['value'] = '1';
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

/* Display: Sivu */
$handler = $view->new_display('page', 'Sivu', 'page_1');
$handler->display->display_options['path'] = 'admin/commerce/warehouse-orders-pending';
$translatables['varastotilaukset'] = array(
  t('Master'),
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
  t('Käsittelyä odottavat tuotteet eri varastoissa.'),
  t('Line items referenced by commerce_line_items'),
  t('Products referenced by commerce_product'),
  t('Sisältö entity referenced from field_varasto'),
  t('Tilauksen numero'),
  t('Luontipäivä'),
  t('Kategoria'),
  t('Koodi'),
  t('Tilauksen tila'),
  t('Tilauksen tilanne'),
  t('Varasto'),
  t('Sivu'),
);

