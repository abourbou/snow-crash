#!/usr/bin/php
<?php
function y($m)
{
	#regex pattern : .
	$m = preg_replace("/\./", " x ", $m);
	#regex pattern : @
	$m = preg_replace("/@/", " y", $m);
	return $m;
}
function x($y, $z)
{
	#a is the content of y string file
	$a = file_get_contents($y);
	#regex patern : [x expr], replace by the return of y function with the string starting at 2 pos
	$a = preg_replace("/(\[x (.*)\])/e", "y(\"\\2\")", $a); //* first /([x (.*)])/e second y("\2")
	#regex pattern : [
	$a = preg_replace("/\[/", "(", $a);
	#regex pattern : ]
	$a = preg_replace("/\]/", ")", $a);
	return $a;
}
$r = x($argv[1], $argv[2]);
print $r;
?>
