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
.auto-style11 {
	margin-bottom: 0px;
}
.auto-style13 {
	background-color: #000080;
	color: #FFFFFF;
}
.auto-style14 {
	margin-top: 6px;
}
.auto-style15 {
	text-align: center;
}
.auto-style16 {
	margin-top: 14px;
}
.auto-style17 {
	margin-top: 18px;
}
.auto-style18 {
	margin-top: 13px;
}
.auto-style19 {
	margin-top: 25px;
}
.auto-style20 {
	margin-top: 20px;
}
.auto-style21 {
	margin-top: 17px;
}
</style>
</head>

<body style="width: 819px; height: 526px; margin-left: 154px; margin-top: 50px">

<table style="width: 840px" class="auto-style2">
	<tr>
		<td class="auto-style1" style="height: 34px; width: 817px;"><strong>Administrator Area</strong></td>
	</tr>
	<tr>
		<td class="auto-style4" style="width: 817px" ><br /></td>
	</tr>
	<tr>
		<table style="width: 816px; height: 469px" class="auto-style5">
			<tr>
				<td style="width: 211px" class="auto-style6" valign="top">
					<br/>
					<br/>
					<br/>
					<div>
								<dl style="width: 166px; height: 160px;" class="auto-style7">
				                      &nbsp;<span class="BodyText"><dt style="width: 160px"><a href="contentmain1.php"">Content Management</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="sitesettings.php">Site Setting</a></dt></span>
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
						<p style="height: 32px" class="auto-style8"><strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
						</strong>
						<?php
						echo "<span class=\"auto-style9\">$pagename</span>";
						?>
						</p>
					</div>
					<div>
						
					
						<table cellpadding="0" cell0spacing="0" style="width: 100%">
							<form method="post" enctype="multipart/form-data" action="Admin-OO.php">
								
							<tr>
								<td class="auto-style4">&nbsp;
								<?php
								echo "<input type=\"hidden\" name=\"pageid\" value=\"$page_id\">";
								echo "<input type=\"hidden\" name=\"pagename\" value=\"$pagename\">";
                                echo "<input type=\"hidden\" name=\"parentid\" value=\"$parid\">";
								?>

								</td>
							</tr>
							<tr>
								<td>
								<table class="auto-style11" style="width: 100%; height: 34px">
									<tr>
										<td style="width: 152px">Title</td>
										<td>
										<?php
										echo "<input name=\"pagetitle\" type=\"text\" style=\"width: 400px; height: 25px\" value=\"".$pagetitle."\" >";
										?>
										</td>
									</tr>
								</table>
								</td>
							</tr>
							<tr>
								<td style="height: 25px">Description</td>
							</tr>
							<tr>
								<td>
								   <?php
									echo "<textarea name=\"description\" style=\"width: 624px; height: 190px\">$description</textarea>";
									?>
								</td>
							</tr>
							<tr>
								<td>
								<table style="width: 100%; height: 64px">
									<tr>
										<td style="width: 177px; height: 47px">Header Image</td>
										<td style="height: 47px">
										
											<input name="File1" type="file" class="auto-style17" />
										&nbsp;<?php echo "<a href=\"".$fname1."\" >Show</a>"; ?> </td>
									</tr>
									<tr>
										<td style="width: 177px">Left Side Image</td>
										<td>
										
											<input name="File2" type="file" class="auto-style18" />
										</td>
									</tr>
								</table>
								</td>
							</tr>
							<tr>
								<td class="auto-style13">Meta Details</td>
							</tr>
							<tr>
								<td>
								<table style="width: 100%">
									<tr>
										<td style="width: 175px">Meta Title</td>
										<td>
										<div class="auto-style14">
											  <?php
												echo "<input name=\"metatitle\" style=\"width: 416px\" type=\"text\" class=\"auto-style19\" value=\"".@$metatitle."\" >";
												?>
										</div>&nbsp;</td>
										
									</tr>
								</table>
								</td>
							</tr>
							<tr>
								<td>
								<table style="width: 100%">
									<tr>
										<td style="width: 174px">Meta Keywords</td>
										<td>
										  <?php
											echo "<input name=\"metakeys\" style=\"width: 419px; height: 36px\" type=\"text\" class=\"auto-style20\" value=\"".$metakeys."\" />";
											?>
										&nbsp;</td>
									</tr>
								</table>
								</td>
							</tr>
							<tr>
								<td>
								<table style="width: 100%">
									<tr>
										<td style="width: 176px">Meta 
										Description</td>
										<td>
										   <?php
											 echo "<textarea name=\"metadesc\" style=\"width: 413px; height: 88px\" class=\"auto-style21\">$metadesc</textarea>";
											?> 
										&nbsp;</td>
									</tr>
								</table>
								</td>
							</tr>
							<tr>
								<td class="auto-style15" style="height: 32px">
								
									<input name="action" type="submit" value="Save" />
								&nbsp;</td>
							</tr>
							</form>
						</table>
											
					</div>
				</td>
			</tr>
		</table>
	
	</tr>
	
</table>


</body>

</html>
