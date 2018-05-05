
<?php
$myFile = "file.txt";
$lines = file($myFile);//file in to an array
?>





<!DOCTYPE html>
<html>
  <head>
    <meta charset="UTF-8">
    <title>title</title>
  </head>
  <body>
<!DOCTYPE html>
<html>
  <head>
    <meta charset="UTF-8">
    <title>title</title>
  </head>
  <body>
  <table style="width:75%" border="1">
  <tr>
    <th>Time</th>
    <th>Name</th> 
  </tr>
  <tr>
    <td>8</td>
    <td><?php echo $lines[0]?></td> 
  </tr>
  <tr>
    <td>9</td>
    <td><?php echo $lines[1]?></td> 
  </tr>
    <tr>
    <td>10</td>
    <td><?php echo $lines[2]?></td> 
  </tr>
    <tr>
    <td>11</td>
    <td><?php echo $lines[3]?></td> 
  </tr>
    <tr>
    <td>12</td>
    <td><?php echo $lines[4]?></td> 
  </tr>
    <tr>
    <td>1</td>
    <td><?php echo $lines[5]?></td> 
  </tr>
    <tr>
    <td>2</td>
    <td><?php echo $lines[6]?></td> 
  </tr>
    <tr>
    <td>3</td>
    <td><?php echo $lines[7]?></td> 
  </tr>

<form action="assign3part2.php" method="post">
Name: <input type="text" name="name"><br>
Hour: <input type="text" name="index"><br>
<input type="submit">
</form>
<p> <b> DISCLAIMER: </b> Only enter hour values as listed in the table. </p>
</table>
  </body>
</html>