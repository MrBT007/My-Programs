# Name: Bhut Tushar

a = input('Enter the first number: ')
b = input('Enter the second number: ')
type(a)  # Checks the type of first number
type(b)
# Notice that the variable a or b is bound to the str value and not the int
print(4*a, 5*b)
a = int(a)
b = int(b)
tmp = a
a = b
b = tmp
print('After swapping first number: %i,' % a, 'second number: %i.' % b)
