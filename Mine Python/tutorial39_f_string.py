import math
me = "Tushar"
a1 = 7

a = "This is %s %s" % (me, a1)
# this is not precise way because sometimes we have to put more variables at that time we may get confused
print(a)

a = "This is {0} {1}"
# this is .format ---> in it b points a with .format 0 -> me , 1 -> a1
# if we interchange 0 an 1 then it reflects in ouput with interchange
b = a.format(me, a1)
print(b)

# **** F-String ****

a = f"This is {me} {a1} {math.sqrt(2)}"
print(a)
