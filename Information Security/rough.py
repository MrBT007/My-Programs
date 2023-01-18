# write encryption and decryption for playfair cipher in python.

def playfair_encrypt(pt, key): 
    #make 5x5 matrix with key 
    pt = pt.lower() 
    key = key.lower() 
    pt = pt.replace('j', 'i') 
    key = key.replace('j', 'i') 
    key_matrix = [[0 for i in range(5)] for j in range(5)] 
    pt_matrix = [['' for i in range(2)] for j in range(int(len(pt)/2))] 
    print(pt_matrix) 
    k = 0 
    for i in range(5): 
        for j in range(5): 
            if key[k]==' ': 
                continue
            key_matrix[i][j] = key[k] 
            k += 1 
    print(key_matrix) 
    #divide pt into bigrams 
    i = 0 
    j = 0 
    k = 0 
    while k < len(pt): 
        if pt[k] == ' ': 
            k += 1
            continue
        pt_matrix[i][j] = pt[k] 
        j += 1 
        if j == 2: 
            i += 1
            j = 0
        k += 1 
    print(pt_matrix) 
    #encrypt bigrams 
    ct_matrix = [['' for i in range(2)] for j in range(int(len(pt)/2))] 
    for i in range(int(len(pt)/2)): 
        #same row 
        if pt_matrix[i][0] in key_matrix[0]: 
            ct_matrix[i][0] = key_matrix[0][(key_matrix[0].index(pt_matrix[i][0])+1)%5] 
            ct_matrix[i][1] = key_matrix[0][(key_matrix[0].index(pt_matrix[i][1])+1)%5] 
        elif pt_matrix[i][1] in key_matrix[0]: 
            ct_matrix[i][0] = key_matrix[0][(key_matrix[0].index(pt_matrix[i][0])+1)%5] 
            ct_matrix[i][1] = key_matrix[0][(key_matrix[0].index(pt_matrix[i][1])+1)%5] 
        #same col 
        elif pt_matrix[i][0][0] == pt_matrix[i][1][0]: 
            for j in range(5): 
                if key_matrix[j][0] == pt_matrix[i][0][0]: 
                    row1 = j 
                    row2 = j 
            for j in range(5): 
                if key_matrix[j][0] == pt_matrix[i][1][0]: 
                    row1 = j 
                    row2 = j 
            ct_matrix[i][0] = key_matrix[(row1+1)%5][0] 
            ct_matrix[i][1] = key_matrix[(row2+1)%5][0] 
        #rectangular box 
        else: 
            for j in range(5): 
                if key_matrix[j][0] == pt_matrix[i][0][0]: 
                    row1 = j 
                if key_matrix[j][0] == pt_matrix[i][1][0]: 
                    row2 = j 
            for j in range(5): 
                if key_matrix[0][j] == pt_matrix[i][0][1]: 
                    col1 = j 
                if key_matrix[0][j] == pt_matrix[i][1][1]: 
                    col2 = j 
            ct_matrix[i][0] = key_matrix[row1][col2] 
            ct_matrix[i][1] = key_matrix[row2][col1] 
    print(ct_matrix) 
    #convert ct_matrix into ciphertext string 
    ct = '' 
    for i in range(int(len(pt)/2)): 
        for j in range(2): 
            ct += ct_matrix[i][j] 
    return ct 
  
#decrypt function 
def playfair_decrypt(ct, key): 
    #make 5x5 matrix with key 
    ct = ct.lower() 
    key = key.lower() 
    ct = ct.replace('j', 'i') 
    key = key.replace('j', 'i') 
    key_matrix = [[0 for i in range(5)] for j in range(5)] 
    ct_matrix = [['' for i in range(2)] for j in range(int(len(ct)/2))] 
    print(ct_matrix) 
    k = 0 
    for i in range(5): 
        for j in range(5): 
            if key[k]==' ': 
                continue
            key_matrix[i][j] = key[k] 
            k += 1 
    print(key_matrix) 
    #divide ct into bigrams 
    i = 0 
    j = 0 
    k = 0 
    while k < len(ct): 
        if ct[k] == ' ': 
            k += 1
            continue
        ct_matrix[i][j] = ct[k] 
        j += 1 
        if j == 2: 
            i += 1
            j = 0
        k += 1 
    print(ct_matrix) 
    #decrypt bigrams 
    pt_matrix = [['' for i in range(2)] for j in range(int(len(ct)/2))] 
    for i in range(int(len(ct)/2)): 
        #same row 
        if ct_matrix[i][0] in key_matrix[0]: 
            pt_matrix[i][0] = key_matrix[0][(key_matrix[0].index(ct_matrix[i][0])-1)%5] 
            pt_matrix[i][1] = key_matrix[0][(key_matrix[0].index(ct_matrix[i][1])-1)%5] 
        elif ct_matrix[i][1] in key_matrix[0]: 
            pt_matrix[i][0] = key_matrix[0][(key_matrix[0].index(ct_matrix[i][0])-1)%5] 
            pt_matrix[i][1] = key_matrix[0][(key_matrix[0].index(ct_matrix[i][1])-1)%5] 
        #same col 
        elif ct_matrix[i][0][0] == ct_matrix[i][1][0]: 
            for j in range(5): 
                if key_matrix[j][0] == ct_matrix[i][0][0]: 
                    row1 = j 
                    row2 = j 
            for j in range(5): 
                if key_matrix[j][0] == ct_matrix[i][1][0]: 
                    row1 = j 
                    row2 = j 
            pt_matrix[i][0] = key_matrix[(row1-1)%5][0] 
            pt_matrix[i][1] = key_matrix[(row2-1)%5][0] 
        #rectangular box 
        else: 
            for j in range(5): 
                if key_matrix[j][0] == ct_matrix[i][0][0]: 
                    row1 = j 
                if key_matrix[j][0] == ct_matrix[i][1][0]: 
                    row2 = j 
            for j in range(5): 
                if key_matrix[0][j] == ct_matrix[i][0][1]: 
                    col1 = j 
                if key_matrix[0][j] == ct_matrix[i][1][1]: 
                    col2 = j 
            pt_matrix[i][0] = key_matrix[row1][col2] 
            pt_matrix[i][1] = key_matrix[row2][col1] 
    print(pt_matrix) 
    #convert pt_matrix into plaintext string 
    pt = '' 
    for i in range(int(len(ct)/2)): 
        for j in range(2): 
            pt += pt_matrix[i][j] 
    return pt

plainText = str(input("Enter Plain Text : "))
key = str(input("Enter key : "))
encrypt_msg = playfair_encrypt(plainText,key)
print("enc:",encrypt_msg)
decrypt_msg = playfair_encrypt(encrypt_msg,key)
print("dec:",decrypt_msg)