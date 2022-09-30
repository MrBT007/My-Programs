import random
chance = int(input("Enter how many times you want to play : "))
i = 1
yourCount = 0
compCount = 0
lst = ['s', 'w', 'g']

while i <= chance:
    print("Enter s-snake , w-water , g-gun")
    yourChoice = input()
    compChoice = random.choice(lst)

    if yourChoice == 's' and compChoice == 'w':
        print("You win this")
        yourCount += 1
        print("Your point is", yourCount)
        print("Computer's point is", compCount)

    elif yourChoice == 's' and compChoice == 'g':
        print("Computer win this")
        compCount += 1
        print("Your point is", yourCount)
        print("Computer's point is", compCount)

    elif yourChoice == compChoice:
        print(" ! ! This is Tie ! ! \n")
        print("Your point is", yourCount)
        print("Computer's point is", compCount)

    elif yourChoice == 'w' and compChoice == 'g':
        print("You win this")
        yourCount += 1
        print("Your point is", yourCount)
        print("Computer's point is", compCount)

    elif yourChoice == 'w' and compChoice == 's':
        print("Computer win this")
        compCount += 1
        print("Your point is", yourCount)
        print("Computer's point is", compCount)

    elif yourChoice == compChoice:
        print(" ! ! This is Tie ! ! \n")
        print("Your point is", yourCount)
        print("Computer's point is", compCount)

    elif yourChoice == 'g' and compChoice == 's':
        print("You win this")
        yourCount += 1
        print("Your point is", yourCount)
        print("Computer's point is", compCount)

    elif yourChoice == 'g' and compChoice == 'w':
        print("Computer win this")
        compCount += 1
        print("Your point is", yourCount)
        print("Computer's point is", compCount)

    elif yourChoice == compChoice:
        print(" ! ! This is Tie ! ! \n")
        print("Your point is", yourCount)
        print("Computer's point is", compCount)

    else:
        print("You have Entered wrong key")

    print(f"{chance - i} is left out of {chance}")
    i += 1

if yourCount > compCount:
    print("Your total score is", yourCount)
    print("Computer's total score is", compCount)
    print("You won this game")

elif yourCount < compCount:
    print("Your total score is", yourCount)
    print("Computer's total score is", compCount)
    print("Computer won this game")

else:
    print("! !This entire Game has Tie ! !")
