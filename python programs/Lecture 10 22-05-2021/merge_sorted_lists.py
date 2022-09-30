# Name: Bhut Tushar

def mergeLists(L1, L2, n1, n2):
    L3 = [None]*(n1+n2)
    i = 0
    j = 0
    k = 0

    while i < n1 and j < n2:

        if L1[i] < L2[j]:
            L3[k] = L1[i]
            k = k + 1
            i = i + 1
        else:
            L3[k] = L2[j]
            k = k + 1
            j = j + 1

    while i < n1:
        L3[k] = L1[i]
        k = k + 1
        i = i + 1

    while j < n2:
        L3[k] = L2[j]
        k = k + 1
        j = j + 1

    return L3


L1 = [1, 2, 3, 5, 7, 8, 15, 20]
n1 = len(L1)

L2 = [2, 4, 6, 8]
n2 = len(L2)

print("List after Merging : ", mergeLists(L1, L2, n1, n2))
