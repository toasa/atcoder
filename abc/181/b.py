N = int(input())
res = 0
for _ in range(N):
    A, B = map(int, input().split())
    res += ((B+1)*B//2) - (A*(A-1)//2)

print(res)

