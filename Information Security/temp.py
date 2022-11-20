def all_palin_subseq(s):
    n = len(s)
    res = set()

    for num in range(2**n, 2**(n+1)):

        bin_num = bin(num)[3:]
        # print(bin_num)
        sub_seq = ""

        for idx, ch in enumerate(bin_num):
            if ch == '1':
                sub_seq += s[idx]

        if sub_seq and sub_seq == sub_seq[::-1]:
            if len(sub_seq) != 1:
                # print(sub_seq)
                res.add(sub_seq)
    
    return len(list(res))

tc = int(input())
for i in range(0,tc):
    s = input()
    print(all_palin_subseq(s))
    tc=-1  
