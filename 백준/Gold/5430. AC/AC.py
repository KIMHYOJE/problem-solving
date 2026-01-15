def solve():
    T = int(input())
    
    for _ in range(T):
        p = input().strip()
        n = int(input())
        arr_str = input().strip()
        
        # 배열 파싱: [1,2,3] → [1, 2, 3]
        if n == 0:
            arr = []
        else:
            arr_str = arr_str[1:-1]  # '[', ']' 제거
            arr = list(map(int, arr_str.split(',')))
        
        # R(역순), D(삭제) 처리
        left = 0
        right = len(arr) - 1
        reversed_flag = False
        error = False
        
        for op in p:
            if op == 'R':
                reversed_flag = not reversed_flag
            elif op == 'D':
                if left > right:
                    error = True
                    break
                if reversed_flag:
                    right -= 1
                else:
                    left += 1
        
        if error:
            print("error")
        else:
            if left > right:
                print("[]")
            else:
                if reversed_flag:
                    result = arr[left:right+1][::-1]
                else:
                    result = arr[left:right+1]
                print("[" + ",".join(map(str, result)) + "]")

solve()
