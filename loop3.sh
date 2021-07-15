#Write a shell script that delete all lines containing a specified word
if [ $# -lt 1]
then
echo “ Check the arguments once”
exit
fi

echo “Enter a word”
read word
for file in $*
do
grep –iv “$word” $file | tee 1> /dev/null  
#-iv is case insensitive 
done
echo “ lines containing given word are deleted”