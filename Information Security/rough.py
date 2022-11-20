def all_palin_subseq(s):
    n = len(s)
    res = set()
    # Ex:- If len of string (n) = 2, we need to generate binary strings 00, 01, 10, 11
    # to get all combinations of chars in the string
    # To generate these we can use numbers from 2^2(4) to 2^3-1(7) will give us 100, 101, 110, 111
    # and we can strip off first bit. The reason we can't use numbers from 0 to 2^n is because we get
    # the binary representation of 0, 1, ... n as 0, 1, 01, 10, 11 etc, we don't get all full n digits
    # That is why we use 2^n to 2^(n+1)-1 range to generate the binary strings 
    for num in range(2**n, 2**(n+1)):
        # We get all the numbers in binary form 000 001 010 011.. 111
        # we chop off first 3 chars because we have the prefix 0b which takes 2 chars
        # and since we are using numbers from 2^n, we have extra bit that we don't need to
        # consider, so we start from index 3 to the end to ge required series
        bin_num = bin(num)[3:]
        sub_seq = ""
        # Go through each number in binary format and check of 1's in the number
        # only add corresponding index chars from the original string
        for idx, ch in enumerate(bin_num):
            if ch == '1':
                sub_seq += s[idx]
        # Check if the subsequence string that we generated is a palindrome
        if sub_seq and sub_seq == sub_seq[::-1]:
            res.add(sub_seq)
    
    return (list(res))
        
print(all_palin_subseq("aaaa"))