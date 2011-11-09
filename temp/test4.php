<?php

echo "welcome";
require_once("../classfiles/Database.class");
$db = new Database();                     #37
$db->useDatabase("useraccount"); 
$db->setCollection("pagecontent");
$var=$db->getCollection();
echo $var;
 
echo " horey....";

?>
	 