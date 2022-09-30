# Name: Bhut Tushar

class Person:
    def __init__(self, fname, lname):
        self.firstname = fname
        self.lastname = lname
    
    def printname(self):
        print(self.firstname, self.lastname)

class Student(Person):
    def __init__(self, fname, lname, year):
        super().__init__(fname, lname)
        self.graduationyear = year
    
    def welcome(self):
        print("Welcome", self.firstname, self.lastname,"to the class of", self.graduationyear)
    
class Faculty(Person):
    def __init__(self, fname, lname, salary):
        super().__init__(fname, lname)
        self.salary = salary
    
    def display(self):
        print("Welcome", self.firstname, self.lastname,"to PDEU and your salary is", self.salary)

z = Person("Name", "Surname")
x = Student("devil", "evil", 2022)
y = Faculty("Anonymous", "person", 25000)

x.welcome()
x.printname()
y.display()
z.printname()
