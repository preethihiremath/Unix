#!/bin/bash

while echo “enter your name: \n” ; do
	read name
	if [ `expr "$name" : '.*' ` -gt 10 ] ; then
		echo “name too long”
	else
		echo “name=$name”  
                  break
          fi
done
