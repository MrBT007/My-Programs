import numpy as np

class encryption:
    def encrypt(self,p,k):
        n = len(p)
        while(len(p)< len(k)):
            p +="Z"
        num = int(len(k) ** 0.5)
        
        plain = np.zeros((num,num))
        key = np.zeros((num,num))
        enc = np.zeros((num,num))
        
        a = 0
        for i in range(num):
            for j in range(num):
                plain[i][j] = (ord(p[a]) - ord('a'))
                key[i][j] = (ord(k[a]) - ord('a'))
                a+=1
        # print(key)
        
        for i in range(num):
            enc[i] = np.dot(key,plain[i])
        encry_text = ""
        
        for i in range(num):
            for j in range(num):
                encry_text += chr((int(enc[i][j]) % 26)+ord('a'))
        
        return encry_text,n
        
    def decryption(self,c,k,n):
        num = int(len(k) ** 0.5)
        
        cipher = np.zeros((num,num))
        key = np.zeros((num,num))
        dec = np.zeros((num,num))
        
        a = 0
        for i in range(num):
            for j in range(num):
                key[i][j] = (ord(k[a]) - ord('a'))
                a+=1
                
        det = round(np.linalg.det(key) % 26)

        a=1
        while((a*det) % 26 != 1):
            if a>26:
                print(f"Determinant is {round(np.linalg.det(key))} so, The multiplicative inverse is not possible.")
                exit()
            a+=2
            
        inv_matrix = (((np.linalg.inv(key) * np.linalg.det(key)) % 26) * a) % 26
        
        a = 0
        for i in range(num):
            for j in range(num):
                cipher[i][j] = (ord(c[a]) - ord('a'))
                a+=1
    
        for i in range(num):
            dec[i] = np.dot(inv_matrix,cipher[i])
            
        decr_text = ""
        for i in range(num):
            for j in range(num):
                decr_text += chr((int(round(dec[i][j])) % 26)+ord('a'))
                
        while(len(decr_text) > n):
            decr_text = decr_text.rstrip(decr_text[-1])
                
        return decr_text
    
p = input("Enter the plaintext: ")
k = input("Enter the keyword: ")
p = p.lower()
k = k.lower()

E = encryption()
enc,n = E.encrypt(p,k)
encry = enc
while(len(encry) > len(p)):
    encry = encry.rstrip(encry[-1])

print()
print("*"*50)
print()
print("Encrypted :",encry)
print()
print("Decrypted :",E.decryption(enc,k,n))
print()
print("*"*50)
print()

# p = "EXAM"
# k = "HILL"
