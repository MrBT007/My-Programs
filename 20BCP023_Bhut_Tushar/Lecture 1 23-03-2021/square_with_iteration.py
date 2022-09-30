# Name: Bhut Tushar

x = input('Enter a number: ')
x = int(x)
ans = 0
remaining_iter = x
while remaining_iter != 0:
    ans = ans+x
    remaining_iter -= 1
print('Square of the number is: %i' % ans)
