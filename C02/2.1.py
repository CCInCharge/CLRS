# Chapter 2.1 - Insertion Sort
# Needs error checking for edge cases and for when size of input is 0 or 1

def insertionSort(a):
    for j, num in enumerate(a):
        for i in list(reversed(range(j))):
            if (a[i + 1] <= a[i]):
                temp = a[i + 1]
                a[i + 1] = a[i]
                a[i] = temp
    return a

# b = [7, 2, 3, 1, 9, 3, 1, 0];
# c = insertionSort(b)
# print c
