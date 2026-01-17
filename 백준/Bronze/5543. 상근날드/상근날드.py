burgers = [int(input()) for _ in range(3)]
drinks = [int(input()) for _ in range(2)]

result = min(burgers) + min(drinks) - 50
print(result)
