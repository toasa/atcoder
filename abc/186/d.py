N = int(input())
A = list(map(int, input().split()))
A.sort(reverse=True)

res = 0
if N % 2 == 0:
    first_half = A[:N//2]
    second_half = A[N//2:]

else:
    first_half = A[:N//2]
    second_half = A[N//2+1:]

second_half = second_half[::-1]

n = N-1
for i in first_half:
    res += (n * i)
    n -= 2
n = -(N-1)
for i in second_half:
    res += (n * i)
    n += 2
print(res)
