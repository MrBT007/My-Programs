echo -n "Enter file name : "
read file

if [ -f $file ]
then
    echo "$file Found"
else
    echo "$file Not Found"
fi 