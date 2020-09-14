// Guess The Number

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
    int N, M;
    cin >> N >> M;
    int s[M];
    int c[M];
    for (int i = 0; i < M; i++) {
        cin >> s[i] >> c[i];
    }

    if (N != M) {
        cout << -1 << endl;
        return 0;
    }

    int digit[N];
    for (int i = 0; i < N; i++) {
        digit[i] = 10;
    }

    for (int i = 0; i < N; i++) {
        if (digit[s[i] - 1] > c[i]) {
            digit[s[i] - 1] = c[i];
        }
    }

    int result = 0;
    for (int i = 0; i < N; i++) {
        if (digit[i] == 10) {
            digit[i] = 0;
        }
        result = digit[i] + (10 * result);
    }
    cout << result << endl;

    return 0;
}
