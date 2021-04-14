def is_palindrome(s):
    head = 0;
    tail = len(s) - 1;
    while head < tail:
        if s[head] != s[tail]:
            return False
        head += 1
        tail -= 1

    return True

def count_tralling_zero(s):
    i = len(s) - 1
    count = 0
    while i >= 0:
        if s[i] == '0':
            count += 1
        else:
            break
        i -= 1
    return count

def main():
    S = input()

    if (is_palindrome(S)):
        print("Yes")
        return

    zeros = count_tralling_zero(S)
    new_S = zeros * "0" + S
    print("Yes" if is_palindrome(new_S) else "No")

main()
