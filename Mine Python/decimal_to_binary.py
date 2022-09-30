import sys
import re
import random
import os
import math


def DecimalToBinary(num):

    if num >= 1:
        DecimalToBinary(num // 2)
    while num != 0:
        print(num % 2, end='')
        break


# Driver Code
if __name__ == '__main__':

    # decimal value
    dec_val = 142

    # Calling function
    DecimalToBinary(dec_val)

# Else


def decimal2binary(num):
    return bin(num).replace("0b", '')


print("\n")
print(decimal2binary(dec_val))


# for consequtive numbers
"""

def decimal2binary(num):
    # if num >=1:
    #     decimal2binary(num//2)
    # while num != 0:
    #     print(num % 2,end='')
    #     break
    binary = bin(num)  # convert num to binary starting with 0b
    binary = binary[2:]  # Remove 0b

    print(max(map(len, binary.split('0'))))
    # first split binary 0 (removes 0) --> 1101 -->['11','1']
    # then maps into length -->[2,1] and at last find max number [2]


if __name__ == '__main__':
    n = int(input().strip())
    decimal2binary(n)

"""