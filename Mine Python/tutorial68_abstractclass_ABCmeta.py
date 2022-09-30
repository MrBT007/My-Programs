import abc


class Shape(abc.ABC):
    # This means that every inherited class of Shape class must have defined printarea function
    @abc.abstractclassmethod
    def printarea():
        return 0


class Rectangle(Shape):
    type = "Rectangle"
    slides = 4

    def __init__(self) -> None:
        self.length = 6
        self.breadth = 4

    def printarea(self):
        return self.length * self.breadth


rect1 = Rectangle()
print(rect1.printarea())
