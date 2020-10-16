import math
 
# n = 1028
# s =  ?39
# 
# n =   339
# s = 1?3?9
# ??2??5
 
# n:   1123
# s: ??2??5

# n_rev: 3211
# s_rev: 5??2??


# 下二桁に規則性がありそう

# 6011
# 7012
# 8000
# 9001

# 40006
# 50003
# 60000, 60013
# 70010
# 80007
# 90004
def representable(n, s):
    ndigits = int(math.log10(n) + 1)
    len_s = len(s)
    if ndigits > len_s:
        return False

    n_rev = str(n)[::-1]
    s_rev = s[::-1]

    for i, c in enumerate(s_rev):
        if i >= ndigits:
            if c != "?":
                return False
        else:
            if c != n_rev[i] and c != "?":
                return False

    return True

S = input()

n = 5
n_max = 10 ** 6
res = 0
MOD = 10**9 + 7

while n < n_max:
    if representable(n, S):
        res += 1
        res %= MOD
    n += 13

print(res)
