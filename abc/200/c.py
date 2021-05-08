def main():
    N = int(input())
    A = list(map(int, input().split()))

    mod_count = [0] * 200
    for a in A:
        m = a % 200
        mod_count[m] += 1

    res = 0
    for n in mod_count:
        if n == 0 or n == 1:
            continue

        if n % 2 == 0:
            res += ((n // 2) * (n - 1))
        else:
            res += (n * ((n - 1)//2))

    print(res)

main()
