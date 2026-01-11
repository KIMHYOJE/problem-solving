def z_order(N, r, c):
    ans = 0
    
    while N > 0:
        size = 1 << (N - 1)  # 2^(N-1)
        
        if r < size and c < size:
            #  왼쪽 위: +0 (아무것도 안함)
            pass
        elif r < size and c >= size:
            #  오른쪽 위: +size*size
            ans += size * size
            c -= size
        elif r >= size and c < size:
            # 왼쪽 아래: +2*size*size
            ans += 2 * size * size
            r -= size
        else:
            # 오른쪽 아래: +3*size*size
            ans += 3 * size * size
            r -= size
            c -= size
        
        N -= 1
    
    return ans

# 입력 받기
N, r, c = map(int, input().split())
print(z_order(N, r, c))
