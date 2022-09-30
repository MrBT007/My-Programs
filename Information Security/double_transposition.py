from math import ceil
import numpy as np


def encrypt(text, key):
    max_partition = 0
    for i in key:
        max_partition = max(int(i), max_partition)

    totrow = len(text)//max_partition
    if len(text) % max_partition:
        totrow += 1

    currentidx = 0
    totalsizeofmatrix = (max_partition - (len(text) %
                         max_partition))+len(text)
    matrix = []
    for i in range(0, totrow):
        temp = []
        for j in range(0, max_partition):
            if(currentidx >= len(text) and currentidx <= totalsizeofmatrix):
                temp.append('x')
            else:
                temp.append(text[currentidx])
            currentidx += 1
        matrix.append(temp)

    matrix = np.array(matrix)
    matrix = matrix.transpose()
    temp_dict = {}
    for kee, value in zip(key, matrix):
        temp_dict[kee] = value

    result = ""
    tempKey = sorted(key)
    for i in tempKey:
        currRow = temp_dict[i]
        for j in currRow:
            result += j
    return result,len(text)


def decrypt(text, key,len_text):
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


# __main__
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
