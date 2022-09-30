import time
initial = time.time()  # starts counting time

j = 0
while j < 5:
    print("You got HACKED !")
    time.sleep(1)  # take break of 1 second
    j += 1
print("Time for executing by while loop is", time.time() - initial)

initial2 = time.time()

for i in range(0, 5):
    print("You got HACKED !")


print("Time for executing by for loop is", time.time() - initial2)
localtime = time.asctime(time.localtime(time.time()))
# first get time as a tick and after convert it into local time then after convert it into time format by asctime() function
print(localtime)
