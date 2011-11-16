<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title><?php echo $pagetitle ?> </title>
<link href="http://law-firm.orchestra.io/css/Home.css" rel="stylesheet" type="text/css" />

</head>

<body>
	
	<table class="maintable">
		<tr >
			<td class="sidebars">&nbsp;
			
			</td>
			<td >

					<table class="webpage" >
						<tr>
								<td>
								<table style="width:100%">
									<tr>
									<td  style="vertical-align:middle" class="sitelogo" >
										<?php 
										
											echo  "<img alt=\"The Caurey &amp; Millison Because family matters\" height=\"119\" longdesc=\"Logo\" src=\"../images/".$fname1."\" width=\"100%\" />";?>
										
									</td>
									<td class="address" >
										<p ><?php echo $address ?></p>
										<p><?php echo $phone ?></p>
											
									</td>
									</tr>
								</table>
								</td>
							</tr>
							<tr>
								<td colspan="2" style="vertical-align:middle">
									<div class="navigation">
										<ul>
											<li><a href="../index.php">HOME</a></li>
											<li><a href="../index.php?page_id=2&browse_level=links">FIRM OVERVIEW</a></li>
											<li><a href="../index.php?page_id=3&browse_level=links">ATTORNEY PROFILE</a></li>
											<li><a href="../index.php?page_id=4&browse_level=links">PRACTICE AREAS</a></li>
											<li><a href="../index.php?page_id=5&browse_level=links">RESOURCES</a></li>
											<li><a href="../contactus.php">CONTACT US</a></li>
										</ul>
									</div>
								 </td>
								
							</tr>
							<tr>
								<td colspan="2" style="vertical-align:middle">
					
										<?php 
								echo "<img alt=\"mid image\" height=\"132\" longdesc=\"midimage\" src=\"../images/".$fname2."\" width=\"100%\" />"; ?>
						
								</td>
								
							</tr>
							<tr>
								<td colspan="2" style="vertical-align:middle" class="menuitemdescription">
									
										Florida Attorneys ♦ 
												Solutions for your Family Law &amp; Divorce Matters 
						
									
								</td>
								
							</tr>
		
							<tr>
								<td>
									<table style="width:100%">
									<tr>

									<td valign="top" style="width:20%">
											<div class="leftnavigation">
												
												<dl class="leftlinks" >
							                      	<p class="BodyTitles"><br /><br/>
													<?php echo  $pagename?><br/></p>
							                      <?php
							                      	for ($i = 1; $i<$row; $i++)	
									    				{
														$valuetemp=array();  
														$col=1;  
										 				foreach($links[$i] as $key => $value) {
										 					$valuetemp[$col]=$value;
										 					$col++;
										 				}
			
							                      		echo "&nbsp;"."<span class=\"BodyTitles\"><dt style=\"width: 160px\"><a href=\"".$valuetemp[2]."\">".$valuetemp[1]."</a></dt></span>";
													}
													?>
			
							                	 </dl>
												<?php 
												echo "<img  height=\"132\" longdesc=\"leftimage\" src=\"../images/".$fname3."\" width=\"80%\" />"; ?>
 

										 </div>
									
									</td>
		
									<td valign="top" align="left" class="maincontent">
										
												
												<br/>
											 	<span class="BodyRegularFonts"><?php echo $description ?></span>
										
										
									</td>
		
								
								</tr>
					   			</table>
					   			</td>
					   			</tr>
					   			<tr>
								<td colspan="2">
									<div class="footer">
										<ul>
											<li><a href="">SITE MAP</a></li>
											<li><a href="">TERMS OF USE</a></li>
											<li><a href="">FIRM OVERVIEW</a></li>
											<li><a href="">PRIVACY POLICY</a></li>
											<li class="BodyRegularFonts"> © 2010 CAREY LAW GROUP PA. All rights reserved. Attorney Advertising</li>									
										</ul>
										 
		
									
									</div>
								</td>
							</tr>
						</table>
					</td>
					<td class="sidebars">&nbsp;
					
					</td>
		</tr>
	</table>		

</body>

</html>
