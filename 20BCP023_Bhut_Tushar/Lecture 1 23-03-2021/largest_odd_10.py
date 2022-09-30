# Name: Bhut Tushar

i = 1
ans = -1
while i <= 10:
    x = input('Enter a number: ')
    x = int(x)
    if x % 2 == 1 and x > ans:
        ans = x
    i += 1
if ans != -1:
    print('The largest odd number is: %i' % ans)
else:
    print('No odd number entered.')
