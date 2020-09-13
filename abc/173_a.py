N = int(input())
maisuu = N // 1000 if N % 1000 == 0 else N // 1000 + 1
print(maisuu * 1000 - N)
