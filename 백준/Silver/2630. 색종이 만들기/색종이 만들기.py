import sys

input = sys.stdin.read
data = input().split()

N = int(data[0])
index = 1
paper = []
for i in range(N):
    row = []
    for j in range(N):
        row.append(int(data[index]))
        index += 1
    paper.append(row)

white = 0
blue = 0

def check_uniform(x, y, size):
    color = paper[x][y]
    for i in range(x, x + size):
        for j in range(y, y + size):
            if paper[i][j] != color:
                return False
    return True

def divide(x, y, size):
    global white, blue
    if check_uniform(x, y, size):
        if paper[x][y] == 0:
            white += 1
        else:
            blue += 1
        return
    
    half = size // 2
    divide(x, y, half)
    divide(x, y + half, half)
    divide(x + half, y, half)
    divide(x + half, y + half, half)

divide(0, 0, N)
print(white)
print(blue)
