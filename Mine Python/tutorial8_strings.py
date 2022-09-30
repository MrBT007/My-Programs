mystr = "tushar is a good programmer"

print(mystr[5]) #print 5th character indix is started with 0 then T is considered at 0
print(mystr[0:6]) # This means it will print up to 6 character not including 6th character 
print("Length of string is",len(mystr))
print(mystr[:27]) #If we don't write starting number then it will consider 0 vice versa if we don't write ending number then it will consider entire length of string

# Negative Index
# In sring from last , it is starting as -1(r),-2(e),-3(m) and so on
print(mystr[-10:]) 

# String slicing

print(mystr[0:6:2]) # print string from 0 to 6(not include it) by diffrence 2
print(mystr[-27:6:1])
print(mystr[5:-28:-1])
print(mystr[-1:-28:-1]) # This reverse the sring
print(mystr[::-1]) # This also reverse the sring

# some function regarding string 

print(mystr.isalnum()) # Returns True if all characters in the string are alphanumeric
print(mystr.isalpha()) # Returns True if all characters in the string are in the alphabet
# for both above function it will fallse coz there is some space in string if we remove that space then it will true 
print(mystr.endswith("mer")) # In string last "mer" is there then it will true
print(mystr.count(" ")) # This will count all spaces 
print(mystr.capitalize()) # converts first character to upper case
print(mystr.lower()) # converts strintg into lower case
print(mystr.upper()) # converts strintg into upper case
print(mystr.find("is")) #This will find "is" by their index
print(mystr.replace("tushar is","I am")) # concate two strings 