echo -n "Enter P : "
read p
echo -n "Enter R : "
read r
echo -n "Enter N : "
read n
echo "Simple Interest is `expr $(($((p*r*n))/100))`"
