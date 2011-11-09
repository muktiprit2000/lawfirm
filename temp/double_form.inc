<?php
 /* File: double_form.inc
  * Desc: Contains the code for a Web page that displays
  *       two HTML forms, side by side in a table.
*/
?>
<head><title><?php echo $page['title']?></title></head>
<body style="margin: 0">
<h1 align="center"><?php echo $page['top'] ?></h1>
<hr size="10" noshade>

<table border="0" cellpadding="5" cellspacing="0">
<?php
  #############
  ##  Form 1  #
  #############                                        
?>
  <tr>
    <td width="33%" valign="top">
      <p style="font-size: 110%; font-weight: bold">
           <?php echo $elements_1['top']?></p>
      <!-- Beginning of form 1 (left) -->
      <form action=<?php echo $_SERVER['PHP_SELF']?>
               method="POST"> 
      <table border="0">
<?php                                                    
  if (isset($GLOBALS['message_1']))                      #27
  {                                                      
     echo "<tr>
            <td colspan='2' 
                style=\"font-weight: bold; 
                 font-style: italic; 
                 font-size: 90%; color: red\">
                  {$GLOBALS['message_1']}<p></td></tr>\n";
  }
  foreach($fields_1 as $field => $value)                 #36
  {
    $type = $types_1[$field];
    echo "<tr><td style=\"text-align: right;   
                  font-weight: bold\">$value</td>
              <td><input type='$type' name='$field' 
                         value='".@$$field."' 
                         size='{$length_1[$field]}' 
                         maxsize='{$length_1[$field]}'>
              </td></tr>\n";
  }                                                     
?>
          <tr>                                    <!-- 48 -->
            <td colspan="2" style="text-align: center" >
              <br />
              <input type="submit" name="Button"
                  value="<?php echo $elements_1['submit']?>">
            </td></tr>
      </table>
      </form>
    </td>

    <!-- Column that separates the two forms -->
    <td style="background-color: gray"></td>
<?php                                                    
  #############
  ##  Form 2  #
  #############                                          #63
?>
    <td width="67%">
      <p style="font-size: 110%; font-weight: bold">
            <?php echo $elements_2['top']?> 
      <!-- Beginning of Form 1 (right side) -->
      <form action=<?php echo $_SERVER['PHP_SELF']?>
            method="POST"> 
      <p>
      <table border="0" width="100%">
<?php                                                    
  if (isset($GLOBALS['message_2']))                      #74
  {
    echo "<tr>
            <td colspan='2' 
               style=\"font-weight: bold; font-style: italic;
               font-size: 90%; color: red\">
               {$GLOBALS['message_2']}<p></td></tr>";
  } 
  foreach($fields_2 as $field => $value)                 #82
  {
    $type = $types_2[$field];
    if($type == "select")                                #85
    {
      echo "<tr><td style=\"text-align: right; 
                    font-weight: bold\">$fields_2[$field]</td>
                <td><select name='$field'>"; 
      foreach ($options[$field] as $opt_id => $opt_name)
      {
        echo "<option value='$opt_id'";
        if (@$_GET[$field] == $opt_id) 
          echo " selected";
        echo ">$opt_name\n";
      }
      echo "</select>";
    }
    else
    {
      echo "<tr><td style=\"text-align: right;          #101
                    font-weight: bold\">$value</td>
                <td><input type='$type' name='$field' 
                           value='".@$$field."'  
                           size='{$length_2[$field]}' 
                           maxsize='{$length_2[$field]}'>
                </td></tr>";                            
    }                                                   
  }                                                     
?>
      <tr>                                       <!-- 111 -->
        <td colspan="2" style="text-align: center">
             <p style="margin-top: .05in">
             <input type="submit" name="Button"
                 value="<?php echo $elements_2['submit']?>">
          </td></tr>
     </table>
     </form>
    </td>
  </tr>
</table>
<hr size="10" noshade>
<div style="text-align: center; font-size: 75%">
<?php echo $page['bottom']?>
</body></html>
