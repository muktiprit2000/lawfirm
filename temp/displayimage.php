<?php

// Connect to Mongo and set DB and Collection
$mongo = new Mongo();
$db = $mongo->myfiles;     

// GridFS
$gridFS = $db->getGridFS();     

// Find image to stream
//$image = $gridFS->findOne("hawaii 2006 154.jpg");
$image = $gridFS->findOne(
         array("_id" => new MongoId("4e16117b074102880a000001"))
         );
// Stream image to browser
header('Content-type: image/jpeg');
echo $image->getBytes();
//echo $image->getFile()->getBytes();
?>