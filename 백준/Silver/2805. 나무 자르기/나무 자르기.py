import sys
input = sys.stdin.read
data = input().split()

N = int(data[0])
M = int(data[1])
trees = list(map(int, data[2:]))
trees.sort()

low, high = 0, trees[-1]
while low < high:
    mid = (low + high + 1) // 2
    total = sum(max(0, t - mid) for t in trees)
    if total >= M:
        low = mid
    else:
        high = mid - 1
print(low)
