--TEST--
test1() Basic test
--EXTENSIONS--
wolsoft
--FILE--
<?php
$ret = test1();

var_dump($ret);
?>
--EXPECT--
The extension wolsoft is loaded and working!
NULL
