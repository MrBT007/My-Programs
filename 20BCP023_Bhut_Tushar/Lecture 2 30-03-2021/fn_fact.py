def factorial(n):
    num = 1
    while n >= 1:
        num *= n
        n -= 1
    return num


n = int(input('Enter an integer: '))
print('Factorial of', n, 'is', factorial(n))
