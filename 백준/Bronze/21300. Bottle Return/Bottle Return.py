# 6개 빈병 수 입력
bottles = list(map(int, input().split()))

# 총 환불액 = 빈병 수 합계 × 5센트
total = sum(bottles) * 5

print(total)
