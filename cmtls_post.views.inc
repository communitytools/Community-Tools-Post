<?php


function cmtls_post_views_query_alter(&$view, &$query) {
  if($view->name == 'cmtls_posts') {
    $config = cmtls_get_app_config();
    
    if($config['cmtls_post']['sorting_field'] && !isset($_POST['sort_by'])) {
      $query->orderby[1]['field'] = $_POST['sort_by'] = $_GET['sort_by'] = $config['cmtls_post']['sorting_field'];
    }

    if($config['cmtls_post']['sorting_dir'] && !isset($_POST['sort_order'])) {
      $query->orderby[1]['direction'] = $_POST['sort_order'] = $_GET['sort_order'] = $config['cmtls_post']['sorting_dir'];
    }
  }
}
