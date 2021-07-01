#!/bin/bash
if [ $# -eq 0 ]
then
echo "Please enter one or more filename as argument "
exit
fi
echo "Enter the word to be searched in files"
read word
for file in $*
do
sed "/$word/d" $file | tee tmp
mv tmp $file
done

