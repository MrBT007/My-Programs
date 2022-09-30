class Student:
    roomNo = 309  # This data be shared from all oblect which using this class
    pass # If I want to add something after but want to create class or else first then puts Pass for passing the line


Tushar = Student()
Darshan = Student()
# Both are differnt Objects

Tushar.nickname = "Mr.BT"
Darshan.nickname = "Lambo"
Tushar.percentage = 73
Darshan.percentage = 65

print(Tushar.nickname)
print(Darshan.roomNo)
# This means that new instance variable created like above percentage and nickname
Darshan.roomNo = 310
# Dictionory of Darshan in which all variables and its keys are stored
print(Darshan.__dict__)
print(Darshan.roomNo)
Student.roomNo = 311  # Thuis is way to change data for all objects || class.variable ||
print(Darshan.roomNo)  # in this it will consider instance variable
print(Tushar.roomNo)  # This will from class / Templet
