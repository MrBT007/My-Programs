# Name: Bhut Tushar

def arithmetic(a, b):
    addition = a+b
    subtraction = a-b
    multiplication = a*b
    division = a/b
    return (addition, subtraction, multiplication, division)


a = int(input('Enter first number: '))
b = int(input('Enter second number: '))
(add, sub, mul, div) = arithmetic(a, b)
print('Addition:', add, 'Subtraction:', sub,
      'Multiplication:', mul, 'Division:%.2f'% div)
