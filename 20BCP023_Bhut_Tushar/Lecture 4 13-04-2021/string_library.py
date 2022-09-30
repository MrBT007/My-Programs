# Name: Bhut Tushar

import string
text = 'gandhinagar GujaraT'
print('Original string: ', text)
print('Length: ', len(text))
print('Swap: ', text.swapcase())
print('Capitalization of first character of each word: ', string.capwords(text))
print('Prints the digits: ', string.digits)
print('ASCII_lowerCase and ASCII_upperCase: ', string.ascii_letters)
print('Octal digits: ', string.octdigits)
print('Replace: ', text.replace(text, 'Gujarat Gandhinagar'))
print('Remove whitespaces with strip: ', text.strip())
print('Upper Case: ', text.upper())
print('Lower Case: ', text.lower())
print('Is lower: ', text.islower())
print('Is alpha: ', text.isalpha())
print('Count occurrence of a substring: ', text.count('and'))
print('First index of first occurrence of the substring: ', text.find('Guj'))
print('First index of first occurrence of the substring in reverse order: ',
      text.rfind('Guj'))
print('Find index of first occurrence of the substring with index: ', text.index('Guj'))
print('Pad zeros on left: ', text.zfill(25))
print('Split with character n: ', text.split('n'))
text2='Gujarat '
print('Length of text2 is: ', len(text2))
print('After removing trailing whitespace: ', len(text2.rstrip()))
