import os

print(os.getcwd()) # gets current working directory and print
# os.chdir("C://") # change directory to C:\
# print(os.getcwd()) 
# f = open("Tushar.txt") #this will give error because in C drive there is no any Tushar.txt file 
# os.mkdir("This") #makes a folder in current directory named This
# os.mkdir("This/That") #makes a folder in "This" folder named "That"

#If wwe want to direct make two folders like above
#makes directories
# os.makedirs("This/That/What") #first makes This then Makes That in This and then makes What in That

#Rename any file
# os.rename("mylogs.txt","Tusharlogs.txt") # mylogs --> Tusharlogs

#Print environment variable
# print(os.environ.get("Path"))

# print(os.path.join("C:////","/Tushar.txt")) # C:/Tushar.txt --> If second path have / then only it considered
# print(os.path.join("C:////","Tushar.txt")) # C:////Tushar.txt --> If second path have no / then first path's / considerd otherwise not

# print(os.path.exists("C://")) # True because path exists
# print(os.path.exists("C://Tushar.txt")) # False because path doesn't exists
# print(os.path.exists("C://Program Files")) # True because path exists

print(os.path.isfile("Tushar.txt")) # True because Tushar.txt file exists in this directory if not then throws error 
print(os.path.isfile("C://Program Files")) # There is no any file like it
print(os.path.isdir("C://Program Files")) # True because Program Files is directory (Folder)