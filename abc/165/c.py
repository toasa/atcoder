import copy

def gen_mono_inc_seqs(N, M, cur_list, cur_len):
    if cur_len == N:
        return cur_list

    result = []
    for l in cur_list:
        last_val = l[len(l)-1]
        for i in range(last_val, M+1):
            tmp = copy.copy(l)
            tmp.append(i)
            result.append(tmp)

    return gen_mono_inc_seqs(N, M, result, cur_len+1)


def mono_inc_seqs(N, M):
    l = [ [i] for i in range(1, M+1) ]
    return gen_mono_inc_seqs(N, M, l, 1)


def main():
    N, M, Q = map(int, input().split())

    a, b, c, d = [0] * Q, [0] * Q, [0] * Q, [0] * Q
    for i in range(Q):
        a_, b_, c_, d_ = map(int, input().split())
        a[i], b[i], c[i], d[i] = a_, b_, c_, d_

    max_result = -1
    seqs = mono_inc_seqs(N, M)
    for seq in seqs:
        tmp = 0
        for i in range(Q):
            if seq[b[i]-1] - seq[a[i]-1] == c[i]:
                tmp += d[i]
        max_result = max(max_result, tmp)

    print(max_result)

main()
