<?php
include_once("Department.class");
try
{
$departments=Department::findAll();
}
catch(Exception $e)
      {
        echo $e->getMessage();
        exit();
      }
      $body_links = "";
      foreach ($departments as $department)             #59
      {
        echo "Pageid:". $department->getId();
          
        echo "/n";
        echo "pagename:". $department->getName();
        echo "/n";
        echo "pageBody:". $department->getDescription();
       }
     ?>     