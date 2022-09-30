class Dad():
    Basketball = 1
    pass


class Son(Dad):  # Takes Dad's Attributes
    Dance = 1  # Dance like 1 way

    def isdance(self):
        return f"I can Dance like {self.Dance} Way"


class GrandSon(Son):  # Takes Son's Attributes which contains also dad's attribute
    Dance = 5  # Dance like 5 way
    Cricket = 1

    def isdance(self):
        return f"Yeah! I can Dance like {self.Dance} Ways"


Vinay = Dad()
Pranav = Son()
Nirmal = GrandSon()

print(Nirmal.isdance())
print(Nirmal.Basketball)  # here Grandson taken Dad's Attribute
# First nirmal finds in its class if not there then go to Son Which is Inheritance of Dad ..
#  If also there is not available then go to Dad and if finds then print out other wise throws error
