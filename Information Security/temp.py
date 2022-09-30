import numpy as np
from math import ceil

def encrypt(text,key):
    encry = ""
    ascii_z = 122
    column = len(key)
    t = len(text)
    text = text.replace(" ","")
    row = ceil(len(text) / len(key)) 
    
    for i in range((row*column) - len(text),0,-1):
        text = text + chr(ascii_z-i+1)
        
    list = [i for i in text]
    matrix = np.array(list).reshape(row,column)
    
    for i in range(len(key)):
        pos = key.find(str(i+1))
        encry += str("".join(matrix[:,pos]))

    return encry,t

def decrypt(text,key,len_text):
    original_matrix =[]
    decry = ""
    column = len(key)
    text = text.replace(" ","")
    row = ceil(len(text) / len(key))
        
    list = [i for i in text]
    matrix1 = np.array(list).reshape(column,row)
        
    for i in key:
        i = int(i) - 1
        original_matrix.append(matrix1[i])
    
    for j in range(len(original_matrix[0])):
        for i in range(len(original_matrix)):
            decry += original_matrix[i][j]
            
    while(len(decry)!=len_text):
        decry = decry.rstrip(decry[-1])
    return decry


num = 2
text = input("Enter Text: ")
key =[]
t=[len(text)]
for i in range(num):
    k = input("Enter Key: ")
    key.append(k)

    text,x = encrypt(text, str(key[i]))
    t.append(x)

print()
print("*"*60)
print()
print("Encrypted Text : " ,text)


for i in range(num,0,-1):
    text = decrypt(text, str(key[i-1]),t[i])

print("\nDecrypted Text : " ,text)
print()
print("*"*60)
print()
