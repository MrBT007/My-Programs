"""
"r" - Open File for Reading
"w" - Open file for writing
"x" - Creates file if not exist
"a"(append) - add more content to a file
"t" - text mode
"b" - binary mode
"+" - read + write
"""

f = open("Tushar.txt", "rt")
# content = f.read()
# print(content)
# content = f.read(4) # if this not commented then it will print blank because it already read one time
# print("1",content) # Will print only first 4 laters
# f.close()

# t = open("Tushar.txt","a") # this will add below line while this code runs
# content2 = t.write("I am a Programmer\n")
# print(content2)
# t.close()
# for line in f: # for execute this you have to comment line no 12-16
#     print(line,end=" ")

# print(f.readline()) # prints first line
# print(f.readline()) # prints second line as well as prints next line if its written

# print(f.readlines())  # will prints all text as a list

# g = open("Tushar.txt","w")
# a = g.write("**Hacked**\n")
# print(a)
# a = g.write("**Tracks you**\n")
# print(a) # write only one times

h = open("Tushar.txt", "r+")  # r+ means read + write
print(h.read())
h.write("Hemlo (Cheems) \n")
