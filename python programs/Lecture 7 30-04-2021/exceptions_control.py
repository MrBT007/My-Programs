# Name: Bhut Tushar

def findAnEven(l):
    """ Assumes l is a list of integers
    Returns the first even number in l
    Raises ValueError if l does not contain an even number"""
    for i in l:
        if i % 2 == 0:
            return i
    raise ValueError('l does not contain an even number')


l = [1, 9, 3, 5, 6, 7]
ans = findAnEven(l)
print('First even number: ', ans)
