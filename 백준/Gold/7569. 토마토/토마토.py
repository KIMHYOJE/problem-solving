from collections import deque

# 입력: M(가로), N(세로), H(높이)
M, N, H = map(int, input().split())

# 3차원 배열: tomato[h][n][m]
tomato = []
q = deque()
max_day = 0

# H층 입력
for h in range(H):
    layer = []
    for _ in range(N):
        layer.append(list(map(int, input().split())))
    tomato.append(layer)
    
    # 익은 토마토 큐에 추가 (day=0)
    for n in range(N):
        for m in range(M):
            if tomato[h][n][m] == 1:
                q.append((h, n, m, 0))  # (높이, 세로, 가로, 일수)

# 6방향: 위아래좌우앞뒤
dh = [0, 0, 0, 0, -1, 1]
dn = [0, 0, -1, 1, 0, 0]
dm = [-1, 1, 0, 0, 0, 0]

# BFS
while q:
    h, n, m, day = q.popleft()
    max_day = max(max_day, day)
    
    for d in range(6):
        nh = h + dh[d]
        nn = n + dn[d]
        nm = m + dm[d]
        
        # 범위내 + 익지않음(0)
        if 0 <= nh < H and 0 <= nn < N and 0 <= nm < M:
            if tomato[nh][nn][nm] == 0:
                tomato[nh][nn][nm] = 1  # 익힘
                q.append((nh, nn, nm, day + 1))

# 모든 토마토 확인
ripe_all = True
for h in range(H):
    for n in range(N):
        for m in range(M):
            if tomato[h][n][m] == 0:
                ripe_all = False
                break
        if not ripe_all:
            break
    if not ripe_all:
        break

print(max_day if ripe_all else -1)
