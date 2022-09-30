echo -n "Enter number : "
read n
for((i=1; i<=10; i++))
do
echo "$n X $i = $((n*i))"
done
