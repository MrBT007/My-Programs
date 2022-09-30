# Name: Bhut Tushar

def fibonacci(n):
    """ Assumes that int n > 1
Returns first n numbers of Fibonacci Series"""
    if n == 1:
        return 0
    if n == 2:
        return 1
    return fibonacci(n-1) + fibonacci(n-2)

print('The docstring of the function root: ', fibonacci.__doc__)
n = int(input('Enter the value of n: '))
print(f'First {n} term(s) of Fibonacci Series are: ')
for i in range (1,n+1):
    print(fibonacci(i))
