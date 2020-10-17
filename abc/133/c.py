def arr_fill(mod_arr):
    for i in range(L, R):
        for j in range(i+1, R+1):
            n = (i * j) % 2019
            if mod_arr[n]:
                return
            mod_arr[n] = True

def main():
    mod_arr = [False] * 2019
    arr_fill(mod_arr)

    for i, t in enumerate(mod_arr):
        if t:
            print(i)
            return

L, R = map(int, input().split())
main()

