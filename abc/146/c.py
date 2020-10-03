import math

def calc(n):
    if n == 0:
        num_of_digits = 1
    else:
        num_of_digits = int(math.log10(n)) + 1

    return A * n + B * num_of_digits

def main():
    min_N = 1
    max_N = 10 ** 9 + 1

    if X < calc(1):
        print(0)
        return
    elif calc(max_N-1) <= X:
        print(max_N-1)
        return

    while abs(max_N - min_N) > 1:
        mid_N = (min_N + max_N) // 2

        v_max = calc(max_N)
        v_mid = calc(mid_N)
        v_min = calc(min_N)

        if v_mid <= X:
            min_N = mid_N
        elif X < v_mid:
            max_N = mid_N

    for i in range(max_N, min_N-1, -1):
        if calc(i) <= X:
            print(i)
            return

A, B, X = map(int, input().split())
main()

