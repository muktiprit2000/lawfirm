<?php
 /* File: loginform.inc
  * Desc: Contains the code for a Web page that displays
  *       HTML login form,  in a table.
*/
                                 #6
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title><?php echo $page['title']?></title>
<style type="text/css">
html, body {
	margin: 0;
	padding: 0;
}
#page-container {
	width: 760px;
	margin-top: 175px;
	margin-left:300px
}
#login {
	width: 500px;
	margin: auto;
}
.auto-style1 {
	border-style: solid;
	border-width: 1px;
	background-color: #000080;
}
.auto-style3 {
	border-style: solid;
	border-width: 1px;
}
</style>
</head>
<body>
<div id="page-container">
<table style="width: 100%" border="1" cellspacing="0" cellpadding="0">
	<form action=<?php echo $_SERVER['PHP_SELF']?>
	               method="POST"> 
	<tr>
		<td width="33%" valign="top" class="auto-style3">
      <p style="font-size: 110%; font-weight: bold; text-align: center">
           <?php echo $elements_1['top']?></p>
         </td>
	</tr>
	<tr>
		<td class="auto-style1">&nbsp;</td>
	</tr>
	<tr>
		<td class="auto-style3">
		<br/>
		<br/>
		<br/>
		<br/>

		<?php                                                     #26
		  if (isset($GLOBALS['message_1']))                       #27
		  {                                                      
		     echo "<p style=\"font-weight: bold; 
		                 font-style: italic; 
		                 font-size: 90%; color: red\">
		             
		                
		                  {$GLOBALS['message_1']}</p>\n";
		  }
		                         
		?>
		<div id="login">
		<table style="width: 100%">
			
               
         <?php
               foreach($fields_1 as $field => $value)                  #36
		  {
		    if(ereg("pass",$field))                               #38
		       $type = "password";
		    else
		       $type = "text";
		    echo "<tr><td style=\"text-align: right; 
		                  font-weight: bold\">$value</td>
		              <td><input type='$type' name='$field' 
		                         value='".@$$field."' 
		                         size='{$length_1[$field]}' 
		                         maxsize='{$length_1[$field]}'>
		              </td></tr>\n";
		  }                               
			?>
			<tr>
	            <td colspan="2" style="text-align: center" >
	              <br />
	              <input type="submit" name="Button"
	                  value="<?php echo $elements_1['submit']?>">
	                  <br/>
	                  <br/>
	            </td>
	         </tr>
         </table>
            
		</div>
		
		</td>
	</tr>
	</form>
	
</table>
</div>
</body>

</html>
