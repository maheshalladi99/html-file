<?php
$username=filter_input(INPUT_POST,'username');
$password=filter_input(INPUT_POST,'password');

$h="localhost";
$u="root";
$p="";
$db="db1";
$conn = new mysqli($h,$u,$p,$db);
$sql = "INSERT INTO t1(u,p)
values ('$username','$password') ";
$conn -> close();
?>