def GCD(x,y):
    while(y):
        x,y = y,x%y
    return x;

# print(GCD(15,15))

#RSA algorithm
def RSA(p,q,msg,pop):
    n = p*q
    # print("The value of n is ",n)
    phi = (p-1)*(q-1)
    e = 2
    while(e<phi):
        if GCD(e,phi) == 1:
            break
        else:
            e+=1
    # print("The value of e is ",e)
    d = 1
    while(d<phi):
        if((d*e)%phi == 1):
            break
        else:
            d+=1
    # print("The value of d is ",d)
    c_n = (pop ** e)%n
    print(c_n)
    cipher_text = ''
    # C = (P ^ e) % n
    for ch in msg:
        # convert the Character to ascii (ord)
        ch = ord(ch)
        cipher_text += chr((ch ** e) % n)
    
    print(f'Encrypted Text: {cipher_text}')
    
    pop = (c_n ** d) % n
    print(pop)
    plain_text = ''
    # P = (C ^ d) % n
    for ch in cipher_text:
        # convert it to ascii
        ch = ord(ch)
        plain_text += chr((ch ** d) % n)
    print(f'Decrypted Text: {plain_text}')
    
    return e,d,n 

print(RSA(11,19,'tushar',35))