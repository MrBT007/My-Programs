class Student:
    pass
    # init is a consructor which no need to be call

    # self --> takes the object on which applies
    def __init__(self, aname, anickname, apercent):
        self.name = aname
        self.nickname = anickname
        self.percentage = apercent

    def printdetails(self):
        return f"Name : {self.aname}.\nNick Name : {self.anickname}.\nPercentage : {self.apercent}."

# Tushar = Student()
# Darshan = Student()
# Tushar.name = "Tushar"
# Darshan.name = "Darshan"
# Tushar.nickname = "Mr.BT"
# Darshan.nickname = "Lambo"
# Tushar.percentage = 73
# Darshan.percentage = 65


# for this aname , anickname , apercent
Tushar = Student("Tushar", "Mr.BT", 73)
print(Tushar.percentage)
