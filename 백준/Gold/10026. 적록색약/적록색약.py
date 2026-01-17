import sys
sys.setrecursionlimit(10**7)

N = int(input())
grid = [list(input().strip()) for _ in range(N)]

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def dfs(x, y, visited, colorblind):
    visited[x][y] = True
    for i in range(4):
        nx, ny = x + dx[i], y + dy[i]
        if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
            if colorblind:
                if grid[x][y] in "RG" and grid[nx][ny] in "RG":
                    dfs(nx, ny, visited, colorblind)
                elif grid[x][y] == grid[nx][ny]:
                    dfs(nx, ny, visited, colorblind)
            else:
                if grid[x][y] == grid[nx][ny]:
                    dfs(nx, ny, visited, colorblind)

# 일반인
visited1 = [[False]*N for _ in range(N)]
normal = 0
for i in range(N):
    for j in range(N):
        if not visited1[i][j]:
            dfs(i, j, visited1, False)
            normal += 1

# 적록색약
visited2 = [[False]*N for _ in range(N)]
colorblind = 0
for i in range(N):
    for j in range(N):
        if not visited2[i][j]:
            dfs(i, j, visited2, True)
            colorblind += 1

print(normal, colorblind)
