def main():
    N, W = map(int, input().split())

    oyu_henka = [0] * (2 * (10**5) + 1)

    for _ in range(N):
        s, t, p = map(int, input().split())
        oyu_henka[s] += p
        oyu_henka[t] -= p

    cur_oyu = 0
    for henka in oyu_henka:
        cur_oyu += henka
        if cur_oyu > W:
            print("No")
            return
    print("Yes")

main()
