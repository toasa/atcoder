a, b, c, d = map(int, input().split())

result = max(a*c, a*d, b*c, b*d)
print(result)
