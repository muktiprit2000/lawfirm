<?php
require_once("../classfiles/Session.class");
$sess=new Session();
if($sess->getVariable("auth")!="yes")
{
	header("Location: index.php");
	exit();
}

include_once("../classfiles/settings.class");  
include_once("../classfiles/ContentDownload.class");
                    
$base_url = "sitesettings.php";
$trail = "<a href='$base_url'>Site Setting</a>";
$fname1="";$fname2=NULL;$fname3=NULL;	
//$path="/images/";
$sid="1";
$s_item = Settings::findById($sid);
$address=$s_item->getAddress();
$phone=$s_item->getPhone();
$aemail=$s_item->getAdminemail();
$cemail=$s_item->getContemail();
$cd= new ContentDownload("1","1","asdsa");
$i=1;
$fname1=$cd->findByIdContforS($sid,strval($i));
 $x1=0;$x2=0;$x3=0;
 if ($fname1!==NULL)
	$x1=1;

$i++;
$fname2=$cd->findByIdContforS($sid,strval($i));
 
 if ($fname2!==NULL)
	$x2=1;
	
$i++;
$fname3=$cd->findByIdContforS($sid,strval($i));
 
 if ($fname3!==NULL)
	$x3=1;
	
include("../incfiles/sitesettings.inc");
	     

  		//	echo "shri ganesh";

?>

