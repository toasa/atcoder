import itertools

def convert(s, assign_map):
    s_num = 0
    for c in s:
        s_num = s_num * 10 + assign_map[c]
    return s_num

def main():
    S1 = input()
    S2 = input()
    S3 = input()

    head_chars = [S1[0], S2[0], S3[0]]

    freq_map = []
    for i in range(0, 26):
        c = chr(97 + i)
        freq_map.append([c, 0])

    for s in [S1, S2, S3]:
        for i in range(len(s)):
            idx = ord(s[i]) - ord('a')
            freq_map[idx][1] += 1

    freq_map = list(filter(lambda t: t[1] != 0, freq_map))

    if len(freq_map) > 10:
        print("UNSOLVABLE")
        return

    l = list(itertools.permutations([i for i in range(0, 10)], len(freq_map)))
    for e in l:
        assign_map = {}
        for i, n in enumerate(e):
            pair = freq_map[i]
            if (n == 0) and (pair[0] in head_chars):
                continue

            assign_map[pair[0]] = n

        if len(assign_map) != len(freq_map):
            continue

        S1_num = convert(S1, assign_map)
        S2_num = convert(S2, assign_map)
        S3_num = convert(S3, assign_map)
        if S1_num + S2_num == S3_num:
            print(S1_num)
            print(S2_num)
            print(S3_num)
            return

    print("UNSOLVABLE")

main()

# ['e', 3]
# ['m', 2]
# ['n', 2]
# ['o', 2]
# ['d', 1]
# ['r', 1]
# ['s', 1]
# ['y', 1]
