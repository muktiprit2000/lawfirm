<?php
require_once("../classfiles/Session.class");
$sess=new Session();
if($sess->getVariable("auth")!="yes")
{
	header("Location: index.php");
	exit();
}

include_once("../classfiles/contact.class");  

                    
$base_url = "contactmanage.php";
$trail = "<a href='$base_url'>Contact Us</a>";

$page["browse_level"] = isset($_GET['browse_level']) ?
      $_GET['browse_level'] : "ContactManage";
	
switch ($page["browse_level"])
{
 case "ContactManage":

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
	         
			$links[$row]['email']=$c_item->getEmail();
	        
			$links[$row]['edate']=$c_item->getEntryDate();
	        
	        $links[$row]['contactid']=$c_item->getId(); 
	        $links[$row]['contactlink']="$base_url?cont_id=" . $c_item->getId(). "&browse_level=info"; 
	          
	        
	        $row++;
	        
	      }
	      include("../incfiles/contactmanage.inc");

	      break;
 case "info":	     
   		 $cont_id=$_GET['cont_id'];
	  		$c_item = Contact::findById($cont_id);
	  		
	  		$name=$c_item->getName();
	  		
	  		$email=$c_item->getEmail();
	  		
	  		$phone=$c_item->getPhone();
	  		
	  		$subject=$c_item->getSubject();
	  		
	  		$message=$c_item->getMessage();
	  		
	  		include("../incfiles/contactinfo.inc");

	break;
	     
}
  			//echo "shri ganesh";

?>

