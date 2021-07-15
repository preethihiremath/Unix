#2. Performing operations on variables inside a shell script
#Example: Adding two numbers in a script
echo "Enter two numbers"
read x
read y
sum=`expr $x + $y`
echo "Sum = $sum"