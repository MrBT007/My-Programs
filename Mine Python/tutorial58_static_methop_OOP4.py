class Employee:
    pass

    def __init__(self, name, salary, role):
        self.name = name
        self.salary = salary
        self.role = role

    def printdetails(self):
        print(f"Name is {self.name}. Salary is {self.salary}. Role is {self.role}")

    # @staticmethod
    def printgood(string):
        print(f"This is good {string}")


# print(Employee.printgood("Movie")) # here i've printed it then it shows none value because we haven't returned value
Employee.printgood("Movie")
# If I want to make a function which can't contains any class and function .. just take a string or number or nothing but prints for only class method
# Then I have to use static method
