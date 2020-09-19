import math

S = input()
S_len = len(S)

S_nums = [0] * (S_len+1)
for i in range(S_len):
    S_nums[i] = int(S[i:])

rem_count = [0] * 2019
for n in S_nums:
    rem_count[n % 2019] += 1

result = 0
for c in rem_count:
    result += c * (c - 1) // 2

print(result)

