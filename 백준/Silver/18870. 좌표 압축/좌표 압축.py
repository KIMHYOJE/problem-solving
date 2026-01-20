import sys

input = sys.stdin.read
data = input().split()

n = int(data[0])
x = list(map(int, data[1:]))

sorted_unique = sorted(set(x))
rank = {val: i for i, val in enumerate(sorted_unique)}

ans = [rank[xi] for xi in x]
print(*ans)
