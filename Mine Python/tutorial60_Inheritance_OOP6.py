class Employee:
    pass

    def __init__(self, name, salary, role):
        self.name = name
        self.salary = salary
        self.role = role

    def printdetails(self):
        return f"Name is {self.name}. Salaary is {self.salary}. Role is {self.role}"

# Thsi below called as single inheritance : means all features of Employee are contains in Programmer


class Programmer(Employee):
    pass

    def __init__(self, name, salary, role, Planguage):
        self.name = name
        self.salary = salary
        self.role = role
        self.Planguage = Planguage
        # Here we can use super method but we will use in incoming tutorials

    def printprog(self):
        return f"Name is {self.name}. Salaary is {self.salary}. Role is {self.role}. Languages are {self.Planguage}"

# Multi Inheritance


class Player:
    pass

    def __init__(self, name, game):
        super().__init__()
        self.name = name
        self.game = game

    def printplayer(self):
        return f"Name is {self.name}. Game is {self.game}"

# contains 2 class


class coolProgrammmer(Employee, Player):
    
    pass


Tushar = Employee.coolProgrammmer("Tushar", 100000, "CoolProgrammer")
Tushar = Player.coolProgrammmer("Tushar","Cricket")
print(Tushar.printdetails())
print(Tushar.printplayer())

