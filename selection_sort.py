# Basic Selection Sort algorithm implementation based on examples from ADITA textbook
# worst case: O(n^2)

def selection_sort(U):
    S = []
    
    # while list is not empty
    while U:
        # find the least unsorted element
        least_index = 0
        for i in range(1, len(U)):
            if U[i] < U[least_index]:
                least_index = i
                
        # swap U[least_index] and U[-1] and remove least from U
        temp = U[least_index]
        U[least_index] = U[-1]
        U[-1] = temp
        U.remove(U[-1])
        
        # add least to S
        S.append(temp)
        
    return S
    
list = [5, 6, 34, 5, 52, 2, 6, 8, 1, 8, 10, 0]

print(list)
print(selection_sort(list))