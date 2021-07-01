#!/bin/bash
echo "enter string"
read str

length=`echo $str | wc -c`
length=`echo $length -1 |bc`
if [ $length -lt 5 ]
then
       echo "you enter less than 5 character "
fi

