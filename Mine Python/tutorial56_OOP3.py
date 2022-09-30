class Student:
    room = 309
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

print(Tushar.__dict__)  # Before changed room
# This is not a instance variable this is changed class variable means it is changed for all objects
Tushar.new_room(311)
print(Darshan.new_room)
print(Tushar.__dict__)  # After change room both dictionary file is same
