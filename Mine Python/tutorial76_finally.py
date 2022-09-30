f1 = open("Tushar.txt")

try:
    f2 = open("My.txt")
except Exception as e:
    print(e)

# print("Below is Finally line")
# Finally is connected with except like if else .. ,means if we want to write finally then we can't add another statement between them
finally:
    print("Execute it anyway")
    f1.close()
    # f2.close()

print("Below is Finally line")
