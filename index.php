

<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="utf-8" />
        <title></title>
    </head>
    <body>

<?php

/* Ran into a lot of issues in this program. Mostly when it came
to passing the (string) name over to my convertNameToUpperCase function.
I'm relatively certain that I could've figured the rest out if I found a way
to pass the name over. Whenever I passed the $name over, it would always display
the data type as NULL. Was truly irritating. Anyways, I tried my best here, and 
tried to keep most of the functionality intact. 

If you'd like to see the functionality, please visit my web page hosted by UFV. 
cisweb.ufv.ca/~300137187/New%20folder/

-Tyler Abbott 300137187 */

include("classes.php");
$test = new person();
$test->setName("John");
echo $test->getName();

$hello = new employee();
$hello->setName("John Doe");
echo $hello->convertNameToUpperCase("John Doe");
echo $hello->getName();
$teek = new employee();
$teek->setName("John Smith");
echo $teek->convertNameToUpperCase("John Smith");
echo $teek->getName();
?>

    </body>
</html>
