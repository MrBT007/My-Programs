# Name: Bhut Tushar

from abc import ABC,abstractclassmethod

class Animal(ABC):
    @abstractclassmethod
    def move(self):
        pass

class Human(Animal):
    def move(self):
        print("I can walk and run")

class Snake(Animal):
    def move(self):
        print("I can crawl")

class Dog(Animal):
    def move(self):
        print("I can bark")

class Lion(Animal):
    def move(self):
        print("I can roar")

H = Human()
H.move()

D = Dog()
D.move()
