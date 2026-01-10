def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    
    while left <= right:
        mid = (left + right) // 2
        
        if arr[mid] == target:
            return 1
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    
    return 0

# 입력 받기
N = int(input())
arr = list(map(int, input().split()))
M = int(input())
targets = list(map(int, input().split()))

# 배열을 정렬
arr.sort()

# 각각의 수에 대해 이진 탐색 수행하여 결과 출력
for target in targets:
    result = binary_search(arr, target)
    print(result)
