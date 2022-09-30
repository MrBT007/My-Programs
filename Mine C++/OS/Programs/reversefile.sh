echo -n "Enter Filename : "
read filename
i=1
 while read line;
do
a+=$line
i=$((i+1))
done < $filename
echo $a

len=${#a}
j=$((len-1))
while [ $j -ge 0 ]
do
	rev=$rev${a:$j:1}
	j=$((j-1))
done
echo $rev
