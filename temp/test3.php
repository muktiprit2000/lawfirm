<?php

$m = new Mongo();
$db = $m->selectDB("useraccount");

$list = $db->listCollections();
foreach ($list as $collection) {
    echo "removing $collection... ";
    
}

?>
