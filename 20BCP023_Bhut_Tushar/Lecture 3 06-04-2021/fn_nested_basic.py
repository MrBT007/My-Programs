# Name: Bhut Tushar

def outerFunction(text):
    def innerFunction():
        print(text)  # This innerFunction can use the 'text' of outerFunction
    innerFunction()

outerFunction('Hello World!')
