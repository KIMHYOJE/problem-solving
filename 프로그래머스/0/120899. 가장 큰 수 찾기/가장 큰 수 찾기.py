def solution(array):
    max_num = max(array)
    max_index = array.index(max_num)
    return [max_num, max_index]