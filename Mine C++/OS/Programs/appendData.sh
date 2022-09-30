echo -n "Enter File Name : "
read file
if [ -f $file ]
then
    if [ -w $file ]
    then
    echo "Write Some Text. Press ctrl+d to exit"
    cat >> $file # >> : for appending data , > : for overrite the data
    else
    echo "File doesn't have write permission"
    fi
else
    echo "File doesn't Exist"
fi