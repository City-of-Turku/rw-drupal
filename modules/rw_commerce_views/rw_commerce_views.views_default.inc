<?php
/**
* Implementation of hook_views_default_views().
**/

function rw_commerce_views_views_default_views() {
 $views=array();

 $files = file_scan_directory(drupal_get_path('module', 'rw_commerce_views'). '/views', '/.*\.view$/');
 foreach ($files as $filepath => $file) {
   include($filepath);
   if (isset($view)) {
     $views[$view->name] = $view;
   }
 }

 return $views;
}
