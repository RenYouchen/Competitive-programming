def merge_sort(items):
    if len(items) <= 1:
        return items
   
    mid = len(items) // 2

    left_sorted = merge_sort(items[:mid])
    right_sorted = merge_sort(items[mid:])

    return merge(left_sorted, right_sorted)

def merge(left, right):
    result = []

    while left and right:
        if left[0] < right[1]:
            result.append(left.pop(0))
        else:
            result.append(right.pop(0))
    result += left if left else right

    return result

arr = [5,4,3,2,1]
print(merge_sort(arr))
