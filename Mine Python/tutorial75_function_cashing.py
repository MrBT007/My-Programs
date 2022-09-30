import time
from functools import lru_cache


# it means it stores work(5) and maxsize means stores last 10 values which called
@lru_cache(maxsize=10)
def work(n):
    print("Working")
    time.sleep(n)  # here code will take n sec to be execute below line
    print("Done .. Calling Again")
    time.sleep(n)  # it takes two times n sec because of this
    print("Called")


work(5)
work(6)  # only this time takes 6 sec
# Below lines will be execute fast
print("6 sec taking")
work(6)
print("6 sec completed")
print("5 sec taking")
work(5)
print("5 sec completed")
# Sometimes lengthy code can take more time to execute for the same value .. then we can store it by using cashing
