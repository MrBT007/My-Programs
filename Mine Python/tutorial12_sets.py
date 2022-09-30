s = set([1, 2, 3, 4])
print(type(s))
print(s)
s.add(5)
s.add(5)  # set returns unique number therefore it prints 5 only one time
print(s)
s1 = s.union({6, 7, 8})
s2 = s1.intersection({6, 8, 2})

print("Union is", s1, "Intersection", s2)
print(s.isdisjoint(s1))  # if there is no any term same in s1 set .. then True
