from functools import reduce
lst = ["2", "4", "9", "45", "78", "12"]  # this is in string format

# for i in range(len(lst)):
#     lst[i] = int(lst[i])

# lst[2] = lst[2] + 1

# print(lst) # here 9 (index of 2) is now increased to 1

lst = list(map(int, lst))
lst[2] = lst[2] + 1
print(lst)  # here 9 (index of 2) is now increased to 1


def square(a):
    return a*a


def cube(a):
    return a*a*a


func = [square, cube]

for i in range(1, 6):
    val = list(map(lambda x: x(i), func))
    print(val)

# Filter


def greater_than_5(num):
    return num > 5


lst3 = [8, 4, 6, 9, 41, 2, 3]
# filter function takes afunction and where it apllies (list / tuple)
num = list(filter(greater_than_5, lst3))
print(num)

lst4 = [1, 2, 3, 4, 5]
# If I want to 1 +2= 3 then 3+3 =6 then 6+4 = 10 then 10+5=15 and so on

# number = 0
# for i in lst4:
#      number = number +

# sometimes for loop maybe complex then we can use any other function

number = reduce(lambda x, y: x+y, lst4)
print(number)
