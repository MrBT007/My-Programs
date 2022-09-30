# Name: Bhut Tushar

def search(L, e):

    for i in range(len(L)):
        if L[i] == e:
            return i
            break
    return -1


Fruits = ['apple', 'banana', 'cherry',
          'pineapple', 'avocado', 'orange', 'blackberry']

element = input("Enter the fruit name which you want to search : ")

index = search(Fruits, element)

if (index is not -1):
    print(f"Fruit {element} is found in the list at position {index}")
else:
    print(f"Fruit {element} is NOT found in the list")
