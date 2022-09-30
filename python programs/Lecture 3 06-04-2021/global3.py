# Name: Bhut Tushar

a = 15
a += 10
print("Value of a before calling any function: ", a)

def change1():
    global a
    a += 5
    print("Value of a inside a function: ", a)

def change2():
    global a
    a += 10
    print("Value of a inside a function: ", a)

change1()
change2()
