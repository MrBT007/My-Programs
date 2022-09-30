n = 7

print("Enter Your number")
num = int(input())

for i in range(1, 9):
    if num > n:
        print("Guess lower than", num)
        print("You have", 9-i, "left")
        i = i+1
        print("Enter Your number")
        num = int(input())
        if i == 9:
            print("Game Over 😧 Try Again ")
        continue
    elif num < n:
        print("Guess greater than", num)
        print("You have", 9-i, "left")
        i = i+1
        print("Enter Your number")
        num = int(input())
        if i == 9:
            print("Game Over 😧 Try Again ")
        continue

if (num == n):
    print("Kararuletion (Congratulaion) 🤗 You have guessed write one")
