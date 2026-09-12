def solution(n):
    answer=0
    for a in range(0,n+1):
        if a%2==0:
            answer=answer+a
            
    return answer