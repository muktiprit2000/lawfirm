<?php
require_once("../classfiles/Session.class");
$sess=new Session();
if($sess->getVariable("auth")!="yes")
{
	header("Location: login-OO.php");
	exit();
}

include_once("../classfiles/contact.class");  

                    
$base_url = "contactmanage.php";
$trail = "<a href='$base_url'>Contact Us</a>";

Try
{
$c_items = Contact::findAll();           #51
}
catch(Exception $e)
{
echo $e->getMessage();
exit();
}
	      
	      $row=1;
	      foreach ($c_items as $c_item)             #59
	      {
	        $links[$row]['name']=$c_item->getName();
	         
	         // echo $links['editlink'];
			$links[$row]['email']=$c_item->getEmail();
	          
			$links[$row]['edate']=$c_item->getEntryDate();
	        
	        
	        $row++;
	        
	      }
	     
	
include("../incfiles/contactmanage.inc");
	     

  			//echo "shri ganesh";

?>

