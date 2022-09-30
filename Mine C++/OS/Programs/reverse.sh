echo -n "Enter String : "
read str
revs=$(rev <<< $str)
echo $revs

