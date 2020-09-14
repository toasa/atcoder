N = input()

result = 0
for c in N:
    result += int(c)
    result = (result % 9) if result > 9 else result

print("Yes" if result % 9 == 0 else "No")
