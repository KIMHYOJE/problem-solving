import sys

input = sys.stdin.read
data = input().split()

n = int(data[0])
m = int(data[1])

hear = set(data[2:2+n])
see = data[2+n:2+n+m]

ans = sorted(hear & set(see))

print(len(ans))
for name in ans:
    print(name)
