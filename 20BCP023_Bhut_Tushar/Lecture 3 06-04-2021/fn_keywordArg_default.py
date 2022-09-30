# Name: Bhut Tushar

def printName(firstName, lastName, reverse):
    if reverse:
        print(lastName+',' + firstName)
    else:
        print(firstName, lastName)


# Default values allow a programmer to call a
def printName(firstName, lastName, reverse=False):
    if reverse:
        print(lastName+','+firstName)
    else:
        print(firstName, lastName)


printName('Tushar', 'Bhut', True)  # Positional argument
printName(lastName='Bhut ', firstName='Tushar', reverse=False)
# It is not legal to follow a keyword argument with a non-keyword argument e.g. printName(lastName)
printName('Tushar', 'Bhut')   # Positional with default values
printName('Tushar', 'Bhut', reverse=True)  # Default values allow
