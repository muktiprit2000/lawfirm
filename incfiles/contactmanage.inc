<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title>Untitled 1</title>
<link href="http://lawfirm-admin.orchestra.io/css/masteradmin.css" rel="stylesheet" type="text/css" />


</head>

<body>

<form method="post" action="contactadmin.php">
<table class="maintable">
	<tr>
		<td><p class="BodyTitles">Administrator Area</p></td>
	</tr>
	<tr>
		<td class="colorBar"></td>
	</tr>

	<tr>
		<td>
			
		<table class="maintable">
			<tr>
				<td style="width: 30%" valign="top">
					
					<br/>
					<br/>
					<br/>
					<div>
								<dl style="width: 166px; height: 160px">
				                      &nbsp;<span class="BodyText"><dt style="width: 160px"><a href="contentmain1.php"">Content Management</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="sitesettings.php">Site Setting</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="contactmanage.php">Contact Us</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="/practice-areas/EquitableDistribution/">Roles</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="/practice-areas/Alimony/">User</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="logout.php">Logout</a></dt></span>
				                      

				                 </dl>	

						
						<br />

						
					</div>
					<br/>
					<br/>
					<br/>

				</td>
				
				<td class="maintable" valign="top">
					<div >
						<br/>
						<br/>
						<p class="BodyTitles">Contact Management</p>
						<br/>
					</div>
					<div>
						<table class="maintable">
						
						<tr class="tableheader">
							<td  style="width:30%">Name</td>
							<td  style="width: 20%">Email</td>
							<td style="width: 10% ">Entry Date</td>
							<td  style="width: 10%">Delete</td>
							
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
							."<td class=\"BodyRegularFonts\"align=\"center\"><a href=\"".$valuetemp[5]."\">".$valuetemp[1]."</a></td>"
							."<td class=\"BodyRegularFonts\" align=\"center\">".$valuetemp[2]."</td>"
							."<td class=\"BodyRegularFonts\" align=\"center\">".$valuetemp[3]."</td>"
							."<td > <input type=\"checkbox\" name=\"deletecontact[]\" value=\"".$valuetemp[4]."\" /></td>"
							."</tr>\n";
		                    
						    //echo "<input name=\"contactdelete\" value=\"".$valuetemp[4]."\" type=\"hidden\" />";
							}
						 ?>
						</table>
					
					</div>
					<div align="center">
	                    
	                    <input type="submit" name="action" value="Update" />
	                </div>
	
				</td>
				
			</tr>
		</table>
			
		
		</td>
	</tr>

</table>

</form>
</body>

</html>
