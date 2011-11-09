<?php
$m = new Mongo();

// select a database
$db = $m->useraccount;

// select a collection (analogous to a relational database's table)
$collection = $db->valid_user;
echo $collection;
$users = $mongo->useraccount->valid_user;
$user = $collection->findOne(array('user_name' => 'chand'));
$x=array('user_name'=>'chand','password'=>'asd','date_created'=>new MongoDate());
$res=$collection->insert($x);
echo $user['user_name'];

?>
