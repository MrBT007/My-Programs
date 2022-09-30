# Recursion means define a function and use it in itself called recursion ..

# find Factorial using Iterative approach

# def Factorial_Iterative(n):
#     fact = 1
#     for i in range(1,num+1):
#         fact = fact * i

#     return fact

# num = int(input("Enter a positive Integer : "))
# print("Factorial by Using Iterative Approach",Factorial_Iterative(num))


# def Factorial_Recursive(n):

#     if n == 0 or n == 1:
#         return 1
#     else:
#         return n * Factorial_Recursive(n-1)

#     return fact

# print("Factorial by Using Recursive Approach",Factorial_Recursive(num))

# Fibonaccie Series by recursive approach

def fib(n):
    if n <= 1:
        return n
    else:
        return fib(n-1) + fib(n-2)


num = int(input("Enter number for finding Fibonaccie Series : "))

for i in range(num):
    print(fib(i))
