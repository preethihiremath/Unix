#3. Comparing two expressions


x=10
y=20
# matching numbers with '='
res=`expr $x = $y`
echo $res
# displays 1 when arg1 is less than arg2
res=`expr $x \< $y`
echo $res
# display 1 when arg1 is not equal to arg2
res=`expr $x \!= $y`
echo $res