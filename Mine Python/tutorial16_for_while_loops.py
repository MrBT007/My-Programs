list1 = [["Tushar", 2], ["Darshan", 4], ["Bhautik", 3]]

dict1 = dict(list1)
# for items , roti in dict1:  -----> in this if dict1.items() ---> Then print otherwise throw Error
#     print(items ,"eat",roti,"Rotis")

for items, roti in dict1.items():
    print(items, "eat", roti, "Rotis")

# Quiz

list2 = [2, 8, 6, 4, 7, "pani puri", 45, 98, 48, 11]

for item in list2:
    if str(item).isnumeric() and item >= 6:
        print(item)

# printing 0 to 10 by using while loop

i = 0
while (i <= 10):
    print(i)
    i = i+1
