def function1():
    print("This is Tutorial 51")


function2 = function1  # This means now function 2 is copy of function 1

del function1  # If I delete function 1 and print function 2 but it prints that statement coz function 2 is copy of function 1
function2()


def funcRet(num):  # this shows function can return built in statement
    if num == 0:
        return print
    if num == 1:
        return int


a = funcRet(1)
print(a)


def executor(func):  # This shows function can take a function and return
    func("This is print function")


executor(print)


# decorator is used when many of functions are need to be execute in one function then Decorator is used
def dec1(func1):
    def nowexecute():
        print("Now Executing")
        func1()  # Here who_is_tushar function will be execute
        print("Now Executed")
    return nowexecute


@dec1  # This is shortest way to make decorator
def who_is_tushar():
    print("Tushar is programmer")

#this is another way to make decorator (below line)
# who_is_tushar = dec1(who_is_tushar)
who_is_tushar()
