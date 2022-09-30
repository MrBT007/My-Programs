# Name: Bhut Tushar

def factorial(n):
    """ Assumes that n is an int > 0
Returns n!"""
    if n == 1:
        return n
    else:
        return n*factorial(n-1)


print('The docstring of the function root: ', factorial.__doc__)
n = int(input('Enter a number of which factorial is to be calculated: '))
ans = factorial(n)
print(f'Factorial of {n} is: {ans}')
