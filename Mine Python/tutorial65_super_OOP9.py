from typing import ClassVar


class A:
    classvar1 = "I am a class variable in class A"

    def __init__(self):
        self.var1 = "I am inside class A's constructor"
        self.classvar1 = "Instance variable in class A"
        self.special = "Special"
    pass


class B(A):
    classvar1 = "I ama a class variable in class B"

    def __init__(self):
        self.var1 = "I am inside in class B's constructor"
        self.classvar1 = "Instance variable in class B"  
        super().__init__()

a = A()
b = B()

print(a.special)
print(b.special) # Here B takes attributes of A but then we defined a constructor then it overwrites
# In class B we have defined its constructor then it finds special method in it 
 # if it not exist then by overwrites of a in b then it not goes to A
 # There is no existance of class A's method in B after defines a constructor in B
 # If we want to run class A's Instance var in class B then we can use ! ! super().__init__() ! !

print(b.special, b.var1 , b.classvar1)
# here called b.var1 then compiler finds instance var in B and then we construct super constructor ..
# then it takes .var1 form 