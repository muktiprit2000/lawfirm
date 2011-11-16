<?php
 /* File:  settingadmin.php
  * Desc:  Perform any data manipulation tasks, like
  *         editing site settings.
  */
session_start();
include_once("../classfiles/contact.class");                       #8

foreach ($_POST as $name => $value)                    
  {
  $$name = $value;
  echo $name;
  echo $value;
  }
foreach ($_GET as $name => $value) 
{
  $$name = $value;
  }
  
if (!isset($action))                                   
  header("Location: sitesettings.php");

switch ($action)                                        
{
  case "Update":  
  
  
  for($i=0;$i<count($deletecontact);$i++)
  {
  	
  		$c_item= Contact::findById($deletecontact[$i]);
        $c_item->delete();
        
      }
    
        
    break;


 

  case "Cancel":
    break;
}

header("Location: contactmanage.php");
?>
