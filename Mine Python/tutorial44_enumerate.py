lst = ["Pani Puri", "Vadapav", "Dabeli", "Bhel", "Pizza", "Dosa"]

i = 1
for items in lst:
    if i % 2 != 0:  # want to print even or odd elements
        print(f"Jarvis please buy {items}")
    i += 1

for index, items in enumerate(lst):
    if index % 2 == 0:  # here index starts with 0 ,that's might be a complex for remember it
        print(f"Jarvis please buy {items}")
