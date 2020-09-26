H, A = map(int, input().split())

result = 0
while H > 0:
    H -= A
    result += 1

print(result)
