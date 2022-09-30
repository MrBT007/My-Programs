# Faulty Calculator

print("Enter your first number")
term1 = int(input())

print("Enter your operator number")
operator = input()

print("Enter your second number")
term2 = int(input())

if (term1 == 45 and operator == "*" and term2 == 3):
    print("Your answer is 555")

elif (term1 == 56 and operator == "+" and term2 == 9):
    print("Your answer is 77")

elif (term1 == 56 and operator == "/" and term2 == 6):
    print("Your answer is 4")


elif (operator == '*' and term1 != 45 and term2 != 3):
    result = term1 * term2
    print("Your answer is", result)
elif (operator == '+' and term1 != 56 and term2 != 9):
    result = term1 + term2
    print("Your answer is", result)
elif (operator == '/' and term1 != 56 and term2 != 6):
    result = term1 / term2
    print("Your answer is", result)
elif (operator == '-'):
    result = term1 - term2
    print("Your answer is", result)
else:
    print("Unexpected Error ! Run again")
