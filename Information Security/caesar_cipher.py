def caeser_cipher_encrypt(s,key):
    ans = ""
    for i in range(0,len(s)):
        char = s[i]
        if char.islower():
            temp = ord(char) - ord('a')
            temp = (temp+key)%26
            temp = temp+97
            ans = ans+chr(temp)
        elif char == ' ':
            ans = ans+' '
        else:
            temp = ord(char) - ord('A')
            temp = (temp+key)%26
            temp = temp+65
            ans = ans+chr(temp)
    print("Encrypted key : "+ans)
    return ans 

def caeser_cipher_decrypt(s,key):
    ans = ""
    for i in range(0,len(s)):
        char = s[i]
        if char.islower():
            temp = ord(char) - ord('a')
            temp = (temp-key)%26
            temp = temp+97
            ans = ans+chr(temp)
        elif char == ' ':
            ans = ans+' '
        else:
            temp = ord(char) - ord('A')
            temp = (temp-key)%26
            temp = temp+65
            ans = ans+chr(temp)
    return ans 

s = input("Enter String: ")
key = int(input("Enter key: "))
print()
print("*"*50)
print()
encrypted = caeser_cipher_encrypt(s,key)
print("Decrypted Key : "+caeser_cipher_decrypt(encrypted,key))
print()
print("*"*50)
print()

