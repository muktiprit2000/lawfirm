<?php
$filename="../incfiles/Vars.inc";
require_once("../classfiles/Database.class");
$db = new Database($filename);     	 #37
	 //echo "good";
     $db->useDatabase("Law-FirmCMS");    	 #38
	 //echo "very good";
	 $db->setCollection("pagecontent");	
	 $cxn= $db->getCollection();
	 
	 $pid=stripslashes($_POST['pid']);
	 $pname=stripslashes($_POST['pname']);
	 $ptitle=stripslashes($_POST['ptitle']);
	 $pdes=stripslashes($_POST['pdes']);
	 $meta=stripslashes($_POST['mtitle']);
	 $mkeys=stripslashes($_POST['mkeys']);
	$mdes=stripslashes($_POST['mdes']);
	$isact=stripslashes($_POST['isact']);
	$parid=stripslashes($_POST['parid']);


	 $doc=array('pageid'=>$pid,'pagename'=>$pname,'pagetitle'=>$ptitle,'pagebody'=>$pdes,
	 			'metatitle'=>$meta,'metakeys'=>$mkeys,'metadescription'=>$mdes,'isactive'=>$isact,'parentid'=>$parid);
	 $res=$cxn->insert($doc);
	 
	 

	
	 echo "done insert";
	?>
	
	 