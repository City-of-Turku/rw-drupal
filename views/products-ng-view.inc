<?php
$view = new view();
$view->name = 'products_ng';
$view->description = '';
$view->tag = 'products';
$view->base_table = 'search_api_index_tuote_indexi';
$view->human_name = 'Products-ng';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Tuotteet';
$handler->display->display_options['css_class'] = 'grid-img-overlay-title';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'lisää';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '21';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Merkintöjä sivua kohti';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Kaikki -';
$handler->display->display_options['pager']['options']['tags']['first'] = '« ensimmäinen';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ edellinen';
$handler->display->display_options['pager']['options']['tags']['next'] = 'seuraava ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'viimeinen »';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['row_plugin'] = 'fields';
/* Ylätunniste: Yleinen: Tulosten yhteenveto */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* Kenttä: Indexed Commerce tuote: Tuote ID */
$handler->display->display_options['fields']['product_id']['id'] = 'product_id';
$handler->display->display_options['fields']['product_id']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['fields']['product_id']['field'] = 'product_id';
$handler->display->display_options['fields']['product_id']['label'] = '';
$handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['product_id']['separator'] = '';
$handler->display->display_options['fields']['product_id']['link_to_entity'] = 0;
/* Kenttä: Indexed Commerce tuote: Koodi */
$handler->display->display_options['fields']['sku']['id'] = 'sku';
$handler->display->display_options['fields']['sku']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['fields']['sku']['field'] = 'sku';
$handler->display->display_options['fields']['sku']['label'] = '';
$handler->display->display_options['fields']['sku']['exclude'] = TRUE;
$handler->display->display_options['fields']['sku']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sku']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['sku']['link_to_entity'] = 0;
/* Kenttä: Indexed Commerce tuote: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['alter']['path'] = 'product/[sku_1]';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'tuote',
  'image_link' => '',
);
$handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_image']['separator'] = '';
/* Kenttä: Indexed Commerce tuote: Otsikko */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_type'] = 'h4';
$handler->display->display_options['fields']['title']['element_class'] = 'product-title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_entity'] = 0;
/* Kenttä: Indexed Commerce tuote: Koodi */
$handler->display->display_options['fields']['sku_1']['id'] = 'sku_1';
$handler->display->display_options['fields']['sku_1']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['fields']['sku_1']['field'] = 'sku';
$handler->display->display_options['fields']['sku_1']['label'] = '';
$handler->display->display_options['fields']['sku_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['sku_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sku_1']['link_to_entity'] = 0;
/* Kenttä: Indexed Commerce tuote: Tyyppi */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['exclude'] = TRUE;
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['type']['link_to_entity'] = 0;
$handler->display->display_options['fields']['type']['format_name'] = 1;
/* Kenttä: Yleinen: Muokattu teksti */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<figure>
[field_image]
<figcaption>[title]<br/>[type] ([sku])</figcaption>
</figure>';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['path'] = 'product/[sku]';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
/* Kenttä: Commerce tuote: Lisää ostoskoriin -lomake */
$handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
$handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
$handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
$handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
$handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
$handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
$handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
$handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
$handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
/* Lajittelukriteeri: Indexed Commerce tuote: Luontipäivämäärä */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['exposed'] = TRUE;
$handler->display->display_options['sorts']['created']['expose']['label'] = 'Lisätty';
/* Lajittelukriteeri: Etsi: Paremmuusjärjestys */
$handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
$handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
$handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
$handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
$handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Paremmuus';
/* Suodatinkriteeri: Etsi: Fulltext search */
$handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Haku';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  8 => 0,
  7 => 0,
  5 => 0,
  6 => 0,
  3 => 0,
);
/* Suodatinkriteeri: Indexed Commerce tuote: Stock */
$handler->display->display_options['filters']['commerce_stock']['id'] = 'commerce_stock';
$handler->display->display_options['filters']['commerce_stock']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['filters']['commerce_stock']['field'] = 'commerce_stock';
$handler->display->display_options['filters']['commerce_stock']['operator'] = '>';
$handler->display->display_options['filters']['commerce_stock']['value'] = '0';
/* Suodatinkriteeri: Indexed Commerce tuote: Tila */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = array(
  1 => '1',
);

/* Display: Tuotteet NG Grid */
$handler = $view->new_display('page', 'Tuotteet NG Grid', 'page');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['style_options']['columns_horizontal'] = '-1';
$handler->display->display_options['style_options']['columns_vertical'] = '4';
$handler->display->display_options['style_options']['columns_xs'] = '12';
$handler->display->display_options['style_options']['columns_sm'] = '6';
$handler->display->display_options['style_options']['columns_md'] = '4';
$handler->display->display_options['style_options']['columns_lg'] = '4';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['path'] = 'products-ng';
$handler->display->display_options['menu']['title'] = 'Tuotteet';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['type'] = 'normal';
$handler->display->display_options['tab_options']['title'] = 'Ruudukko';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Grid */
$handler = $view->new_display('page', 'Grid', 'page_2');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['style_options']['columns_horizontal'] = '-1';
$handler->display->display_options['style_options']['columns_vertical'] = '4';
$handler->display->display_options['style_options']['columns_xs'] = '12';
$handler->display->display_options['style_options']['columns_sm'] = '6';
$handler->display->display_options['style_options']['columns_md'] = '4';
$handler->display->display_options['style_options']['columns_lg'] = '4';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['path'] = 'products-ng/grid';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Ruudukko';
$handler->display->display_options['menu']['description'] = 'Näytä tuotteet ruudukossa';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Table */
$handler = $view->new_display('page', 'Table', 'page_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'product_id' => 'product_id',
  'sku' => 'sku',
  'title' => 'title',
  'sku_1' => 'sku_1',
  'field_image' => 'field_image',
  'add_to_cart_form' => 'add_to_cart_form',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'product_id' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'sku' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'sku_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_image' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'add_to_cart_form' => array(
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
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Kenttä: Indexed Commerce tuote: Tuote ID */
$handler->display->display_options['fields']['product_id']['id'] = 'product_id';
$handler->display->display_options['fields']['product_id']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['fields']['product_id']['field'] = 'product_id';
$handler->display->display_options['fields']['product_id']['label'] = '';
$handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['product_id']['link_to_entity'] = 0;
/* Kenttä: Indexed Commerce tuote: Koodi */
$handler->display->display_options['fields']['sku']['id'] = 'sku';
$handler->display->display_options['fields']['sku']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['fields']['sku']['field'] = 'sku';
$handler->display->display_options['fields']['sku']['label'] = '';
$handler->display->display_options['fields']['sku']['exclude'] = TRUE;
$handler->display->display_options['fields']['sku']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sku']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['sku']['link_to_entity'] = 0;
/* Kenttä: Indexed Commerce tuote: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_image']['alter']['path'] = 'product/[sku]';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'tuote',
  'image_link' => '',
);
$handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_image']['separator'] = '';
/* Kenttä: Indexed Commerce tuote: Koko */
$handler->display->display_options['fields']['field_koko']['id'] = 'field_koko';
$handler->display->display_options['fields']['field_koko']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['fields']['field_koko']['field'] = 'field_koko';
$handler->display->display_options['fields']['field_koko']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_koko']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_koko']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_koko']['click_sort_column'] = 'length';
/* Kenttä: Indexed Commerce tuote: Paino */
$handler->display->display_options['fields']['field_paino']['id'] = 'field_paino';
$handler->display->display_options['fields']['field_paino']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['fields']['field_paino']['field'] = 'field_paino';
$handler->display->display_options['fields']['field_paino']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_paino']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_paino']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_paino']['click_sort_column'] = 'weight';
/* Kenttä: Indexed Commerce tuote: Väri */
$handler->display->display_options['fields']['field_vari']['id'] = 'field_vari';
$handler->display->display_options['fields']['field_vari']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['fields']['field_vari']['field'] = 'field_vari';
$handler->display->display_options['fields']['field_vari']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_vari']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_vari']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_vari']['link_to_entity'] = 1;
$handler->display->display_options['fields']['field_vari']['view_mode'] = 'full';
$handler->display->display_options['fields']['field_vari']['bypass_access'] = 0;
/* Kenttä: Commerce tuote: Lisää ostoskoriin -lomake */
$handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
$handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
$handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
$handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
$handler->display->display_options['fields']['add_to_cart_form']['exclude'] = TRUE;
$handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
$handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
$handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
$handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
$handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
/* Kenttä: Indexed Commerce tuote: Otsikko */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'search_api_index_tuote_indexi';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<h3><a href="/product/[sku]">[title]</a></h3>
<p>[field_koko]<br/>[field_paino]<br/>[field_vari]</p>
<p><small>[sku]</small></p>
[add_to_cart_form]';
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_entity'] = 0;
$handler->display->display_options['path'] = 'products-ng/table';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Taulu';
$handler->display->display_options['menu']['description'] = 'Näytä tuotteet taulukossa';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$translatables['products_ng'] = array(
  t('Master'),
  t('Tuotteet'),
  t('lisää'),
  t('Käytä'),
  t('Palauta'),
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
  t('Displaying @start - @end of @total'),
  t('.'),
  t('<figure>
[field_image]
<figcaption>[title]<br/>[type] ([sku])</figcaption>
</figure>'),
  t('Lisätty'),
  t('Paremmuus'),
  t('Haku'),
  t('Tuotteet NG Grid'),
  t('Grid'),
  t('Table'),
  t(','),
  t('Koko'),
  t('Paino'),
  t('Väri'),
  t('<h3><a href="/product/[sku]">[title]</a></h3>
<p>[field_koko]<br/>[field_paino]<br/>[field_vari]</p>
<p><small>[sku]</small></p>
[add_to_cart_form]'),
);

