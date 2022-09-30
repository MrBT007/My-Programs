# Name: Bhut Tushar

class Parent:
    def __init__(self):
        print('Parent is called.')

    def sub_fun(self, b):
        print('Printing from class Parent: ', b)


class Child(Parent):
    def __init__(self):
        print('Child is called.')
        super().__init__()

    def sub_fun(self, b):
        print('Printing from class Child: ', b)
        super().sub_fun(b+1)


class GrandChild(Child):
    def __init__(self):
        print('GrandChild is called.')
        super().__init__()

    def sub_fun(self, b):
        print('Printing from class GrandChild: ', b)
        super().sub_fun(b+1)


if __name__ == '__main__':
    x = GrandChild()
    x.sub_fun(10)
    print('')
    y = Child()
    y.sub_fun(50)
