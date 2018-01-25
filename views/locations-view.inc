$view = new view();
$view->name = 'locations';
$view->description = '';
$view->tag = 'api';
$view->base_table = 'node';
$view->human_name = 'locations';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'lisää';
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  4 => '4',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Kenttä: Sisältö: Otsikko */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'location';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Kenttä: Sisältö: Address - Katuosoite */
$handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
$handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
$handler->display->display_options['fields']['field_address_thoroughfare']['label'] = 'street';
$handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
/* Kenttä: Sisältö: Address - Numero */
$handler->display->display_options['fields']['field_address_premise']['id'] = 'field_address_premise';
$handler->display->display_options['fields']['field_address_premise']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_premise']['field'] = 'field_address_premise';
$handler->display->display_options['fields']['field_address_premise']['label'] = 'number';
$handler->display->display_options['fields']['field_address_premise']['element_label_colon'] = FALSE;
/* Kenttä: Sisältö: Address - Paikkakunta */
$handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
$handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
$handler->display->display_options['fields']['field_address_locality']['label'] = 'city';
$handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
/* Kenttä: Sisältö: Address - Postinumero */
$handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
$handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
$handler->display->display_options['fields']['field_address_postal_code']['label'] = 'zip';
$handler->display->display_options['fields']['field_address_postal_code']['element_label_colon'] = FALSE;
/* Kenttä: Sisältö: Geolocation */
$handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['label'] = 'geo';
$handler->display->display_options['fields']['field_geolocation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'wkt';
$handler->display->display_options['fields']['field_geolocation']['type'] = 'geofield_geojson';
$handler->display->display_options['fields']['field_geolocation']['settings'] = array(
  'data' => 'centroid',
);
/* Kenttä: Sisältö: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = 'id';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Lajittelukriteeri: Sisältö: Otsikko */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['sorts']['title']['order'] = 'DESC';
/* Suodatinkriteeri: Sisältö: Julkaistu */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Suodatinkriteeri: Sisältö: Tyyppi */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'location' => 'location',
);

/* Display: Services */
$handler = $view->new_display('services', 'Services', 'services_1');
$handler->display->display_options['field_language'] = 'en';
$handler->display->display_options['field_language_add_to_query'] = 0;
$handler->display->display_options['path'] = 'locations';
$translatables['locations'] = array(
  t('Master'),
  t('lisää'),
  t('Käytä'),
  t('Palauta oletusarvoihin'),
  t('Lajittele'),
  t('Asc'),
  t('Desc'),
  t('location'),
  t('street'),
  t('number'),
  t('city'),
  t('zip'),
  t('geo'),
  t('id'),
  t('Services'),
);

