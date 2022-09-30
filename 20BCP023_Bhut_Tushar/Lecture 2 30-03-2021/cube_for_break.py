# Find the cube root of a perfect cube
x = int(input('Enter an integer: '))
for ans in range(abs(x)+1):
    if ans**3 >= abs(x):
        break
if ans**3 != abs(x):
    print(x, 'is not  a perfect cube.')
else:
    if x < 0:      # e.g. x = -27
        ans = -ans   # ans = -3
    print('Cube root of', x, 'is', ans)
