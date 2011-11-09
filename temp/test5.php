<?php
include_once("../classfiles/Database.class");
include_once("../classfiles/ContentDownload.class");
 $db = new Database("../incfiles/Vars.inc");
$db->useDatabase("Law-FirmCMS");
	//echo "fgfd";
	$db->setgridFS();
	//echo "asdsa";
    $cxn=$db->getgridFS(); 
    $res=$cxn->findOne(array('setid'=>"1",'fileId'=>"1"));
    
        echo $res['setid'];
        echo $res['fileId'];
          
?>