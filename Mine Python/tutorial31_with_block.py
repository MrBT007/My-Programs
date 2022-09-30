# This is another way to open the file , and here we don't need to close it because it already close  while using with blocks
with open("Tushar.txt") as f:
    a = f.readline()
    print(a)
# with blocks already closed here before executing below line
f = open("Tushar.txt")
print(f.readline()) # This will also execute because compiler thinks that if is new file
f.close()