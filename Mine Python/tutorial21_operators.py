# Arithmetic Operators

print("+", 15+6)
print("-", 15-6)
print("Multiply", 15*6)
print("Devide", 15/6)
print("Devide as integer", 15//6)
print("Reminder (Modulus)", 5 % 3)
print("Exxponential", 5**3)

# Assignment Operators

x = 5
print(x)
x += 7        # x = x + 5
print(x)
x -= 7
print(x)
x *= 7
print(x)
x /= 7
print(x)
x %= 7
print(x)

# Comparison Operator

i = 5
print(i == 5)  # True

# Logical Operator

a = True
b = False
print(a and b)  # ==> True and true is true

"""
a   b   And     or
T   T   T       T
T   F   F       T
F   T   F       T
F   F   F       F

"""
print(a is not b)  # ==> True (Identity operator)

# Membership operator

list1 = [2 , 3 , 45,98 ,32]
print(32 in list1)  # True beacuse 32 is there
print(324 not in list1)  #True because 324 is not there

# Bitwise Operator

"""
0 -- 00
1 -- 01
2 -- 10
3 -- 11

"""
print(0 & 3) # Ans becasue and operator runs between 00 and 11 , for seprate numbers then it will 00 which is 0
print(0 | 3) # Ans becasue or operator runs between 00 and 11 , for seprate numbers then it will 11 which is 3
