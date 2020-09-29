a = int(input())
b = int(input())

s = {a, b}
s_org = {1, 2, 3}

print((s_org - s).pop())
