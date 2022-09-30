# args is used to pass argument to a defination of function (precise way)

def funargs(normal, *args):
    print(normal)
    for i in args:
        print(i)


normal = "Smart boys Name is"
name1 = ["Tushar", "Darshan", "Samarth", "Jay"]
funargs(*name1)  # we have to write noraml before any args (for both line)


def funargs2(**kwargsname2):
    for keys, values in kwargsname2.items():  # we have to write like this ! ! Don't forget to write .items ! !
        print(keys, values)


name2 = {"Tushar": "Founder", "Darshan": "Co-Founder", "Jay": "Head Manager"}
funargs2(**name2)
# kwargs is pass the keys and values of dictionary to function

# formation is [Normal --> *args --> **kwargs]
