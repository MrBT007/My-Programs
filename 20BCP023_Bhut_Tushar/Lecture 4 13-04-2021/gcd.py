# Name: Bhut Tushar

def cal_gcd(a, b):
    if a == 0:
        return b
    return cal_gcd(b % a, a)
