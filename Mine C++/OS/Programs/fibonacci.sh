echo -n "Enter number : "
read n 
if [ $n -eq 1 ]
then
echo "0"
elif [ $n -eq 2 ]
then
echo "0 1"
else
a=0
b=1
echo -n "0 1 "
for((i=1; i<=n-2; i++))
do
c=$((a+b))
a=$b
b=$c
echo -n "$c "
done
echo ""
fi


