N, K = map(int, input().split())
P = list(map(int, input().split()))
P = list(map(lambda x: x-1, P))
C = list(map(int, input().split()))

result_max = -10**14

for i in range(N):
    tmp = P[i]
    cumulative_cost = [C[tmp]]
    while True:
        tmp = P[tmp]
        tmp_cum_cost = cumulative_cost[len(cumulative_cost)-1] + C[tmp]
        cumulative_cost.append(tmp_cum_cost)
        if tmp == i:
            break

    if len(cumulative_cost) < K:
        one_loop_sum = cumulative_cost[len(cumulative_cost)-1]
        tmp_sum = 0
        if one_loop_sum > 0:
            tmp_sum += (K // len(cumulative_cost)) * one_loop_sum
            rem_K = K % len(cumulative_cost)
            if rem_K > 0:
                tmp_sum += max(cumulative_cost[0:rem_K])
        else:
            tmp_sum = max(cumulative_cost)
        result_max = max(result_max, tmp_sum)
    else:
        result_max = max(result_max, max(cumulative_cost[0:K]))

print(result_max)
