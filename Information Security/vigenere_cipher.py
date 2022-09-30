def encrypt(plainText,key):
    cipherText = ""
    for i in range (0,len(key)-1):
        if(plainText[i] == ' '):
            cipherText+= " "
        else:
            difference = abs(ord(plainText[i]) + ord(key[i]) -ord('a') - ord('a'))
            difference = difference%26
            cipherText += chr(difference+97)
    return cipherText

def decrypt(cipherText,key):
    plainText = ""
    for i in range (0,len(key)-1):
        if(cipherText[i] == ' '):
            plainText += " "
        else :
            difference = ord(cipherText[i]) - ord(key[i])
            difference = difference%26
            plainText += chr(difference+97)

    return plainText

# main

plainText = input("Enter Plaintext : ")
key = input("Enter Key : ")
plainText = plainText.lower()
key = key.lower()
i = 0
while(len(key) <= len(plainText)):
    key += key[i]
    i+=1

cipherText = encrypt(plainText,key)
print()
print("*"*50)
print()
print("Encrypted Text : "+cipherText)
print()
print("Decrypted Text : "+decrypt(cipherText,key))
print()
print("*"*50)
print()
# WEAREDISCOVEREDSAVEYOURSELF
# DECEPTIVE