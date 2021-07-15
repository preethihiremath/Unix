#!/bin/bash
file="$1"
if [ $# -eq 0 ]
	then
		echo "$0 file NO arguments"
		exit 
fi

if [ ! $file ]
	then
		echo "$file not a file"
		exit 
fi

newf=$(echo $file | tr '[A-Z]' '[a-z]')

if [ -f $newf ]
	then
		echo "File already exists!"
		exit 
fi
/bin/mv $file $newf
