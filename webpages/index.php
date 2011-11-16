 <?php
include_once("../classfiles/pagedetails.class");  
include_once("../classfiles/settings.class");  
include_once("../classfiles/ContentDownload.class");
$base_url = "http://law-firm.orchestra.io";
$trail = "<a href='$base_url'>Home</a>";

	$page["browse_level"] = isset($_GET['browse_level']) ?
      $_GET['browse_level'] : "Home";
	
$s_item = Settings::findById("1");
$address=$s_item->getAddress();
$phone=$s_item->getPhone();
$aemail=$s_item->getAdminemail();
$cemail=$s_item->getContemail();
$fname1=""; $fname2=""; $fname3="";
	
  switch ($page["browse_level"])
  {
    case "Home":
		Try
	      {
	        $pagedetails = Pagedetail::findAll();           #51
	      }
	      catch(Exception $e)
	      {
	        echo $e->getMessage();
	        exit();
	      }
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
	        $p_id="1";
	      	$pagedet = Pagedetail::findById($p_id);
	  		$parid=$pagedet->getParId();
	  		$pagename=$pagedet->getName();
	  		$pagetitle=$pagedet->getPagetitle();
	  		$description=$pagedet->getDescription();
	  		$pagedetails = Pagedetail::findChildsBypId($p_id);
	  		$row=1;
	        foreach ($pagedetails as $pagedetail)             #59
	      {
	        $links[$row]['name']=$pagedetail->getName();
	        $links[$row]['pagelink']="$base_url?page_id=" . $pagedetail->getId()
	          . "&browse_level=links";	        
			
			$row++;
	         
	      }
	  		
			$cd= new ContentDownload("1","1","asdsa");
			$fname1=$cd->findByIdContforS("1","1");
	  		$fname2=$cd->findByIdContforP("1","1");
 
			 if ($fname2===NULL)
				$fname2=$cd->findByIdContforS("1","2");
				
 			$fname3=$cd->findByIdContforP("1","2");
			 if ($fname3===NULL)
				$fname3=$cd->findByIdContforS("1","3");

	      include("/child/sweethome.inc");
	      
	      break;
	  
	  case  "links":
	      
		 	$page_id=$_GET['page_id'];
		 	
	  		$pagedetail = Pagedetail::findById($page_id);
	  		$parid=$pagedetail->getParId();
	  		$pagename=$pagedetail->getName();
	  		$pagetitle=$pagedetail->getPagetitle();
	  		$description=$pagedetail->getDescription();
	  		$pagedetails = Pagedetail::findChildsBypId($page_id);

	  		$row=1;
	        foreach ($pagedetails as $pagedetail)             #59
	      {
	        $links[$row]['name']=$pagedetail->getName();
	        $links[$row]['pagelink']="$base_url?page_id=" . $pagedetail->getId()
	          . "&browse_level=leftlinks";	        
			
			$row++;
	         
	      }
			
			$cd= new ContentDownload("1","1","asdsa");
			$fname1=$cd->findByIdContforS("1","1");
	  		$fname2=$cd->findByIdContforP($page_id,"1");
 
			 if ($fname2===NULL)
				$fname2=$cd->findByIdContforS("1","2");
				
 			$fname3=$cd->findByIdContforP($page_id,"2");
			 if ($fname3===NULL)
				$fname3=$cd->findByIdContforS("1","3");
			include("/child/webpages.inc");

			break;
			
	case "leftlinks";
			
			$page_id=$_GET['page_id'];
		 	
	  		$pagedetail = Pagedetail::findById($page_id);
	  		$parid=$pagedetail->getParId();
	  		$pagename=$pagedetail->getName();
	  		$pagetitle=$pagedetail->getPagetitle();
	  		$description=$pagedetail->getDescription();
	  		$parentinfo=Pagedetail::findById($parid);
	  		$parname=$parentinfo->getName();
	  		$pagedetails = Pagedetail::findChildsBypId($parid);

	  		$row=1;
	        foreach ($pagedetails as $pagedetail)             #59
	      {
	        $links[$row]['name']=$pagedetail->getName();
	        $links[$row]['pagelink']="$base_url?page_id=" . $pagedetail->getId()
	          . "&browse_level=leftlinks";	        
			
			$row++;
	         
	      }
	      $cd= new ContentDownload("1","1","asdsa");
			$fname1=$cd->findByIdContforS("1","1");
	  		$fname2=$cd->findByIdContforP($page_id,"1");
 
			 if ($fname2===NULL)
				$fname2=$cd->findByIdContforS("1","2");
				
 			$fname3=$cd->findByIdContforP($page_id,"2");
			 if ($fname3===NULL)
				$fname3=$cd->findByIdContforS("1","3");

	      include("/child/leftlinks.inc");

		break;
			
}
?>	

