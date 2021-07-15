#write a shell script that list the all files in a directory.
# !/bin/bash
echo "enter directory name"
read dir
if[ -d $dir]
then
echo "list of files in the directory"
ls –l $dir|egrep ‘^d’
else
echo "enter proper directory name"
fi