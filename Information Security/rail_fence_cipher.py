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
    print(totalsizeofmatrix)
    print(totrow*max_partition)
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
    return result


def decrypt(encrypted_text, key,len_text):
    matrix = []
    max_partition = 0
    for i in key:
        max_partition = max(int(i), max_partition)
    totrow = len(encrypted_text)//max_partition

    currentidx = 0
    for i in range(0, max_partition):
        temp = []
        for j in range(0, totrow):
            if currentidx < len(encrypted_text):
                temp.append(encrypted_text[currentidx])
            currentidx += 1
        matrix.append(temp)
    matrix = np.array(matrix)
    temp_dict = {}
    for kee, value in zip(sorted(key), matrix):
        temp_dict[kee] = value
    matrix2 = []
    for i in key:
        matrix2.append(temp_dict[i])
    matrix2 = np.array(matrix2)
    matrix2 = matrix2.transpose()
    result = ""
    for i in matrix2:
        for j in i:
            result += j
    while(len(result)!=len_text):
        result = result.rstrip(result[-1])
    print("Decrypted Text : "+result)


# __main__
text = input("Enter Text: ")
key = input("Enter Key: ")

encryptedText = encrypt(text, key)
print("*"*40)
print()
print("Encrypted Text : "+encryptedText)
print()
decrypt(encryptedText, key,len(text))
print()
print("*"*40)
# attackpostponeduntiltwoam
# 5213746
