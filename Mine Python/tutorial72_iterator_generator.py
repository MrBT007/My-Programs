"""
Iterable : It is an object. Which can provide Iterator if we apply __iter__() or __getitem__() on any object 

Iterator : In which __next__() function is defined called Iterator

Iteration : During Iterate any object that method called Iteration 

"""
name = "Tushar"  # string is Iterable


def gen(n):
    # for i in range(n):
    #     yield i

    for j in name:
        yield j


t = gen("Tushar")
print(t.__next__())
print(t.__next__())
print(t.__next__())

# g = gen(3)
# print(g) # This shows g is generator object
# print(g.__next__())
# print("Hello")
# print(g.__next__())
# print("Hello")
# print(g.__next__())
# print("Hello")
# print(g.__next__()) #This will give error because generator generates upto 2 not 3 times
# print("Hello")

# Generator is stores the value but not geerates like for loop it gernerates on the fly while it needs to be generate

# for i in name:
#     print(i)
n = 365
# for j in n:
#     print(n) # Throw error that int obj is not Iterable
