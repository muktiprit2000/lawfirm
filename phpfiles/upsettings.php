<?php
require_once("../classfiles/Database.class");
$db = new Database();     	 #37
	 //echo "good";
     $db->useDatabase("Law-FirmCMS");    	 #38
	 //echo "very good";
	 $db->setCollection("settings");	
	 $cxn= $db->getCollection();
	 
	 $sid=stripslashes($_POST['sid']);
	 $add=stripslashes($_POST['add']);
	 $email1=stripslashes($_POST['aemail']);
	 $email2=stripslashes($_POST['cemail']);
	 
	 $doc=array('sid'=>$sid,'add'=>$add,'aemail'=>$email1,'cemail'=>$email2);
	 $res=$cxn->insert($doc);
	 
	 

	
	 echo "done insert";
	?>
