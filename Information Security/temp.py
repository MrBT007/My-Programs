import random
import math

def encrypt(M,e,n):
    c = 1
    for i in range(e):
        c = c*M
    return c%n

def decrypt(encrypted,e,n):
    c = 1
    for i in range(e):
        c = c*encrypted
    return c%n

if __name__ == '__main__':
    p = int(input("Enter prime number (int): "))
    q = int(input("Enter Co-prime number of previous number (int): "))
    M = int(input("Enter Message (int) should be less than p*q: "))

    n = p*q;
    totient = (p-1)*(q-1)

    cofactors = []
    for i in range(2,totient):
        if math.gcd(i,totient) == 1:
            cofactors.append(i)
    
    e = random.choice(cofactors)
    d = pow(e,-1,totient)

    encrypted = encrypt(M,e,n)
    decrypted = decrypt(encrypted,e,n)
    print("Encrypted :",encrypted)
    print("Decrypted :",decrypted)
