# Name: Bhut Tushar

def rselSort(A):

    for i in range(len(A)):
        max_idx = i
        for j in range(i+1, len(A)):
            if A[max_idx] < A[j]:
                max_idx = j

        A[i], A[max_idx] = A[max_idx], A[i]

    return A


L = [35, 12, 8, 7, 0, 30, 25]

print('Sorted list is : ', rselSort(L))
