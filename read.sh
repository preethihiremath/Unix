#!/bin/sh
echo “Enter the pattern to be searched:\c” #no new line
read pname
echo “enter the file to used:\c”
read flname
echo “Searching for $pname from file $flname”
grep “$pname” $flname
echo “selected records shown above”