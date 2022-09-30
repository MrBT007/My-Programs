print("Enter number for printing stars")
star = int(input())
print("1 or 0")
truFalse = int(input())
if truFalse == 1:
    for i in range(star+1):
        print(i * "* ")
elif truFalse == 0:
    for i in range(star, 0, -1):
        print(i*"* ")
       
