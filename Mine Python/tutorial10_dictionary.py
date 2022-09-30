d1 = {"Tushar":"PDEU","Darshan":"GEC Bhavnagar","Vismay":"GEC Rajkot","Mehul":"DA-IICT","Nayan":"Nirma"}

print(d1)

d1["Abhay"] = "BVM" #Update any key at last 
d1[125] = "X college"
print(d1)
del d1[125]
print(d1)
print("Tushar's College is",d1["Tushar"])
print("Tushar's College is",d1.get("Tushar"))

# d2 = d1 # d2 points d1 This Reference original then if we delete any member then it reflects in d1
d2 = d1.copy()
del d2["Abhay"] #delete Abhay from d2 which is copy of d1
print("d2 is now",d2)
print("d1 is now",d1)

print("After update function")
d2.update({"Abhay":"BVM"}) #aslo update any key at last
print("d2 is now",d2)
print("d1 is now",d1)

print(d1.keys()) #print Keys of dictionary
print(d1.items()) #print Items of dictionary


