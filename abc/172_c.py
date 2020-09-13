def main():
    N, M, K = map(int, input().split())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))

    total_T_in_A = [0] * (N+1)
    total_T_in_B = [0] * (M+1)

    for i in range(1, N+1):
        total_T_in_A[i] = total_T_in_A[i-1] + A[i-1]

    for i in range(1, M+1):
        total_T_in_B[i] = total_T_in_B[i-1] + B[i-1]

    result = 0
    for i in range(N+1):
        # A から i 冊読むときにかかる時間
        i_A_T = total_T_in_A[i]
        
        if K < i_A_T:
            continue

        if K == i_A_T:
            result = max(result, i)
            continue

        rem_T = K - i_A_T

        # total_T_in_B は累積和を格納した、ソート済の配列
        # B_i <= rem_T < B_i+1 となるような B_i を二分探索によって探す
        first = total_T_in_B[1]
        last = total_T_in_B[M]
        if rem_T < first:
            result = max(result, i)
            continue
        if last <= rem_T:
            result = max(result, i + M)
            continue

        # assume that first <= rem_T <= last
        first = 1
        last = M
        while first < last:
            if abs(last - first) <= 1:
                break
            mid = (first + last) // 2
            if rem_T < total_T_in_B[mid]:
                last = mid
            else:
                first = mid
        result = max(result, i + first)

    print(result)

main()
