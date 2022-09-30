echo -n "Enter number 1 : "
read num1
echo -n "Enter number 2 : "
read num2

echo "$num1+$num2" | bc
echo "$num1-$num2" | bc
echo "$num1*$num2" | bc
echo "scale=2;$num1/$num2" | bc

sq1=`expr "scale=3;sqrt($num1)" | bc -l`
sq2=`expr "scale=3;sqrt($num2)" | bc -l`

echo "Sqrt($num1) = $sq1"
echo "Sqrt($num2) = $sq2"