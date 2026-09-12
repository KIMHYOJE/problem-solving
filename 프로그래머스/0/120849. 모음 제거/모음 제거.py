def solution(my_string):
    return "".join(c for c in my_string if c not in 'aeiou')