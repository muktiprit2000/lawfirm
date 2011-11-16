<?php
 /* File:  Admin-OO.php
  * Desc:  Perform any data manipulation tasks, like
  *        creating, editing, or deleting content items.
  */
session_start();
include_once("../classfiles/pagedetails.class");                       #8
include_once("../classfiles/ContentDownload.class");

foreach ($_POST as $name => $value)                    
  {
  $$name = $value;
  }
foreach ($_GET as $name => $value) 
{
echo $name;
  echo $value; 
  $$name = $value;
  }
if (!isset($action))                                   
  header("Location: contentmain1.php");
echo $action;
switch ($action)                                        
{
  case "Update":  
  
  
  for($i=0;$i<count($deletepage);$i++)
  {
  	
  		$page_item= Pagedetail::findById($deletepage[$i]);
        $page_item->delete();
        
      }
    
        
    break;
                              #37
    /*$page_item = Pagedetail::findById($pageid);
    
    if (isset($page_item))
      try
      {
      echo "bye";
        $page_item->delete();
      }
      catch(Exception $e)
      {
        echo $e->getMessage();
        exit();
      }*/

   

  case "Save":                                  
    
    if ($pageid)  
    {                               #65
    
      try
      {
         $page_item = Pagedetail::findById($pageid);
      }
      catch(Exception $e)
      {
        echo $e->getMessage();
        exit();
      }
      $page_item->setPagetitle($pagetitle);
      $page_item->setName($pagetitle);
      $page_item->setDescription($description);
      $page_item->setMetatitle($metatitle);
      $page_item->setMetakeys($metakeys);
      $page_item->setMetadesc($metadesc);
      $pageid = $page_item->save();
      
    }
    else                                                #81
    {
       
      $pagename=$pagetitle;
       $page_item = new Pagedetail(NULL,$pagename,
        $pagetitle, $description, $metatitle,
        $metakeys, $metadesc,$parentid);
        $pageid = $page_item->save();
        
    }
    
    echo "Sita ram...";
	$fileId=1;
    foreach ($_FILES as $file)                          #89
    {
    	echo "ram...";
      $file_name = $file["name"];
      echo $file_name;
      if ($file["size"] <= 0)
        {$fileId=$fileId+1;
		  continue;}
	
	      
      //$path = "C:/xampp/htdocs/MyWebSites/Law-Firm/images/";
		$path = "git@github.com:muktiprit2000/lawfirm.git/images/";
	 $target_path = $path . $file_name; 
	  if(move_uploaded_file($file['tmp_name'], $target_path))
	   {
    		echo "The file ".  $file_name. " has been uploaded";
		} else
		{
    		echo "There was an error uploading the file, please try again!";
		}
	  $download = new ContentDownload($pageid,strval($fileId),$file_name);
      $file_id = $download->save();
      $fileId=$fileId+1;


     }
     

    break;

  case "Cancel":
    break;
}

header("Location: contentmain1.php");
?>
