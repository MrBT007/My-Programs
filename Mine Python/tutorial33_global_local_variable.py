x = 89  # global variable


def func1():
    x = 20  # local variable

    def func2():
        global x  # way to change global variable in any func/loop/statement
        x = 45  # now global variable has changed not local then for func2 it is still 20

    func2()
    print("In Func2 x ix", x)  # This is in func1 and outside of func2


func1()
print("By func1 x ix", x)  # This is outside of func1
