<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title>phpmongotest1</title>
</head>

<body>
<?php
// connect
$m = new Mongo();

// select a database
$db = $m->lfm;

// select a collection (analogous to a relational database's table)
$collection = $db->webpages;

//echo $obj[title];

// find everything in the collection
//$cursor = $collection->find();

// iterate through the results
//foreach ($cursor as $obj) {
  //  echo $obj["title"] . "\n";
 //}
$file1=$_POST['File1'];
$add=$_POST['TextArea1'];
$file2=$_POST['File1'];
$des=$_POST['TextArea2'];

// add a record
$filter=array("pageid"=>"1");
$obj = array( "pageid"=>"1","pagename"=>"home","Banner" => $file1, "Address" => $add, "Image" => $file2,  "Desc" => $des);
$collection->update($filter,$obj,true);



?>


</body>

</html>
