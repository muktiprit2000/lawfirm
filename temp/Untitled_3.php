<?php
require_once("../classfiles/Database.class");
$db = new Database();     	 #37
	 //echo "good";
     $db->useDatabase("Law-FirmCMS");    	 #38
     $var=$db->getdbConnection();
//$prefix = 'fs.files';
// GridFS
$grid = $var->getGridFS();     

// Find image to stream
//$image = $gridFS->findOne("hawaii 2006 154.jpg");
$file = $grid->findOne(array("pageid"=>'1',"fileId" => '1'));
// Stream image to browser
$id = $file->file['_id'];                    // Get the files ID
$var1= $grid->delete($id); 
echo $var1;
?>