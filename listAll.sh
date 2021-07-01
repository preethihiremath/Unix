#!/bin/bash
echo "the list of file names in the current directory"
for file in *
do
if [ -f $file ]
then
ls -l $file
fi
done

