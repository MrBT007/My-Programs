# Name: Bhut Tushar

def binarySearch(list, item):
    low = 0
    high = len(list)-1
    found = False

    while low <= high and not found:
        mid = (low + high)//2
        if list[mid] == item:
            found = True
        else:
            if item < list[mid]:
                high = mid - 1
            else:
                low = mid + 1

    return found


testlist = [0, 1, 2, 8, 13, 17, 19, 32, 42]

no = int(input("Enter the number to be searched : "))
print(binarySearch(testlist, no))

no = int(input("Enter the number to be searched : "))
print(binarySearch(testlist, no))
