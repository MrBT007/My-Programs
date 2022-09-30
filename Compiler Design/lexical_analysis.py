keywords = ['int', 'void', 'float', 'double', 'char', 'if', 'else', 'while', 'for', 'do', 'break', 'continue', 'return', 'max']
brackets = ['(', ')', '[', ']', '{', '}']
number = "0123456789_"
symbols = ['!', '@', '#', '$', '^', '-', '=', '>', '<', '<=', '>=', '&', ';', '?', ':']
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

f = open("E:\My programs\Compiler Design")
content = f.readlines()
ans = 0
for con in content:
    for i in con.split(" "):
        if i in keywords:
            ans += 1
            print(i)

        elif i in brackets:
            ans += 1
            print(i)

        elif i in letters:
            ans += 1
            print(i)

        elif i in number:
            ans += 1
            print(i)

        elif i == "\n":
            print(i)
        else:
            print("error")

print(ans)
