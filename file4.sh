#Write a shell script that displays the last modification time of any file.
clear
echo "Enter filename"
read fileName
if [ -f $fileName ]
then
echo "Modification time of [ $fileName ] is \c "
ls -l $fileName | cut -c 37-41
else
echo "file [ $fileName ] not exist in \c "
pwd
fi