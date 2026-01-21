import sys
input = sys.stdin.readline

N, M = map(int, input().split())

# 이름 → 번호 
name_to_num = {}

num_to_name = [""] * (N + 1)

for i in range(1, N + 1):
    name = input().strip()
    name_to_num[name] = str(i)
    num_to_name[i] = name

for _ in range(M):
    query = input().strip()
    if query.isdigit():
        # 숫자 → 이름
        print(num_to_name[int(query)])
    else:
        # 이름 → 번호
        print(name_to_num[query])
