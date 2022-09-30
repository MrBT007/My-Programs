def func(s):
    arr = []
    temp1= []
    temp2 = []
    for i in range(len(s)+1):
        for j in range(i+1,len(s)+1):
            arr.append(s[i:j])
    for i in arr:
        a = s+i
        if a == a[::-1]:
            temp1.append(i)
    for i in temp1:
        if i ==i [::-1]:
            temp2.append(i)
    temp2.sort(key = len)
    print(temp2[0])


t = int(input())
i = 1
while t>0:
    n = int(input())
    s = input()
    print("Case #"+str(i)+": ",end="")
    func(s)
    i+=1
    t-=1