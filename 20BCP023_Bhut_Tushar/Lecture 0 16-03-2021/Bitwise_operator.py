# Name: Bhut Tushar

a = 24          # 24 = 0001 1000
b = 13          # 13 = 0000 1101

c = a & b        # AND 8 = 0000 1000
print("Value of c is: ", c)

c = a | b        # OR 29 = 0001 1101
print("Value of c is: ", c)

c = a ^ b        # XOR 21 = 0001 0101
print("Value of c is: ", c)

c = ~a         # NOT -25 = -a-1
print("Value of c is: ", c)

c = a << 1       # LEFT SHIFT 48 = 0011 0000
print("Value of c is: ", c)

c = a >> 1       # RIGHT SHIFT 12 = 0000 1100
print("Value of c is: ", c)
