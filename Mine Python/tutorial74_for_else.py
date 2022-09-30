menu = ["Palak Paneer", "Kaju curry", "Pulav", "Sadhu Roti", "Tanduri Roti"]

for items in menu:
    print(items)
    break
# here first item will be printed and kick out from loop therefore "else" statement won't be printed
else:
    print("Loop ended and 'else' printed")

for items in menu:
    if items == "Meggi":
        break
# Here if "Meggi" will found in list then break from loop otherwise runs entire loop and will print "else" statement
else:
    print("Your Item not found in Menu")

# If entire for loop will be execute then and then "else" statement will be printed
