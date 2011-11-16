<?php
   /*Displays a Web page that has four levels:
   *          1) content management(home), 2) edit 3) Manage and 4) add a web page.
   */

require_once("../classfiles/Session.class");
include_once("../classfiles/ContentDownload.class");
include_once("../classfiles/pagedetails.class"); 
$sess=new Session();
if($sess->getVariable("auth")!="yes")
{
	header("Location: index.php");
	exit();
}

//$page=array();
$links=array(array());
$admin = FALSE;
$base_url = "contentmain1.php";
$trail = "<a href='$base_url'>Content Management</a>";


	$page["browse_level"] = isset($_GET['browse_level']) ?
      $_GET['browse_level'] : "ContManage";
	
  switch ($page["browse_level"])
  {
    case "ContManage":
		  Try
	      {
	        $pagedetails = Pagedetail::findAllmain ();           #51
	      }
	      catch(Exception $e)
	      {
	        echo $e->getMessage();
	        exit();
	      }
	      $body_links = "";
	      $row=1;
	      foreach ($pagedetails as $pagedetail)             #59
	      {
	        $links[$row]['name']=$pagedetail->getName();
	         
	        $links[$row]['managelink']="$base_url?par_id=" . $pagedetail->getId()
	          . "&browse_level=manage"; 
			$links[$row]['editlink']="$base_url?page_id=" . $pagedetail->getId()
	          . "&browse_level=edit";
	        	       
	        $row++;
	        
	      }
	     
	      include("../incfiles/comp-OO.inc");
	      break;
	  
	  case "edit":
	  		
	        $page_id=$_GET['page_id'];
	  		$pagedetail = Pagedetail::findById($page_id);
	  		$parid=$pagedetail->getParId();
	  		$pagename=$pagedetail->getName();
	  		
	  		$pagetitle=$pagedetail->getPagetitle();
	  		
	  		$description=$pagedetail->getDescription();
	  		
	  		$metatitle=$pagedetail->getMetatitle();
	  		
	  		$metakeys=$pagedetail->getMetakeys();
	  		
	  		$metadesc=$pagedetail->getMetadesc();
	  		$cd= new ContentDownload("1","1","asdsa");
			$fname1=$cd->findByIdContforP($page_id,"1");
			 
			 if ($fname1!==NULL)
				$x1=1;
			
			$fname2=$cd->findByIdContforP($page_id,"2");
			 
			 if ($fname2!==NULL)
				$x2=1;
	

	  		include("../incfiles/compdetail-OO.inc");
			break;	
		
	case "manage":
	        $par_id=$_GET['par_id'];
	        

	        $pdetail=Pagedetail::findById($par_id);
	        $par_name=$pdetail->getName();
			$page_id=$pdetail->getId();
	        $addlink="$base_url?par_id=" . $par_id
	          . "&browse_level=add";
	        $pagedetails = Pagedetail::findChildsBypId($par_id);
	        $row=1;
	        foreach ($pagedetails as $pagedetail)             #59
	      {
	        $links[$row]['name']=$pagedetail->getName();
	        $links[$row]['editlink']="$base_url?page_id=" . $pagedetail->getId()
	          . "&browse_level=edit";	        
			$links[$row]['pageid']= $pagedetail->getId();
	          
	        
			$row++;
	         
	      }
			$cd= new ContentDownload("1","1","asdsa");
			$i=1;
			$fname1=$cd->findByIdContforP($page_id,"1");
			 
			 if ($fname1!==NULL)
				$x1=1;
			
			$i++;
			$fname2=$cd->findByIdContforP($page_id,"1");
			 
			 if ($fname2!==NULL)
				$x2=1;

			include("../incfiles/pagemanage.inc");

			break;  
	
	case "delete":
			$pageid=$_GET['page_id'];
			//echo $pageid;
			echo "<form method=\"post\" enctype=\"multipart/form-data\" action=\"Admin-OO.php\">";
			echo "<input type=\"hidden\" name=\"pageid\" value=\"$pageid\" />";		
			echo "<input type=\"submit\" name=\"action\" value=\"delete\" />";  
			echo "</form>";
			break;
  
  
  	case "add":
  			
  			$parid=$_GET['par_id'];
			$page_id=NULL;
  			$pagename="Adding sub page...";
	  		$pagetitle="";
	  		$description="";
	  		$metatitle="";
	  		$metakeys="";
	  		$metadesc="";
	  		
	  		include("../incfiles/compdetail-OO.inc");
			break;	

  	
  			echo "shri ganesh";
  	}
 
?>

