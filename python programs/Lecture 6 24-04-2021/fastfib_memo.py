# Name: Bhut Tushar

def fastFib(n, memo={}):
    """ Assumes n is an int > 0, memo used only by recursive calls
    Returns Fibonacci of n"""
    if n == 0 or n == 1:
        return 1
    try:
        print("Memo[", n, "]: ", memo[n])
        return memo[n]
    except KeyError:
        result = fastFib(n-1, memo) + fastFib(n-2, memo)
        memo[n] = result
        # print('Result', result)
        return result


n = int(input('Enter n: '))

for i in range(n):
    print(fastFib(i))
