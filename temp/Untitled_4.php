<html>
  <head><title>My Uploader</title></head>
  <body>

<?php
include "mongo.php";

if( $_FILES["f"] ) {
  $m = new Mongo();
  $m->selectDB( "phpsite" )->getGridFS()->storeUpload( "f" );
  echo "Saved " . $_FILES["f"]["name"] . "\n";
}
?>

    <form method="POST" enctype="multipart/form-data">
       Filename: <input type="file" name="f"><br />
       <input type="submit" value="upload" />
    </form>

  </body>
</html><?php
require_once("../classfiles/Database.class");
$db = new Database();     	 #37
	 //echo "good";
     $db->useDatabase("Law-FirmCMS");    	 #38
	 //echo "very good";
	 $db->setCollection("pagecontent");	
	 $cxn= $db->getCollection();
$var='img01.jpg';
$cxn->update(array('pageid'=>'1'),array('$set'=>array('topimage'=>$var)));
/*$cxn->update(array('pageid'=>'$this->id'),array('$set' => array('pagebody'=>'$this->description',
	  'metatitle'=>'$this->metatitle', 'metakeys'=>'$this->metakeys', 'metadescription'=>'$this->metadesc',
	  'parentid'=>'$this->parId')));*/
?>	  