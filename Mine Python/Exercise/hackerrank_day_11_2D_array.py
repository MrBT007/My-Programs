if __name__ == '__main__':

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

# maxvalue = 0
maxvalue = -2**31
for i in range(4):
    for j in range(4):
        a = arr[i][j]
        b = arr[i][j+1]
        c = arr[i][j+2]
        d = arr[i+1][j+1]
        e = arr[i+2][j]
        f = arr[i+2][j+1]
        g = arr[i+2][j+2]

        sum = a + b + c + d + e + f + g

        if maxvalue < sum:
            maxvalue = sum # here some times -ve value comes .. then it shows error because maxvalue defined as 0
                           # and 0 > -ve value ..
                           # for that we have to defined maxvalue as maximum -ve value which is -2**31 
print(maxvalue)
