<?php
require_once("../classfiles/Database.class");
$id="1";
$db = new Database("../incfiles/Vars.inc");
    $db->useDatabase("Law-FirmCMS");
	//echo "fgfd";
	$cxn=$db->setCollection("fs.files");
	//$db->setgridFS();
	//echo "asdsa";
    //$cxn= $db->getgridFS();

	//$vars=$cxn->findOne(array('pageid'=>$id));
	//rows=count(vars);
	 //$mongoid->{'$id'} ;
    $cxn->findOne(array('pageid'=>$id));
    echo $var;
    //$results=$cxn->remove($vars);
	
    /*if (!$results)
    {
      throw new Exception("Problem deleting data: " +
                          $cxn->error);
    }*/
    echo "removed";
    ?>	 
	 