echo -n "Enter Number : "
read n
if [ `expr $n % 2` -eq 0 ]
then
echo "$n is EVEN"
else
echo "$n is ODD"
fi
