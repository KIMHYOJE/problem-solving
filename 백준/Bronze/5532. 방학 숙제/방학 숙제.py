L = int(input())
A = int(input())
B = int(input())
C = int(input())
D = int(input())

korean_days = (A + C - 1) // C
math_days = (B + D - 1) // D

print(L - max(korean_days, math_days))
