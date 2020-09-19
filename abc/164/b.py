A, B, C, D = map(int, input().split())

is_turn_of_takahashi = True

while A > 0 and C > 0:
    if is_turn_of_takahashi:
        C -= B
    else:
        A -= D

    is_turn_of_takahashi = not is_turn_of_takahashi

print("Yes" if A > 0 else "No")
