# Name: Bhut Tushar

class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00

    def __init__(self, name, kind, color, value):
        self.name = name
        self.kind = kind
        self.color = color
        self.value = value

    def description(self):
        desc_str = "%s is a %s %s worth $%.2f" % (
            self.name, self.color, self.kind, self.value)
        return desc_str


'''car1 = Vehicle()
car1.name = "Ferrari"
car1.color = "Red"
car1.kind = "Convertible"
car1.value = 60000.00

car2 = Vehicle()
car2.name = "Omni"
car2.color = "Blue"
car2.kind = "Van"
car2.value = 10000.00'''

car3 = Vehicle("Swift", "Sedan", "Black", 30000.00)

# print(car1.description())
# print(car2.description())
print(car3.description())
