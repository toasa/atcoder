#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

char *head_str;
char *tail_str;

int main() {
    int N, Q, T, A, B;
    std::string S;
    std::cin >> N;
    std::cin >> S;
    std::cin >> Q;

    head_str = (char *)calloc(1, N+1);
    tail_str = (char *)calloc(1, N+1);

    for (int i = 0; i < N; i++) {
        head_str[i] = S[i];
        tail_str[i] = S[i+N];
    }

    for (int i = 0; i < Q; i++) {
        std::cin >> T >> A >> B; 

        if (T == 1) {
            A--; B--;

            char A_c, B_c;
            if (B < N) {
                A_c = head_str[A];
                B_c = head_str[B];
                head_str[A] = B_c;
                head_str[B] = A_c;
            } else if (N <= A) {
                A_c = tail_str[A-N];
                B_c = tail_str[B-N];
                tail_str[A-N] = B_c;
                tail_str[B-N] = A_c;
            } else {
                A_c = head_str[A];
                B_c = tail_str[B-N];
                head_str[A] = B_c;
                tail_str[B-N] = A_c;
            }

            continue;
        }

        char *tmp = head_str;
        head_str = tail_str;
        tail_str = tmp;
    }

    printf("%s%s\n", head_str, tail_str);
}
