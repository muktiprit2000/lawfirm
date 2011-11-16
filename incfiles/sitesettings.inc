 
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
	text-align: left;
}
.auto-style15 {
	border-style: none;
	border-width: medium;
	text-align: center;
}
.auto-style19 {
	color: #FFFFFF;
}
.auto-style20 {
	border: 1px solid #000000;
	margin-left: 30px;
	margin-right: 0px;
	border-collapse: collapse;
}
.auto-style21 {
	border-style: none;
	border-width: medium;
	background-color: #000080;
}
.auto-style22 {
	border-style: none;
	border-width: medium;
}
</style>
</head>

<body style="width: 843px; height: 531px; margin-left: 154px; margin-top: 50px">

<table style="width: 840px" class="auto-style2">
	<tr>
		<td class="auto-style1" style="height: 34px; width: 815px;"><strong>Administrator Area</strong></td>
	</tr>
	<tr>
		<td class="auto-style4" style="width: 815px" ><br /></td>
	</tr>
	<tr>
		<td>
		<table style="width: 840px; height: 469px" class="auto-style5">
			<tr>
				<td style="width: 211px" class="auto-style6" valign="top">
					<br/>
					<br/>
					<br/>
					<div>
								<dl style="width: 166px; height: 160px;" class="auto-style7">
				                      &nbsp;<span class="BodyText"><dt style="width: 160px"><a href="contentmain1.php"">Content Management</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="sitesettings.php">Site Setting</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="contactmanage.php">Contact Us</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="/practice-areas/EquitableDistribution/">Roles</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="/practice-areas/Alimony/">User</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="logout.php">Logout</a></dt></span>
				                      

				                 </dl>	

						
						<br />

						
					</div>
				
				</td>
				<td class="auto-style2" valign="top" style="width: 692">
					<div>
					   <br />
						<p style="height: 32px" class="auto-style8"><strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
						</strong>
						
						<span class="auto-style9"><em>Site Setting</em></span>
						
						</p>
					</div>
					<div>
						
					
						<table cell0spacing="0" style="width: 91%; height: 280;" class="auto-style20" cellspacing="1">
							<form method="post" enctype="multipart/form-data" action="settingadmin.php">
								<?php
								
								echo "<input type=\"hidden\" name=\"sid\" value=\"".$sid."\">";
								echo "<input type=\"hidden\" name=\"settingname\" value=\"defaultsettings\">";

								?>


							<tr>
								<td class="auto-style21" colspan="2" style="height: 20px; ">&nbsp;<span class="auto-style19"> 
								Site Setting</span></td>
							</tr>
							<tr>
										<td style="width: 254px; height: 63px;" class="auto-style22">&nbsp;
										<strong>Site Logo:</strong></td>
										<td style="height: 63px; width: 319px;" class="auto-style22">
										<input name="logoimage" type="file" style="width: 238px"/>
										&nbsp;<br>&nbsp;
										<?php 
										
										if ($x1===1){
											echo "<a href=\"/images/".$fname1."\" >Show</a>&nbsp;&nbsp;&nbsp;<a href=\"settingadmin.php?action=delete&fid=1\">Remove</a></td>";
										    }
										 ?>
							</tr>
							<tr>
										<td style="width: 254px; height: 26px;" class="auto-style22">&nbsp;
										<strong>Main Address:</strong></td>
										<td class="auto-style22" style="height: 26px; width: 319px">
										<?php
										echo "<textarea name=\"address\"  style=\"width: 250px\">$address</textarea>";
										?>
										&nbsp;</td>
										
							</tr>
							<tr>
										<td style="width: 254px; height: 26px;" class="auto-style22">&nbsp;
										<strong>Phone :</strong></td>
										<td >
										<?php
										echo "<input name=\"phone\" type=\"text\" style=\"width: 175px\" value=\"".$phone."\">";	?>
										&nbsp;</td>
										
							</tr>

							<tr>
										<td style="width: 254px; height: 26px;" class="auto-style22">&nbsp;
										<strong>Email To:</strong></td>
										<td class="auto-style22" style="height: 26px; width: 319px">
										<?php
										echo "<input name=\"aemail\" type=\"text\" style=\"width: 210px\" value=\"".$aemail."\">"; ?>
										&nbsp;</td>
										
							</tr>
							<tr>
										<td style="width: 254px; height: 28px;" class="auto-style22">&nbsp;
										<strong>Contact email To:</strong></td>
										<td class="auto-style22" style="height: 28px; width: 319px">
										<?php
										echo "<input name=\"cemail\" type=\"text\" style=\"width: 210px\" value=\"".$cemail."\">"; ?>
										&nbsp;</td>
							</tr>

							
							<tr>
									<td style="width: 254px" class="auto-style22">&nbsp;
									<strong>Default Header 
									Image:</strong></td>
										<td class="auto-style22" style="width: 319px">
										<input name="topimage" type="file" style="width: 235px">
										&nbsp;<br>&nbsp;
										<?php
										
										if ($x2===1){
											echo "<a href=\"/images/".$fname2."\" rel=\"lightbox\">Show</a>&nbsp;&nbsp;&nbsp;<a href=\"settingadmin.php?action=delete&fid=2\">Remove</a></td>";
										    }
										 ?>
							</tr>
							<tr>
										<td style="width: 254px; height: 26px" class="auto-style22">
										&nbsp; <strong>Default Left Side Image:</strong></td>
										<td style="height: 26px; width: 319px;" class="auto-style22">
										<input name="leftimage" type="file" style="width: 242px">
										&nbsp;<br>&nbsp;
										<?php
										
										if ($x3===1){
											echo "<a href=\"/images/".$fname3."\" rel=\"lightbox\">Show</a>&nbsp;&nbsp;&nbsp;<a href=\"settingadmin.php?action=delete&fid=3\">Remove</a></td>";
										    }
										 ?>

							</tr>
								
								
							<tr>
								<td class="auto-style15" align="center" colspan="2" style="height: 32px; ">
								
									&nbsp;&nbsp;<input name="action" type="submit" value="Save" style="width: 58px" /></td>
							</tr>
							</form>
						</table>
											
					</div>
				</td>
			</tr>
		</table>
		</td>
	</tr>
	
</table>


</body>

</html>
