import random
import math
def key_a(yb,xa,q):
    k = (yb**xa) % q
    return k
    
def key_b(ya,xb,q):
    k = (ya**xb) % q
    return k
    
q = int(input("Enter the prime number: "))
l = []

#For primitive roots
for i in range(2,q):
    if math.gcd(i,q) == 1:
        x= [(i**j) % q for j in range(1,q)]
        if x.count(1) == 1:
            l.append(i)
    
if len(l) > 0:
    print(l)
else:
    print("Primitive root not found")
    
a = random.choice(l) #Primitive Root
print(a)
a = 5
xa = int(input("Choose any integer less than prime number(xa): "))
xb = int(input("Choose any integer less than prime number(xb): "))

#Values
ya = (a**xa) % q
yb = (a**xb) % q
print("Key calculated by A is",key_a(yb,xa,q))
print("Key calculated by B is",key_b(ya,xb,q))