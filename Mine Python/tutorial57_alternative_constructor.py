class Employee:
    no_leaves = 7
    pass
    def __init__(self,name,salary,role):
        self.name = name
        self.salary = salary
        self.role = role

    def printdetails(self):
        print(f"Name : {self.name}\nSalary = {self.salary}\nRole = {self.role}")

    @classmethod
    def from_dash(cls,string):
        # newobj = string.split("-")
        # return cls(newobj[0],newobj[1],newobj[2])
        return cls(*string.split("-")) #args

Tushar = Employee("Tushar","200","Head")
Darshan = Employee("Darshan","150","Manager")

Vismay = Employee.from_dash("Vismay-135-Selector") #this fumction goes to __init__ .. if we have changed in __init__ then it reflects here

print(Vismay.salary)
Vismay.printdetails()