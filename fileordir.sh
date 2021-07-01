#!/bin/bash
for l in $*
	do
		if [ -f $l ]
		then
			echo "$l is a file"
		elif[ -d $l ]
			echo "$l is a directory"
		else 
			echo "It is not a file or directory"
		fi
done

