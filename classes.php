
<?php

// For all developer notes, see the index.php page. 
// - Tyler Abbott 300137187

class person {
    private $name;
    function __construct($name){
	$this->name = $name;
    }

public function getName(){
	return $this->name;
}

public function setName($name){
    $this->name = $name;
}

}
class employee extends person
{
    function __construct($name){
        $this->name = $name;
    }
public function convertNameToUpperCase($name){
    if($name=="John Doe"){
          $this->name = $name;
   $name = strtoupper($name);
    return $name;
    }else{return $name;}
    }
}


?>