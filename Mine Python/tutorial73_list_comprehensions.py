# ls = []
# for i in range(100):
#     if i % 3 ==0:
#         ls.append(i)

# # List Comprehensions
# ls = [i for i in range(100) if i % 3 == 0]
# print(ls) #same as above printed (comment)

# # Dictionary Comprehensions
# dict1 = {i:f"Item {i}" for i in range(100) if i%10 == 0}
# print(dict1)
# # After reverse the dictionary
# dict1 = {value:key for key,value in dict1.items()} #we can store it in another dictionary
# print(dict1)

# #Set comprehensions
# dresses ={dress for dress in ["dress1","dress2","dress1","dress2"]}
# print(dresses)

# #Generator Comprehensions
# gen = (i for i in range(100) if i%2 == 0)
# print(type(gen))
# print(gen.__next__())
# print(gen.__next__())

# Quiz

ls = []
num = int(input("How many Items do you want ot add : "))
for i in range(1, num+1):
    item = input(f"Enter Item {i} : ")
    ls.append(item)

print(ls)
choise = int(input(
    "Enter 1: List Comprehension \n2: Dictionary Comprehension \n3: Set Comprehension"))
if choise == 1:
    print(ls)
elif choise == 2:
    dictn = {f"item {item}": item for item in ls}
    print(dictn)
elif choise == 3:
    sets = {item for item in ls}
    print(sets)
else:
    print("You have Entered Wrong Number")
