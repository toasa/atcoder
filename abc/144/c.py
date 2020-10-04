import math

def main():
    N = int(input())

    limit = int(math.sqrt(N))

    for i in range(limit, 0, -1):
        if N % i == 0:
            j = N // i
            print(abs(i-1) + abs(j-1))
            return

main()
