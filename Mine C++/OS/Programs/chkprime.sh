echo -n "Enter Number : "
read n
for(( i=2; i<=n/2; i++))
do
if [ `expr $n % $i` -eq 0 ]
then
echo "$n is not Prime"
exit
fi
done
echo "$n is Prime"
