<?php
        //This program didn't take me too long (30 mins), and not much needs to be explained here. 
        // However, the basics of this is, that the array loops through the keys, and then loops
        // through the array of values associated with the key.
        
       // If you would like to confirm the functionality, please visit my web page hosted by UFV. 
       // cisweb.ufv.ca/~300137187/test.php 
       
        // - Tyler Abbott 300137187

$myArray = array("courses" => array("Database", "Data Structure"), "credits" => array (3, 4),
"instructor" => array("John Doe", "Jane Roe"));

              
foreach($myArray as $k => $v){
    echo $k;
    echo "<BR>";
    foreach($v as $k => $v){
        echo $v;
        echo "<BR>";
    }
 }
 ?>