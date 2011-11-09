<?php
require_once("../classfiles/WebForm.class"); 
include_once("../classfiles/contact.class"); 
include_once("../classfiles/pagedetails.class");  
include_once("../classfiles/settings.class");  
include_once("../classfiles/ContentDownload.class");
	
     
try                                                      #15
{

  $form = 
    new WebForm("../incfiles/contactform.inc","../incfiles/fields_contactus.inc",$_POST);
}
catch(Exception $e)
{
  echo $e->getMessage();
  exit();
}

//First time form is displayed. Form is blank. //
if (!isset($_POST['action']))                            #26
	{
	   $form->displayForm();
	   exit();
	}
// Process form that has been submitted with user info  //
else                                                     #32
{	
		foreach ($_POST as $name => $value)                    
			  {
			  
			  $$name = $value;
			  
			  }	
	
		  //  form was submitted  // 
				try
			 {
				 
				 $blanks = $form->checkForBlanks();              #99
			 }
			 catch(Exception $e)
			 {
				 echo $e->getMessage();
				 
			 }
			 if(is_array($blanks))                              #105
			 {
				$GLOBALS['message_2'] = 
				   "The following required fields were blank. 
						Please enter the required information:  ";
				foreach($blanks as $value)
				{
				   $GLOBALS['message_2'] .="$value, ";
				}
				$form->displayform();
				exit();
			 }
			 $form->trimData();                                 #117
			 $form->stripTagsFromData();                        #118
			 try
			 {
				$errors = $form->verifyData();                  #121
			 }
			 catch(Exception $e)
			 {
				echo $e->getMessage();
				
			 }
			 if(is_array($errors))                              #127
			 {
				$GLOBALS['message_2'] = "";
				foreach($errors as $value)
				{
				   $GLOBALS['message_2'] .="$value<br> ";
				}
				$form->displayform();
				exit();
			 } 
			 $newdata = $form->getAllFields();   
			 try
			{
				
				 if ($action)                                  
					{
					   $date="";
					   $contact_item = new Contact(NULL,$clientname,
						$email, $phone, $subject,$message, $date);
						$contactid = $contact_item->save();
						
					}
				 else
					header("Location: ..webpages/contactus.php");

				$GLOBALS['message_2']= "Thank you for contacting us. We will be contacting you soon.";
				
				header("Location: ../webpages/contactus.php");
			}
			catch(Exception $e)
			{
				 echo $e->getMessage()."\n<br>";
				 exit();
			}
			 
		     
	} 
   ?>