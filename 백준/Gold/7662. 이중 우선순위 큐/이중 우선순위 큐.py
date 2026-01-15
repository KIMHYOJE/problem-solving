import sys
import heapq

input = sys.stdin.readline

T = int(input())
for _ in range(T):
    k = int(input())
    min_h = []
    max_h = []
    count = {}

    for _ in range(k):
        cmd, x = input().split()
        x = int(x)

        if cmd == 'I':
            heapq.heappush(min_h, x)
            heapq.heappush(max_h, -x)
            if x in count:
                count[x] += 1
            else:
                count[x] = 1
        else:
            if x == 1:
                while max_h:
                    v = -heapq.heappop(max_h)
                    if count.get(v, 0) > 0:
                        count[v] -= 1
                        break
            else:
                while min_h:
                    v = heapq.heappop(min_h)
                    if count.get(v, 0) > 0:
                        count[v] -= 1
                        break

    max_val = None
    while max_h:
        v = -heapq.heappop(max_h)
        if count.get(v, 0) > 0:
            max_val = v
            break

    min_val = None
    while min_h:
        v = heapq.heappop(min_h)
        if count.get(v, 0) > 0:
            min_val = v
            break

    if max_val is None or min_val is None:
        print("EMPTY")
    else:
        print(max_val, min_val)
