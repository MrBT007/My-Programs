path="temp.txt"
echo "Total Vowels : "
ans="$(echo "$path"|grep -oi [aeiou])"
count="$(echo "$ans"|wc -l)"

echo "$count"

