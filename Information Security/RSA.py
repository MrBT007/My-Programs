import random
import math


def is_coprime(x, y):
    return math.gcd(x, y) == 1


p = int(input("Enter any prime number: "))
q = int(input("Enter any co-prime: "))
M = int(input("Enter message number: "))

n = p * q
totientF = (p-1)*(q-1)

cofactors = []

for i in range(2, totientF):
    if (is_coprime(i, totientF)):
        cofactors.append(i)

e = random.choice(cofactors)
print("e :", e)
d = pow(e, -1, totientF)
print("d :", d)


def encryption(M, e, n):
    c = 1
    for i in range(e):
        c = c * M
    return c % n


def decryption(encrypted, d, n):
    c = 1
    for i in range(d):
        c = c * encrypted
    return c % n

encrypt_text = encryption(M, e, n)
print()
print("*"*50)
print()
print("Encrypted Message :", encrypt_text)
print()
decrypt_text = decryption(encrypt_text, d, n)
print("Decrypted Message :", decrypt_text)
print()
print("*"*50)
print()

# p =7
# q =23
# M = 45
