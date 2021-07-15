#Write a Shell script that accepts a filename, starting and ending line numbers as
#arguments and displays all the lines between the given line numbers.
echo "enter the filename"
read fname
echo "enter the starting line number"
read s
echo "enter the ending line number"
read n
sed -n $s,$n\p $fname | cat > newline
cat newline