<?php
require_once("../classfiles/Session.class");
$sess=new Session();
if($sess->getVariable("auth")!="yes")
{
	header("Location: ../phpfiles/Login-OO.php");
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
.auto-style14 {
	text-align: center;
	border-style: solid;
	border-width: 1px;
}
.auto-style15 {
	border-color: #000000;
	border-width: 0px;
	border-collapse: collapse;
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
				<td style="width: 211px" class="auto-style6" valign="top">
					<div>
							<br />
							<br />
							<br />
							<br />
								<dl style="width: 138px; height: 129px;" class="auto-style7">
				                      &nbsp;<span class="BodyText"><dt style="width: 160px"><a href="/practice-areas/FamilyLaw/">Content Management</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="/practice-areas/Divorce/">Site Setting</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="/practice-areas/EquitableDistribution/">Roles</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="/practice-areas/Alimony/">User</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="/practice-areas/ChildCustody/">Logout</a></dt></span>
				                      

				                 </dl>	

						
						<br />

						
					</div>
				
				</td>
				<td class="auto-style2" valign="top" style="width: 683px">
					<div>
					<br />
					<br />
						<p style="height: 32px" class="auto-style8"><strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
						</strong>
						<span class="auto-style9"><strong>Content Management</strong></span></p>
					</div>
					<div>
						<table style="width: 623px" cellpadding="0" cellspacing="0" class="auto-style15">
						<tr>
							<td class="auto-style10" style="width: 387px">Page Name</td>
							<td class="auto-style13">View</td>
							<td class="auto-style13">Edit</td>

						</tr>
						<tr>
							<td class="auto-style5" style="width: 387px">HOME</td>
							<td class="auto-style14"><a href="index.php">View</a></td>
							<td class="auto-style14"><a href="../adminpages/Content.aspx?id=1">Edit</a></td>

						</tr>
						<tr>
							<td class="auto-style5" style="width: 387px">ATTORNEY PROFILE  </td>
							<td class="auto-style14">View</td>
							<td class="auto-style14">Edit</td>

						</tr>
						<tr>
							<td class="auto-style5" style="width: 387px">FIRM OVERVIEW </td>
							<td class="auto-style14">View</td>
							<td class="auto-style14">Edit</td>
						</tr>
						<tr>
							<td class="auto-style5" style="width: 387px">PRACTICE AREAS </td>
							<td class="auto-style14">View</td>
							<td class="auto-style14">Edit</td>
						</tr>
						<tr>
							<td class="auto-style5" style="width: 387px; height: 23px">NEWS</td>
							<td class="auto-style14" style="height: 23px">View</td>
							<td class="auto-style14" style="height: 23px">Edit</td>
						</tr>
						<tr>
							<td class="auto-style5" style="width: 387px; height: 23px">CONTACT US </td>
							<td class="auto-style14" style="height: 23px">View</td>
							<td class="auto-style14" style="height: 23px">Edit</td>

						</tr>
						</table>
					</div>
					
				</td>
			</tr>
		</table>
	
	</tr>
	
</table>


</body>

</html>
