<?php

// Connect to Mongo and set DB and Collection
require_once("../classfiles/Database.class");
$db = new Database();     	 #37
	 //echo "good";
     $db->useDatabase("Law-FirmCMS");    	 #38
     $var=$db->getdbConnection();
//$prefix = 'fs.files';
// GridFS
$gridFS = $var->getGridFS();     

// Find image to stream
//$image = $gridFS->findOne("hawaii 2006 154.jpg");
$image = $gridFS->findOne(array("imagename" => 'midimage'));
// Stream image to browser
echo $image;
header('Content-type: image/jpeg');
echo $image->getBytes();
//echo $image->getFile()->getBytes();
?>