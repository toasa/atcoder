def calc_score(cards):
    a = []
    for card in cards:
        a.append(int(card))
    cards = a

    num_of_cards = [0] * 9
    for card in cards:
        num_of_cards[card-1] += 1

    score = 0
    for i in range(1, 10):
        score += i * (10 ** num_of_cards[i-1])

    return score

def main():
    K = int(input())
    S = input()
    T = input()

    remain_cards = [K] * 10
    for i in range(4):
        s = int(S[i])
        remain_cards[s] = min(remain_cards[s]-1,0)

    for i in range(4):
        t = int(T[i])
        remain_cards[s] = min(remain_cards[s]-1,0)

    taka_win_num = 0

    # taka kun ni x
    # aoki kun ni y
    for x in range(1, 10):
        for y in range(1, 10):

            taka = S[:4] + str(x)
            aoki = T[:4] + str(y)
            if calc_score(taka) > calc_score(aoki):
                if x == y:
                    taka_win_num += (remain_cards[x]-1) * remain_cards[x]
                else:
                    taka_win_num += (remain_cards[x]) * remain_cards[y]
                
    print(taka_win_num / ((9*K-8) * (9*K-9)))

main()
