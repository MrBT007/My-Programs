f = open("Tushar.txt")
print(f.tell())  # tells at which point file pointer points
print(f.readline())
# print(f.tell())
# print(f.readline())
# print(f.tell())
# print(f.readline())
# print(f.tell())
print(f.seek(0))  # points at 0
print(f.readline())

print(f.seek(13))  # points at 13
print(f.readline())
f.close()
