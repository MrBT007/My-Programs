total = 0
s = '8.53, 2.8, 6.823, 3.99, 15.7, 22.365'
for c in s.split(','):  # split() method returns a list of strings after breaking the given string
    total += float(c)
print('The total of the digits is: ', total)
