# Name: Bhut Tushar

# String Expressions

str1 = 'PDPU'
str2 = 'School of Technology'

print('Length of str1 = ', len(str1))  # len function
print('Length of str2 = ', len(str2))
print(str1+' '+str2)  # Concatenate by overloading operator
print(3*str1)  # Overloading * will print the string 3 times
# print(str2*str1) This operation will generate TypeError
# print('3'<4) typeError: '<' not supported between instances of 'str' and 'int'
print('First character of str1 (Method 1): ', str1[0])
print('First character of str1 (Method 2): ', str1[-4])
print('Slicing str1: ', str1[1:4])
print('Slicing str2: ', str2[10:len(str2)])
print('Default slicing str2: ', str2[:])
