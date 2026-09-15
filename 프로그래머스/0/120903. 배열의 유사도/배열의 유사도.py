def solution(s1, s2):
    answer = 0
    for a in range(len(s2)):
        for b in range(len(s1)):
            if s2[a] == s1[b]:
                answer=answer+1
    return answer