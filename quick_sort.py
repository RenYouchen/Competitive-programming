def quicksort(arr, start, end):
    if start >= end:
        return
    pivot = arr[end]

    less_than_pivot = start

    for i in range(start, end):
        if arr[i] < arr[end]:
            arr[i], arr[less_than_pivot] = arr[less_than_pivot], arr[i]
            less_than_pivot += 1

    arr[end], arr[less_than_pivot] = arr[less_than_pivot], arr[end]

    quicksort(arr, start, less_than_pivot - 1) 
    quicksort(arr, less_than_pivot + 1, end) 


arr = [2,5,6,1,4,56,6,12]
quicksort(arr, 0, len(arr)-1)
print(arr)

