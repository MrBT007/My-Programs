class Employee:
    no_leaves = 7

    def __init__(self, name, salary, role):
        self.name = name
        self.salary = salary
        self.role = role

    def printdetails(self):
        print(
            f"Name : {self.name}\nSalary = {self.salary}\nRole = {self.role}")

    def __add__(self, other):
        return self.salary + other.salary

    def __truediv__(self,other):
        return self.salary / other.salary


Tushar = Employee("Tushar", 7500, "Founder")
Darshan = Employee("Darshan", 500, "Co-Founder")

print(Tushar + Darshan)
print(Tushar / Darshan)
