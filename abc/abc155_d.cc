// Pairs

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>
#include <string>
#include <numeric>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector <int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // 昇順にソート
    sort(A.begin(), A.end());

    int A_min = A[0];
    int A_max = A[N - 1];

    int count = 0;

    if (A_max >= 0 && A_min >= 0) {
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                count++;
                if (count == K) {
                    cout << A[i] * A[j] << endl;
                    return 0;
                }
            }
        }
    }

    if (A_max >= 0 && A_min < 0) {
        int pos_neg_pivot = 0;
        for (int i = 0; i < N; i++) {
            if (i == N - 1) {
                pos_neg_pivot = N - 1;
                break;
            }
            if (A[i] < 0 && 0 <= A[i + 1]) {
                pos_neg_pivot = i;
                break;
            }
        }

        // only 1 negative
        if (pos_neg_pivot == 0) {

        }

        // only 1 positive
        if (pos_neg_pivot == N - 1 || pos_neg_pivot == N - 2) {

        }

        vector <int> A_neg(pos_neg_pivot + 1);
        vector <int> A_pos(N - pos_neg_pivot + 1);

        copy(A.begin(), A.begin()+ pos_neg_pivot, A_neg.begin());
        copy(A.begin() + pos_neg_pivot + 1, A.end(), A_pos.begin());

        

    }

    if (A_max < 0 && A_min < 0) {
        for (int i = N - 1; 1 <= i ; i--) {
            for (int j = i - 1; 0 <= j; j--) {
                count++;
                if (count == K) {
                    cout << A[i] * A[j] << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}
