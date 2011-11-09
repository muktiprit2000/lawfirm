<?php

// Connect to Mongo and set DB and Collection
$mongo = new Mongo();
$db = $mongo->myfiles;
$gridFS = $db->getGridFS();
header('Content-type: image/jpg');
$image = $gridFS->findOne($_GET['file']);
echo $image->getBytes(); 


?>
