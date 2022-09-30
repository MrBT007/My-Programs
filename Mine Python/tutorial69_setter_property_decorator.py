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

    @email.deleter
    def email(self):
        self.fname = None
        self.lname = None


Tushar_Bhut = Students("Tushar", "Bhut")
print(Tushar_Bhut.email)  # email is a function that's why () are there
Tushar_Bhut.fname = "Harry"
Tushar_Bhut.lname = "Potter"
print(Tushar_Bhut.email)
del Tushar_Bhut.email
print(Tushar_Bhut.email)
