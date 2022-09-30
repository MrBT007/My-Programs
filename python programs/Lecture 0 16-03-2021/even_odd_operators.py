# Name: Bhut Tushar

print("Hello World")

print("Hii Tushar", "How are you?")

# expression

# sum
print(1+2+3)
# multiplaction
print(2*3*4)
# power
print(2**2)
# devidation
print(8/4)

# assign a value to variable

x = 55
y = 56
z, w = 5, 6

# print a variable

print(x)
print('x=', x)

# logical operator

print(x > y and y < 7)  # return true if this both condition will be satisfied
print(x > y or y < 7)  # return true any one condition will be satisfied
print(not(x > y or y > x))  # return result in negative attitude


# identity operator

print(x is y)  # return true if x and y are same else false
print(x is not y)  # return true if x and y are not same

# membership operator

q = [5, 8, 6, 9]
l = 5
j = 10
print(l in q)  # return true if l=5 is in the q
print(j not in q)  # return true if j=10 is not in the q

# binary numbers
a = 0b1110000
b = 0b0101011
print("in binary = ", bin(a & b))
print(a & b)  # by default returns int value of the binary produced
print(a | b)
print(a ^ b)
print(~a)

# finding area

a = int(input("Enter the side a \n"))
b = int(input("Enter the side b"))
print("area = ", a*b)

# finding largest odd number

print("Enter the value of a")
a = int(input())
print("Enter the value of b")
b = int(input())
print("Enter the value of c")
c = int(input())

if a % 2 != 0 and b % 2 != 0 and c % 2 != 0:
    if a > b and a > c:
        print("largest odd number is  ", a)
    elif b > a and b > c:
        print("largest odd number is  ", b)
    else:
        print("largest odd number is  ", c)

if a % 2 != 0 and b % 2 != 0 and c % 2 == 0:
    if a > b:
        print("largest odd number is  ", a)
    if a < b:
        print("largest odd number is  ", b)

if a % 2 != 0 and b % 2 == 0 and c % 2 != 0:
    if a > c:
        print("largest odd number is  ", a)
    if a < c:
        print("largest odd number is  ", c)

if a % 2 == 0 and b % 2 != 0 and c % 2 != 0:
    if b > c:
        print("largest odd number is  ", b)
    if c > b:
        print("largest odd number is  ", c)

if a % 2 != 0 and b % 2 == 0 and c % 2 == 0:
    print("largest odd number is  ", a)

if a % 2 == 0 and b % 2 != 0 and c % 2 == 0:
    print("largest odd number is  ", b)

if a % 2 == 0 and b % 2 == 0 and c % 2 != 0:
    print("largest odd number is  ", c)

if a % 2 == 0 and b % 2 == 0 and c % 2 == 0:
    print("None of them are odd")

# For loop

x = (1, 2, 3, 8, 6, 9)
sum = 0
# print(len(x))
# len(x) =find how much element in x . here loop continue till end of element of x.
for i in range(len(x)):

    sum = sum + (x[i])

print("sum of components of x set  = ", sum)
