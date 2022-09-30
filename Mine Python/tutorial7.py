# variable

var1 = 34
var2 = 56.29
var3 = "Tushar"
var4 = "66"

# python automatic detects which variable is this

print("Type of var1 is",type(var1))
print("Type of var2 is",type(var2))
print("Type of var3 is",type(var3))

print(var1 + var2) #this will print a floating number
# print(var1 + var3) #this will throw an error

# typecasting

print("The value of var1 + var4(typecasted)",var1 + int(var4))

#quiz 

print("Enter 1st number")
inpnum1 = input() # this will take input as a string
print("Enter 2nd number")
inpnum2 = input()
# then we have to typecast that number into integer form 
print("The sum is",int(inpnum1) + int(inpnum2))
