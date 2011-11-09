<?php
echo "ShriGanesh";
$target_path = "../images/";

$target_path = $target_path . basename( $_FILES['uploadedfile']['name']); 
$name=basename($_FILES['uploadedfile']['name']);
require_once("../classfiles/Database.class");
$db = new Database();     	 #37
	 //echo "good";
     $db->useDatabase("Law-FirmCMS");
      $cxn=$db->getdbConnection();  
  $grid = $cxn->getGridFS();
//$grid->update(array("filename" => "foo"), $newObj);
$id = $grid->storeUpload('uploadedfile',$name);

if(move_uploaded_file($_FILES['uploadedfile']['tmp_name'], $target_path)) {
    echo "The file ".  basename( $_FILES['uploadedfile']['name']). 
    " has been uploaded";
} else{
    echo "There was an error uploading the file, please try again!";
}


?>