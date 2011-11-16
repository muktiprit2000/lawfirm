<?php
 /* File:  settingadmin.php
  * Desc:  Perform any data manipulation tasks, like
  *         editing site settings.
  */
session_start();
include_once("../classfiles/settings.class");                       #8
include_once("../classfiles/ContentDownload.class");

foreach ($_POST as $name => $value)                    
  {
  $$name = $value;
  }
foreach ($_GET as $name => $value) 
{
  $$name = $value;
  }
  
if (!isset($action))                                   
  header("Location: sitesettings.php");

switch ($action)                                        
{
  case "delete":  
  
   
    $s_item= new ContentDownload("1",strval($fid),"");
                                  
    if (isset($s_item))
      try
      {
        $s_item->delete();
      }
      catch(Exception $e)
      {
        echo $e->getMessage();
        exit();
      }
      
        
    break;


  case "Save":                                  
    
    if ($sid)  
    {                               #65
    
      try
      {
         $s_item = Settings::findById($sid);
      }
      catch(Exception $e)
      {
        echo $e->getMessage();
        exit();
      }
      $s_item->setName($settingname);
      $s_item->setAddress($address);
      $s_item->setPhone($phone);
      $s_item->setAdminemail($aemail);
      $s_item->setContemail($cemail);
      $sid = $s_item->save();
      
    }
    else                                                #81
    {
       
       $s_item = new Settings(NULL,$settingname,$address,$phone,$aemail,$cemail);
       $sid = $s_item->save();
    }
    echo "Sita ram...";
	$fileId=1;
	$image=array();
    foreach ($_FILES as $file)                          #89
    {
    	echo "ram...";
      $file_name = $file["name"];
      echo $file_name;
      if ($file["size"] <= 0)
        {$fileId=$fileId+1;
		  continue;}
	
	 
    //$path = "C:/xampp/htdocs/MyWebSites/Law-Firm/images/";
	 $path = "../images/";

	 $target_path = $path.$file_name; 
	 //echo $target_path;
	  if(move_uploaded_file($file['tmp_name'], $target_path))
	   {
    		echo "The file ".  $file_name. " has been uploaded";
		} else
		{
    		echo "There was an error uploading the file, please try again!";
		}
	  $download = new ContentDownload($sid,strval($fileId),$file_name);
      $file_id = $download->savesettings();   
      $fileId=$fileId+1;

	 }
	 

    break;

  
}

header("Location: sitesettings.php");
?>
