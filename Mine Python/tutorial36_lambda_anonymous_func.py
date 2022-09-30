# def minus(a,b):
#     return a-b

def minus(x, y): return x-y


print(minus(9, 2))

# both function is same


a = [[1, 84], [5, 51], [22, 2]]

a.sort(key=lambda x: x[1])  # sort list of index 1 --> 84,51,2 --> 2,51,84
print(a)
