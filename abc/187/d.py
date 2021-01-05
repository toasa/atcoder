class Town:
    def __init__(self, aoki, taka):
        self.aoki = aoki
        self.taka = taka
        self.total = aoki + taka

def main():
    N = int(input())

    towns = []
    aoki_total = 0
    for _ in range(N):
        A, B = map(int, input().split())
        aoki_total += A
        t = Town(A, B)
        towns.append(t)

    towns = sorted(towns, key=lambda t: t.aoki*2 + t.taka)

    aoki_cur = aoki_total
    taka_cur = 0
    count = 1
    for i in range(N-1, -1, -1):
        t = towns[i]
        taka_cur += t.total
        aoki_cur -= t.aoki
        if taka_cur > aoki_cur:
            break
        count += 1
    print(count)

main()

