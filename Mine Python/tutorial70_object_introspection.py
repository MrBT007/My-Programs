import inspect


class Students:
    pass

    def __init__(self, fname, lname):
        self.fname = fname
        self.lname = lname

    def explain(self):
        return f"This Student is {self.fname} {self.lname}"

    @property
    def email(self):
        if self.fname == None or self.lname == None:
            return "The Email is not set .. kindly set it by setter"
        return f"{self.fname}.{self.lname}@codekaro.com"

    @email.setter
    def email(self, string):
        print("Now setting up..")
        names = string.split("@")[0]
        self.fname = names.split(".")[0]
        self.lname = names.split(".")[1]


Tushar = Students("Mr", "BT")
print(type(Tushar))  # students class of main func
print(id(Tushar))  # every variable takes different ID
# prints all directory (what i can applies on this) of tushar class
print(dir(Tushar))
print(Tushar.email)

# prints all directory with its ID on which it sotored
print(inspect.getmembers(Tushar))
