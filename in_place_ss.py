# Basic In-Place Selection Sort algorithm implementation based on examples from ADITA textbook
# worst case: O(n^2)

def in_place_selection_sort(L):
    for i in range(len(L) - 1):
        least_index = i
        for j in range(i + 1, len(L)):
            if L[j] < L[least_index]:
                least_index = j

        temp = L[least_index]
        L[least_index] = L[i]
        L[i] = temp
    
    return L

    
test = [5, 6, 34, 5, 52, 2, 6, 8, 1, 8, 103, 0, 3, 21, 69]

print("Original:", test)
print("Sorted:" ,in_place_selection_sort(test))