# Name: Bhut Tushar

# To check if the given number is prime or not
num = int(input('Enter an integer: '))

if num > 1:
    for i in range(2, num//2+1):
        if (num%i)==0:
            print(num,'is not a prime number.')
            break
    else:
        print(num,'is a prime number.')
else:
    print(num,'is not a prime number.')
