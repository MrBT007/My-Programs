# Name: Bhut Tushar

s = input('Enter a string: ')
for c in s:
    if(c == '$'):
        continue
    elif (c == '!'):
        pass
        print('It is !')
    elif(c == '.'):
        break
    print('Current character: ', c)
