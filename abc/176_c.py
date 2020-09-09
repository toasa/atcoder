N = int(input())
A_list = list(map(int, input().split()))

prev_height = A_list[0]
result = 0

for i in range(1, N):
    cur_height = A_list[i]
    if prev_height > cur_height:
        result += prev_height - cur_height
    else:
        prev_height = cur_height

print(result)



