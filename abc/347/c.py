def solve_c(A, B, D):
    D = list(map(lambda x: (x-1) % (A+B), D))
    return "Yes" if max(D)-min(D) < A else "No"


def main():
    _, A, B = map(int, input().split())
    D = list(map(int, input().split()))
    print(solve_c(A, B, D))


def test():
    assert (solve_c(2, 5, [2, 8]) == "Yes")
    assert (solve_c(2, 5, [1, 2, 9]) == "Yes")
    assert (solve_c(2, 5, [1, 7]) == "Yes")
    assert (solve_c(5, 10, [10, 15]) == "No")
    assert (solve_c(347, 347, [347, 700, 705, 710]) == "Yes")


# main()
test()
