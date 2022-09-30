# Name: Bhut Tushar

a = 15
def change():
    global a
    a = 5
    a += 5
    print('Value of a inside the function is: ', a)

print('Value of a before calling the function is: ', a)
change()
print('Value of a outside the function is: ', a)
