<?php
require_once("../classfiles/Session.class");
$sess=new Session();
if($sess->getVariable("auth")!="yes")
{
	header("Location: ../login/login-OO.php");
	exit();
}
?>


<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="en-us" http-equiv="Content-Language" />
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title>content Management page</title>
<style type="text/css">
.auto-style1 {
	text-align: center;
	color: #000000;
	font-size: large;
}
.auto-style2 {
	border: 1px solid #000000;
}
.auto-style4 {
	background-color: #000080;
}
.auto-style5 {
	border-style: solid;
	border-width: 1px;
}
.auto-style6 {
	border-width: 1px;
}
.auto-style7 {
	margin-left: 25px;
	margin-top: 0px;
}
.auto-style8 {
	text-align: left;
}
.auto-style9 {
	font-size: large;
}
.auto-style10 {
	color: #FFFFFF;
	border: 1px solid #FFFFFF;
	background-color: #000080;
}
.auto-style13 {
	text-align: center;
	color: #FFFFFF;
	border: 1px solid #FFFFFF;
	background-color: #000080;
}
.auto-style15 {
	border-color: #000000;
	border-width: 0px;
	border-collapse: collapse;
}
.auto-style16 {
	text-align: center;
	color: #FFFFFF;
	background-color: #000080;
}
</style>
</head>

<body style="width: 826px; height: 526px; margin-left: 154px; margin-top: 50px">

<table style="width: 831px" class="auto-style2">
	<tr>
		<td class="auto-style1" style="height: 34px; width: 817px;"><strong>Administrator Area</strong></td>
	</tr>
	<tr>
		<td class="auto-style4" style="width: 817px; height: 23px;"><br /></td>
	</tr>
	<tr>
		<table style="width: 831px; height: 469px" class="auto-style5">
			<tr>
				<td style="width: 211px" class="auto-style6" valign="top">
					<div>
							<br />
							<br />
								<dl style="width: 138px; height: 129px;" class="auto-style7">
				                      &nbsp;<span class="BodyText"><dt style="width: 160px"><a href="contentmain1.php"">Content Management</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="sitesettings.php">Site Setting</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="/practice-areas/EquitableDistribution/">Roles</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="/practice-areas/Alimony/">User</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="logout.php">Logout</a></dt></span>
				                      

				                 </dl>	

						
							<br />
							<br />

						
						<br />

						
					</div>
				
				</td>
				<td class="auto-style2" valign="top" style="width: 683px">
					<div>
					<br />
					<br />
						<p style="height: 32px" class="auto-style8"><strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
						</strong>
						<span class="auto-style9"><strong>Content Management of <?php echo $par_name ?></strong></span></p>
						<br/>
						<p>&nbsp;&nbsp;&nbsp;&nbsp;<?php
						 echo "<a id=\"AddNewwLink\" class=\"adminlink\" href=\"".$addlink."\">Add New Page<img  src='../images/add.gif' border='0'></a>";
						 ?>
						 </p>
						<br/>
					</div>
					
					<div>
						<table style="width: 100%" cellpadding="0" cellspacing="0" class="auto-style15">
						<tr>
							<td class="auto-style10" >Page Name</td>
							<td class="auto-style13" style="width: 10%">View</td>
							<td class="auto-style13" style="width: 10%">Edit</td>
							<td class="auto-style13" style="width: 15%">Delete</td>
							
						</tr>
						<?php
							for ($i = 1; $i<$row ; $i++)	
						    {
							$valuetemp=array();  
							$col=1;  
							 foreach($links[$i] as $key => $value) {
							 	$valuetemp[$col]=$value;
							 	$col++;
							 	}
								echo "<tr>"
							."<td class=\"auto-style5\" style=\"width: 387px\">".$valuetemp[1]."</td>"
							."<td class=\"auto-style5\" align=\"center\"><a href=\"../webpages/index.php\" target=\"_blank\">View</a></td>"
							."<td class=\"auto-style5\" align=\"center\"><a href=\"".$valuetemp[2]."\" >Edit</a></td>"
							."<td class=\"auto-style5\" align=\"center\"><a href=\"".$valuetemp[3]."\">Delete</a></td>"
						."</tr>\n";
						    
							}
						?>
						
						</table>
					</div>
					
				</td>
			</tr>
		</table>
	
	</tr>
	
</table>


</body>

</html>

