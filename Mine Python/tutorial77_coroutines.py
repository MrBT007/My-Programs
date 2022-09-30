import time


def searcher():
    time.sleep(4)
    lst = ["Tushar", "Vivek", "Darshan", "Jay", "Bhautik", "Samarth", "Tushya"]

    while True:
        text = (yield)
        if text in lst:
            print("Your text is in list")
        else:
            print("Your text is not in list")


search = searcher()
print("search started")
next(search)
search.send("Tushar")  # first time it takes 4 sec assume that it is huge list
print("Search ended")
input("press any key to continue")
print("search started")
# for this it will execute from while .. this called coroutines means starts executing between the loop
search.send("Vivek")
print("Search ended")
