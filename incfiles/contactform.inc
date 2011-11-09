<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title>Contact us</title>
<link href="../css/home.css" rel="stylesheet" type="text/css" />

<style type="text/css">
.auto-style1 {
	text-align: center;
}
</style>

</head>

<body>
<?php
//variables
$pagedet = Pagedetail::findById("6");
$parid=$pagedet->getParId();
$pagename=$pagedet->getName();
$pagetitle=$pagedet->getPagetitle();
$description=$pagedet->getDescription();

$s_item = Settings::findById("1");
$address=$s_item->getAddress();
$phone=$s_item->getPhone();
$aemail=$s_item->getAdminemail();
$cemail=$s_item->getContemail();

$cd= new ContentDownload("1","1","asdsa");
$fname1=$cd->findByIdContforS("1","1");
$fname2=$cd->findByIdContforP("6","1");

 if ($fname2===NULL)
	$fname2=$cd->findByIdContforS("1","2");
	
$fname3=$cd->findByIdContforP("6","2");
 if ($fname2===NULL)
	$fname3=$cd->findByIdContforS("1","3");
?>
		<table class="maintable">
		<tr >
			<td class="sidebars">&nbsp;
			
			</td>

			<td>
				<table class="webpage" >
					<tr>
						<td>
						<table style="width:100%">
						<tr>
						<td  style="vertical-align:middle" class="sitelogo" >
							<?php 
							
								echo  "<img alt=\"The Caurey &amp; Millison Because family matters\" height=\"119\" longdesc=\"Logo\" src=\"".$fname1."\" width=\"100%\" />";?>
							
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
						<td  style="vertical-align:middle">
							<div class="navigation">
								<ul>
									<li><a href="../webpages/default.php">HOME</a></li>
									<li><a href="../webpages/default.php?page_id=2&browse_level=links">ATTORNEY PROFILE</a></li>
									<li><a href="../webpages/default.php?page_id=3&browse_level=links">FIRM OVERVIEW</a></li>
									<li><a href="../webpages/default.php?page_id=4&browse_level=links">PRACTICE AREAS</a></li>
									<li><a href="../webpages/default.php?page_id=5&browse_level=links">RESOURCES</a></li>
									<li><a href="../webpages/contactus.php">CONTACT US</a></li>
								</ul>
							</div>
						 </td>
						
					</tr>
					<tr>
						<td  style="vertical-align:middle">
			
								<?php 
								echo "<img alt=\"mid image\" height=\"132\" longdesc=\"midimage\" src=\"".$fname2."\" width=\"100%\" />"; ?>
				
						</td>
						
					</tr>
					<tr>
						<td  style="vertical-align:middle" class="menuitemdescription">
							
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
									<br /><br/>
									<p class="BodyTitles">
										Contact Us</p>
				                      
				                	<?php 
								echo "<img  height=\"132\" longdesc=\"midimage\" src=\"".$fname3."\" width=\"100%\" />"; ?>
 
								
							 </div>
							</td>
							
							<td valign="top" align="left" class="maincontent">
								<div>	
									<table style="width: 100%" >
									<form action=<?php echo htmlentities($_SERVER['PHP_SELF']);?> method="POST">
									<tr>
										<p class="auto-style1"><br /><br /><b><?php echo $elements['top']?></b></p>
									</tr>	
									<tr>
									<?php                                                     #26
										if (isset($GLOBALS['message_2']))                       #27
										{                                                      
											echo "<p style=\"font-weight: bold; 
											font-style: italic; 
											font-size: 90%; color: red\">
											{$GLOBALS['message_2']}</p>\n";
										}
									 
									?>
								
									</tr>
									<tr>
										<td  colspan="2" ><br/>Your Contact Details<br/><br/></td>
										
									</tr>
									
									<?php
											   foreach($fields as $field => $value)                  #36
										  {
											$type=$types[$field];
											if($type=="text")
											{
											echo "<tr><td style=\"text-align: right; 
														  font-weight: bold\">$value</td>
													  <td><input type='$type' name='$field' 
																 value='".@$$field."' 
																 size='{$length[$field]}' 
																 maxsize='{$length[$field]}'>
													  </td></tr>\n";
											}
											else
											{
											echo "<tr><td style=\"text-align: right; 
														  font-weight: bold\">$value</td>
													  <td><textarea  name='$field' 
																 value='".@$$field."'></textarea>
													  </td></tr>\n";
											}
										  }                               
									?>		 	
										
									
									
									<tr>
										<td  colspan="2" class="auto-style1" >
											<input type="submit" style="text-align: center;" name="action" value="<?php echo $elements['submit']?>">
										</td>
										
									</tr>
									
									<tr>
										
										<td colspan="2"><p><?php echo $comment ?></p></td>
										
									</tr>
									</form>
								</table>	
							</div>	
							
							<span class="BodyRegularFonts"><?php echo $description ?></span>
									
								
							</td>
							
							
							</tr>
						</table>
						</td>
						
					</tr>
					<tr>
						<td >
							<div class="footer">
								<ul>
									<li><a href="../webpages/default.php">SITE MAP</a></li>
									<li><a href="../webpages/default.php?page_id=2&browse_level=links">TERMS OF USE</a></li>
									<li><a href="../webpages/default.php?page_id=3&browse_level=links">FIRM OVERVIEW</a></li>
									<li><a href="../webpages/default.php?page_id=4&browse_level=links">PRIVACY POLICY</a></li>
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
