grocery = ["Harpic", "Vim bar", "Nirma Detergent"]
numbers = [2, 7, 9, 11, 3]

numbers.sort()  # sort the numbers
print("sorted numbers are", numbers)
numbers.reverse()  # Reverse Recent numbers list
print("Reversed numbers are", numbers)
print("Length of numbers is", len(numbers))  # print length of numbers
print("Maximum number is", max(numbers))  # prints maximum number
print("Minimum number is", min(numbers))  # prints minimum number

numbers.append(71)  # insert 71 at last
print("append numbers are", numbers)

numbers.insert(2, 48)  # insert 48 at index 2
print("Inserted numbers are", numbers)

numbers.remove(9)
print("Removed number 9 after List is", numbers)

numbers.pop()
print("Remove last number from list", numbers)

# Mutable :- Can be change
# Immutable :- Can not be change

print("if 11 is there in list : ",11 in numbers)

"Tuple"

tp = (1, 2, 3)  # This is the form of tuple
print(tp)

print("Now tp is coverted into list from Tuple", list(tp))  # convert into list

# tp(1) = 45 This throw an error because tuple is Immutable

# tp2 = (1) This is not tuple
tp2 = (1,)  # For only one member we have to write like this in tuple
print(tp2)

# Swapping the numbers
a = 45
b = 98

# temp = a
# a = b
# b = temp
# print("After swapping","a is",a,"b is",b) #this is traditional method

a, b = b, a

print("After swapping", "a is", a, "b is", b)  # Reliable method

# Add one list into another list
numbers.extend(["Harpic", "Vim bar", "Nirma Detergent"])
print(numbers)

print(numbers.index(7))  # At which index 7 is stored
