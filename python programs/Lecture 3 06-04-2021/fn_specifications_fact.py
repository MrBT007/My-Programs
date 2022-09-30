# Name: Bhut Tushar

# Bisection search 
# Factorial with function
def factorial(n):
    """ Assumption: Assumes n as an int n >= 0
Guarantees: Returns int num as factorial of n, num > 0"""
    num = 1
    while n >= 1:
        num *= n
        n -= 1
    return num

print('The docstring of the function root: ', factorial.__doc__)
print(f'Factorial of 5 is: {factorial(5)}')
