import random,time

a=random.sample(range(1,20001),10000)

tmp=a.copy()
start = time.time()
for i in range(len(a)):
    for j in range(0,len(a)-i-1):
        if a[j]>a[j+1]:
            a[j],a[j+1]=a[j+1],a[j]
end = time.time()
#print("Sorted array:",a)
print("Time taken:",end-start)

tmp=a.copy()
start = time.time()
tmp.sort()
end = time.time()
#print("Sorted array:",a)
print("Time taken:",end-start)

#
#
#
def merge_sort(arr):
    if len(arr) <= 1:
        return arr

    # Divide the array into two halves
    mid = len(arr) // 2
    left_half = arr[:mid]
    right_half = arr[mid:]

    # Recursively sort both halves
    left_half = merge_sort(left_half)
    right_half = merge_sort(right_half)

    # Merge the sorted halves
    return merge(left_half, right_half)

def merge(left, right):
    merged_list = []
    i = j = 0

    # Compare elements from both lists and add the smaller one to merged_list
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            merged_list.append(left[i])
            i += 1
        else:
            merged_list.append(right[j])
            j += 1

    # Add any remaining elements from the left list
    while i < len(left):
        merged_list.append(left[i])
        i += 1

    # Add any remaining elements from the right list
    while j < len(right):
        merged_list.append(right[j])
        j += 1

    return merged_list

tmp=a.copy()
start = time.time()
sorted_array = merge_sort(tmp)
end = time.time()
#print("Sorted array:",sorted_array)
print("Time taken:",end-start)