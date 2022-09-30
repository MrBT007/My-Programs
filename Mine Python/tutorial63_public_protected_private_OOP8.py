"""
Let a Paper on which you taken some notes

Public Variable --> Stick that paper outside of your home then every one can see is (Public)
Protected Variable --> Stick that paper inside your home then your family member can see it
Private Variable --> Stick that paper inside your room then only you can see it 

"""


class Student:
    room = 309 # public variable
    _proc = 55 # protected variable
    __private = 45 # private variable nd saved as ! ! _classname__varname ! !
   # Here python have create name mangling 
    pass
    # init is a consructor which no need to be call

    # self --> takes the object on which applies
    def __init__(self, aname, anickname, apercent):
        self.name = aname
        self.nickname = anickname
        self.percentage = apercent

    def printdetails(self):
        return f"Name : {self.aname}.\nNick Name : {self.anickname}.\nPercentage : {self.apercent}."

    @classmethod
    def new_room(cls, newroom):  # cls wich is the object
        cls.new_room = newroom


Tushar = Student("Tushar", "Mr.BT", 73)
Darshan = Student("Darshan", "Lambo", 67)
print(Tushar.room)
print(Tushar._proc)
print(Tushar._Student__private) # If we want to print private variable then we can use it