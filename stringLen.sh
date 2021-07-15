#!/bin/sh
string="$1"
if [ $# -eq 0 ]
then
echo "Syntax: $(basename $0) string"
exit 1
fi
# get length of the string
length=$(echo ${#string})
echo "String length = $length"