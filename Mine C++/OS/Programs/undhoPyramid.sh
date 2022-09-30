echo -n "Enter the Number : "
read n
for((i=n; i>0; i--))
do
for((k=0; k<n-i; k++))
do
echo -n " "
done

	for((j=0; j<2*i-1; j++))
	do
	if [ $((j%2)) == 0 ]
	then
	echo -n "* "
	else
	echo -n "$ "
	fi
	done

echo ""
done
