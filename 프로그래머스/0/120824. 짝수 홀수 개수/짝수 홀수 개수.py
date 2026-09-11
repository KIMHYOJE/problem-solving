def solution(num_list):
    num_1=0
    num_2=0
    for num in num_list:
        if num % 2 == 0:
            num_1=num_1+1
        else:
            num_2=num_2+1
    answer = [num_1,num_2]
    return answer