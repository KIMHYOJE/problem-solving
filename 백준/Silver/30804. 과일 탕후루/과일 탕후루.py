import sys
input = sys.stdin.readline

N = int(input())
S = list(map(int, input().split()))

# 슬라이딩윈도우: left~right 구간에서 과일종류 ≤ 2
left = 0
cnt = [0] * 10  # 과일 1~9 개수
kinds = 0  # 현재 구간의 과일 종류 수
ans = 0

for right in range(N):
    # right 추가
    if cnt[S[right]] == 0:
        kinds += 1
    cnt[S[right]] += 1
    
    # 종류 > 2 이면 left 이동
    while kinds > 2:
        cnt[S[left]] -= 1
        if cnt[S[left]] == 0:
            kinds -= 1
        left += 1
    
    # 최대 길이 갱신
    ans = max(ans, right - left + 1)

print(ans)
