echo -n "Enter String : "
read str
if [[ $(rev <<< $str) == $str ]]
then
echo "$str is Palindrome"
else
echo "$str is not Palindrome"
fi
