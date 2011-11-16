<?php
require_once("../classfiles/Session.class");
$sess=new Session();
if($sess->getVariable("auth")!="yes")
{
	header("Location: index.php");
	exit();
}
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="en-us" http-equiv="Content-Language" />
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title>adminhomepage</title>
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
}
.auto-style8 {
	text-align: center;
}
.auto-style9 {
	font-size: large;
}
</style>
</head>

<body style="width: 826px; height: 526px; margin-left: 154px; margin-top: 50px">

<table style="width: 831px" class="auto-style2">
	<tr>
		<td class="auto-style1" style="height: 34px; width: 817px;"><strong>Administrator Area</strong></td>
	</tr>
	<tr>
		<td class="auto-style4" style="width: 817px"><br /></td>
	</tr>
	<tr>
		<table style="width: 831px; height: 469px" class="auto-style5">
			<tr>
				<td style="width: 211px" class="auto-style6">
					<div>
								<dl style="width: 166px; height: 160px;" class="auto-style7">
				                      &nbsp;<span class="BodyText"><dt style="width: 160px"><a href="contentmain1.php">Content Management</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="sitesettings.php">Site Setting</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="contactmanage.php">Contact Us</a></dt></span>

				                      &nbsp;<span class="BodyText"><dt><a href="/practice-areas/EquitableDistribution/">Roles</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="/practice-areas/Alimony/">User</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="logout.php">Logout</a></dt></span>
				                      

				                 </dl>	

						
						<br />

						
					</div>
				
				</td>
				<td class="auto-style2" valign="top" style="width: 683px">
					<div>
					<br />
					<br />
						<p style="height: 32px" class="auto-style8"><strong>  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
						<span class="auto-style9">Wel-Come to Kevin Carey Administrator Area</span></strong></p>
					</div>
				</td>
			</tr>
		</table>
	
	</tr>
	
</table>


</body>

</html>
