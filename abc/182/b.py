def GCD_ness(k, A):
    count = 0
    for a in A:
        if a % k == 0:
            count += 1
    return count

def main():
    N = int(input())
    A = list(map(int, input().split()))

    max_A = max(A)
    max_gcd = -1
    res = -1
    for i in range(2, max_A+1):
        c = GCD_ness(i, A)
        if c >= max_gcd:
            max_gcd = c
            res = i
    print(res)

main()
