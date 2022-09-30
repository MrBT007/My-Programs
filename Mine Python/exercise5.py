def getdate():
    import datetime
    return datetime.datetime.now()
print("Enter 1 for log \nEnter 2 for retrive")
logorRetrive = input()
print("Enter 1 for 'Tushar' \nEnter 2 for 'Darshan' \nEnter 3 for 'Jay'")
nameNum = input()
print("Enter 1 for 'Food lock' \nEnter 2 for 'Excersise lock'")
lockTypeNum = input()

if int(nameNum) == 1 and int(lockTypeNum) == 1 and int(logorRetrive) == 1:
    f1_1 = open("Tushar_Food_lock.txt","a")
    print("What you have eaten")
    eaten = input()
    f1_1.write(str(getdate()))
    f1_1.write("\n")
    f1_1.write(eaten)
    print("** Successfully Written ** \n** You can Retrive it **")
    f1_1.close()

elif int(nameNum) == 1 and int(lockTypeNum) == 2 and int(logorRetrive) == 1:
    f1_2 = open("Tushar_Exercise_lock.txt","a")
    print("Which Exercise you have done")
    exercise = input()
    f1_2.write(str(getdate()))
    f1_2.write("\n")
    f1_2.write(exercise)
    print("** Successfully Written ** \n** You can Retrive it **")
    f1_2.close()

if int(nameNum) == 2 and int(lockTypeNum) == 1 and int(logorRetrive) == 1:
    f2_1 = open("Darshan_Food_lock.txt","a")
    print("What you have eaten")
    eaten = input()
    f2_1.write(str(getdate()))
    f2_1.write("\n")
    f2_1.write(eaten)
    print("** Successfully Written ** \n** You can Retrive it **")
    f2_1.close()

elif int(nameNum) == 2 and int(lockTypeNum) == 2 and int(logorRetrive) == 1:
    f2_2 = open("Darshan_Exercise_lock.txt","a")
    print("Which Exercise you have done")
    exercise = input()
    f2_2.write(str(getdate()))
    f2_2.write("\n")
    f2_2.write(exercise)
    print("** Successfully Written ** \n** You can Retrive it **")
    f2_2.close()

if int(nameNum) == 3 and int(lockTypeNum) == 1 and int(logorRetrive) == 1:
    f3_1 = open("Jay_Food_lock.txt","a")
    print("What you have eaten")
    eaten = input()
    f3_1.write(str(getdate()))
    f3_1.write("\n")
    f3_1.write(eaten)
    print("** Successfully Written ** \n** You can Retrive it **")
    f3_1.close()

elif int(nameNum) == 3 and int(lockTypeNum) == 2 and int(logorRetrive) == 1:
    f3_2 = open("Jay_Exercise_lock.txt","a")
    print("Which Exercise you have done")
    exercise = input()
    f3_2.write(str(getdate()))
    f3_2.write("\n")
    f3_2.write(exercise)
    print("** Successfully Written ** \n** You can Retrive it **")
    f3_2.close()
    
if int(nameNum) == 1 and int(lockTypeNum) == 1 and int(logorRetrive) == 2:
    print(f1_1)
elif int(nameNum) == 1 and int(lockTypeNum) == 2 and int(logorRetrive) == 2:
    print(f1_2)
if int(nameNum) == 2 and int(lockTypeNum) == 1 and int(logorRetrive) == 2:
    print(f2_1)
elif int(nameNum) == 2 and int(lockTypeNum) == 2 and int(logorRetrive) == 2:
    print(f2_2)
if int(nameNum) == 3 and int(lockTypeNum) == 1 and int(logorRetrive) == 2:
    print(f3_1)
elif int(nameNum) == 3 and int(lockTypeNum) == 2 and int(logorRetrive) == 2:
    print(f3_2)

#here we cant retrive it .. will solve it