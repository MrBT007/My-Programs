# Name: Bhut Tushar

def f(x):  # name x used as formal parameter
    # print(a)
    # global a
    # print(a)
    # a = 6
    y = 1
    x += y
    print('x inside function = ', x)
    # print(a)
    return x


# a = 8
x = 3
y = 2
z = f(x)  # value of x used as actual parameter
print('z = ', z)
print('x = ', x)
print('y = ', y)
# The assignment statement x += y within the function body binds the local name x to the object
# of f
