<?php
$mongo = new Mongo();
$db = $mongo->myfiles;
$gridFS = $db->getGridFS();
     

	$midimage = "../images/1_sitelogo.jpg";

	

	 $metadata=array('pageid'=>'1','fileId'=>"1");
	 
	$storedfile = $gridFS->storeFile($midimage, $metadata);
	$leftimage="../images/1_leftimage.jpg";
	$metadata=array('pageid'=>'1' ,'fileId'=>"2");
	$storedfile1 = $gridFS->storeFile($leftimage, $metadata);
?>