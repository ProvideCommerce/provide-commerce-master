<?php
require_once('inc/secure.php');
require_once('../inc/includes.php');
includes(array('admin/actions/load.php', 'admin/actions/transformxml.php'));

$_SESSION['referer'] = 'http://' . $_SERVER['HTTP_HOST'] . $_SERVER['REQUEST_URI'];
require_once('inc/header.php');
?>

<h2><?php _e('Recent Comments'); ?></h2>
<?php 
loadHam(5);  
?>
<hr />
<h2><?php _e('Recent Spam'); ?></h2>
<?php 
loadSpam(5);  
?>

<?php require_once('inc/footer.php'); ?>