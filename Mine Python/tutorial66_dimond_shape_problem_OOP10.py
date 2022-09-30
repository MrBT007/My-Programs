# Dimond Shape problem

class A:
    def met(self):
        print("Thsi is a metod from class A")
        pass


class B(A):
    def met(self):
        print("Thsi is a metod from class B")
        pass


class C(A):
    # def met(self):
    #     print("Thsi is a metod from class C")
    pass


class D(B, C):
    # def met(self):
    #     print("Thsi is a metod from class D")
    pass


a = A()
b = B()
c = C()
d = D()

d.met()
# First its find method in its own class
# If not there then find it in its Inheritance (B,C)
# If not there then find it in B's or C's Inheritance (A)
# If not there then throws error
