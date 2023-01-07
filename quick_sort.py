#Basic Quick Sort algorithm implementation based on examples from ADITA textbook

# worst case: O(n^2)
import random

def quick_sort(input):
    if len(input) <= 1:
        return input
    else:
        pivot = random.choice(input)
        less_than_pivot = []
        equal_to_pivot = []
        greater_than_pivot = []
        for element in input:
            if element < pivot:
                less_than_pivot.append(element)
            elif element == pivot:
                equal_to_pivot.append(element)
            else:
                greater_than_pivot.append(element)
        result = quick_sort(less_than_pivot) + equal_to_pivot + quick_sort(greater_than_pivot)
        return result

list_1 = []
list_2 = [69, 12]
list_3 = [4, 5, 2, 23, 10, 76, 6, 8, 32, 53, 239, 51, 3, 8, 9, 89, 420, 0]

print("Unsorted List:", list_1)
print("Sorted list:", quick_sort(list_1))

print("Unsorted List:", list_2)
print("Sorted list:", quick_sort(list_2))

print("Unsorted List:", list_3)
print("Sorted list:", quick_sort(list_3))