import random

random_num = random.randint(0, 5)  # prints random number between 0 to 5
# print(random_num)

# random number between 0 to 100 (generated number is between 0-1 but it is multiplyed then ..)
rand = random.random()*100
print(rand)

lst = ["Bhautik", "Darshan", "Vismay", "Pankaj", "Jay"]
choice = random.choice(lst)
print(choice, "is Good Friend of Tushar")
