# -*- coding: utf-8 -*-
import sys

# 180도 회전 시 변환되는 숫자를 딕셔너리로 정의
rotation_map = {
    '0': '0',
    '1': '1',
    '6': '9',
    '8': '8',
    '9': '6'
}

# 입력 받기 (공백 제거)
s = sys.stdin.readline().strip()

# 문자열을 뒤에서부터 슬라이싱([::-1])하며 회전된 문자로 변환
result = []
for char in s[::-1]:
    result.append(rotation_map[char])

# 리스트를 문자열로 합쳐서 출력
print(''.join(result))