echo -n "Enter how many numbers : "
read n
sum=0
while [ $n -ge 1 ]
do
read x
sum=$((sum+x))
n=$((n-1))
done
echo "Sum = $sum"
