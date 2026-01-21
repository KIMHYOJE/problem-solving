import sys
input = sys.stdin.readline

N = int(input())
M = int(input())
S = input().strip()

ans = 0
cnt_ioi = 0
i = 0

while i < M - 2:
    # "IOI" 패턴인지 확인
    if S[i] == 'I' and S[i+1] == 'O' and S[i+2] == 'I':
        cnt_ioi += 1
        # IOI가 N번 이상 연속되면 P_N 하나 발견
        if cnt_ioi >= N:
            ans += 1
        i += 2  # "OI" 만큼 건너뛰고, 다음 I에서 다시 검사
    else:
        cnt_ioi = 0
        i += 1

print(ans)
