<?php
$filen = 'file.txt';
$lineNum = $_POST["index"];
$change = $_POST["name"]."\n";
if($lineNum == 1){
$lineNum = 6;}
if($lineNum == 2){
$lineNum = 7;}
if($lineNum == 8){
$lineNum = 1;}
if($lineNum == 3){
$lineNum = 8;}
if($lineNum == 9){
$lineNum = 2;}
if($lineNum == 10){
$lineNum = 3;}
if($lineNum == 11){
$lineNum = 4;}
if($lineNum == 12){
$lineNum = 5;}
$contents = file($filen);
if($contents[$lineNum-1]!=="open\n"){
echo "ERROR<br>";
echo "Failed to add name to list";
exit(0);}
$contents[$lineNum-1] = $change;
file_put_contents($filen, implode('',$contents));
echo "Return to schedule to see updated list";
?>