<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title>store image file to db via gridfs</title>
</head>

<body>


<?php

// Connect to Mongo and set DB and Collection
$mongo = new Mongo();
$db = $mongo->myfiles;

// GridFS
$grid = $db->getGridFS();

// The file's location in the File System
$path = "../images/";

$filename = "hawaii 2006 154.jpg";

// Note metadata field & filename field
$storedfile = $grid->storeFile($path.$filename, array("metadata" => array("filename" => $filename), "filename" => $filename));


// Return newly stored file's Document ID
echo $storedfile;

?>
</body>

</html>
