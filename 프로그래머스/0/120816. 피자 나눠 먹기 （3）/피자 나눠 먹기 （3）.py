def solution(slice, n):
    if n % slice == 0:
        # 사람 수가 조각 수로 딱 나누어 떨어질 때
        return n // slice
    else:
        # 나머지가 생겨서 피자가 한 판 더 필요할 때
        return (n // slice) + 1