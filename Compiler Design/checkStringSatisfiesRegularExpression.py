# Prog 2
# def checkS(s):
#     if s[0] == 'a':
#         for i in range(1,len(s)-1):
#             if s[i] != s[i+1]:
#                 return False
#         return True
#     else:
#         return False    



# regular_expression = "a(a+b)*"
# s = str(input("Enter String: "))
# if checkS(s):
#     print("Yes")
# else:
#     print("No")

# Prog 1
# def checkS(s):
#     if(s[0] == 'a'):
#         for i in range(1,len(s)-1):
#             if s[i] != s[i+1]:
#                 return False
#         return True
#     elif(s[0] == 'b'):
#         if len(s)>2:
#             return False
#         else:
#             if(s[1] != 'a'):
#                 return False
#             return True


# def checkS(s):
#     if(s.__contains__('b')):
#         return True
#     return False

# (a+b)b*(a+b)a*(a+b)
def checkS(s):
    i = 0
    if(len(s)<3):
        return False
    if(s[0] == 'a'):
        i+=1
        if(s[i] == 'b'):
            while(s[i]!='a' and i<len(s)):
                i+=1
            if(s[i] == 'b' and i==len(s)-1):
                return True
            if(i == len(s)-1):
                return True
        else:
            while(i<len(s) and s[i]=='a'):
                i+=1
            if(i==len(s)-1 and s[i] == 'b'):
                return True
            if(i == len(s)-1):
                return True
    else:
        if(s[1] == 'b'):
            while(i<len(s) and s[i]!='a'):
                i+=1
            if(i == len(s)-1):
                return True
            if(s[i] == 'b' and i==len(s)-1):
                return True
        else:
            while(i<len(s) and s[i]!='a'):
                i+=1
            if(i == len(s)-1):
                return True
            if(s[i] == 'b' and i==len(s)-1):
                return True

s = str(input("Enter String: "))
if checkS(s):
    print("Yes")
else:
    print("No")