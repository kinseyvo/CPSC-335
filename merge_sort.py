# Basic Merge Sort algorithm implementation based on examples from ADITA textbook

# worst case: O(n logn)
def merge_sort(list):
    if len(list) <= 1:
        return list
    else:
        half = int(len(list) / 2)
        L = list[:half]
        R = list[half:]
        combined = merge(merge_sort(L), merge_sort(R))
        return combined

# worse case: O(n)
def merge(L, R):
    combined = []
    left_index = right_index = 0
    while left_index < len(L) and right_index < len(R):
        if L[left_index] <= R[right_index]:
            combined.append(L[left_index])
            left_index += 1
        else:
            combined.append(R[right_index])
            right_index += 1
    
    # without this only half the sorted array is returned
    combined = combined + L[left_index:] + R[right_index:]

    return combined
    
list_1 = [4, 234, 54, 76, 81, 9, 3, 0, 2]

print("Before:", list_1)
print("After:", merge_sort(list_1))