<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title>Contact us</title>
<style type="text/css">
.auto-style1 {
	margin-top: 0px;
	font-family: Arial, Helvetica, sans-serif;
	font-size: small;
	font-weight: normal;
	font-style: normal;
	color: #000000;

}
.auto-style2 {
	background-color:gray;
	border-collapse: collapse;
}
.auto-style4 {
	text-align: left;
}
.auto-style5 {
	text-align: center;
	background-color: gray;
}
.auto-style9 {
	background-color: #99CCFF;
}
.auto-style10 {
	border: 1px solid #996633;
	text-align: left;
}
.auto-style11 {
	border-style: solid;
	border-color: #99CCFF;
	text-align: center;
}
.auto-style13 {
	margin-left: 0px;
	background-color: #99CCFF;
}
.auto-style14 {
	margin-left: 0px;
}
.auto-style15 {
	border-collapse: collapse;
	border: 1px solid #99CCFF;
}
.auto-style16 {
	text-align: center;
}

</style>
</head>

<body>

<table class="maintable" style="width: 100%">
	<tr>
		<td style="width: 200px" class="auto-style9">&nbsp;</td>
		
		<td style="width: 1000px" class="auto-style11">
			<div class="header">
				<table>
				  <tr>
					 <td>
					 <img alt="The Caurey &amp; Millison Because family matters" height="119" longdesc="Logo" src="../images/1_sitelogo.jpg" width="729" /></td>
					 <td class="address" style="width: 262px">
					 332 South Plant Avenue<br />
					 Tampa, FL 33606<br />
					 Tel: (813) 874-0081
					 </td>
				  
				  </tr>
			  </table>	  	
			</div>
			<div class=""menu">
				<table class="auto-style2"style="width: 100%; height: 23px" class="auto-style2" align="center">
					   <tr >
						<?php
						 	
							echo "<td  style=\"width: 130px\"><a href=\"../webpages/default.php\">HOME</td>";
							echo "<td  style=\"width: 130px\"><a href=\"../webpages/default.php?page_id=2&browse_level=links\">ATTORNEY PROFILE</td>";
							echo "<td  style=\"width:130px\"><a href=\"../webpages/default.php?page_id=3&browse_level=links\">FIRM OVERVIEW</td>";
							echo "<td  style=\"width:130px\"><a href=\"../webpages/default.php?page_id=4&browse_level=links\">PRACTICE AREAS</td>";
							echo "<td  style=\"width: 130px\"><a href=\"../webpages/default.php?page_id=5&browse_level=links\">RESOURCES</td>";
							echo "<td  style=\"width: 130px\"><a href=\"../webpages/contactus.php\">CONTACT US</td>";

							?>
							
						</tr>
				</table>
			</div>
			<div class="midimage" >
				<img alt="" height="132" longdesc="mid image" src="../images/573.JPEG" width="1000" class="auto-style14" />
			</div>
			<div class="headings">
				<table class="auto-style5"style="width: 100%; height: 20px;" class="auto-style3">
					<tr>
						
						<td style="height: 23px; width: 556px; text-align:center">Florida Attorneys ? 
						Solutions for your Family Law &amp; Divorce Matters </td>
					</tr>
				</table>
			</div>
			<div class="mainbody">
				<table class="mainbodyclass">
					<form action=<?php echo htmlentities($_SERVER['PHP_SELF']);?> method="POST">
					<tr>
						<td class="auto-style4" style="width: 200px" >				
							Contact Us
						</td>
						<td class="auto-style10" valign="top" style="width: 792px">
							<div>
								 <p class="auto-style1"><br /><br /><b><?php echo $elements['top']?></b></p>
							</div>	
							<div>
								<?php                                                     #26
									if (isset($GLOBALS['message_2']))                       #27
									{                                                      
										echo "<p style=\"font-weight: bold; 
										font-style: italic; 
										font-size: 90%; color: red\">
										{$GLOBALS['message_2']}</p>\n";
									}
		                         
								?>
							</div>
							<div>
								<table style="width: 100%" class="auto-style15">
								  
									<tr>
										<td style="width: 281px" colspan="2" class="auto-style9">Your Contact 
										Details</td>
										
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
										<td style="width: 281px" colspan="2" class="auto-style16">
											<input type="submit" name="action" value="<?php echo $elements['submit']?>">
										</td>
										
									</tr>
									
									<tr>
										
										<td colspan="2"><p><?php echo $comment ?></p></td>
										
									</tr>
									
								</table>
							</div>	 
							<div>	 
							<?php
							include_once("../classfiles/pagedetails.class"); 
							$pagedetail = Pagedetail::findByName("CONTACT US");
							$description=$pagedetail->getDescription();
							echo "<span class=\"auto-style1\">$description></span>";
							?>
                             </div>             
				        </td>
				        
				      </tr>
				      
				      </form>
			   </table>   
			 </div>  
			  <div class="footer">
	
					<table align="center"  class="auto-style13" style="width: 1000px">
						<tr>
							<td style="width: 89px">SITE MAP</td>
							<td style="width: 134px">TERMS OF USE</td>
							<td style="width: 147px">PRIVACY POLICY</td>
							<td style="width: 540px"> � 2010 CAREY LAW GROUP PA. All rights reserved. Attorney Advertising </td>
			
						</tr>
					</table>
		
			</div>	
		</td>
		
		
		<td class="auto-style9">&nbsp;</td>
	</tr>
</table>
</body>

</html>
