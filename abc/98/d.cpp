// Xor Sum 2

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

int n;
vector<int> a;

bool plusEqualXor(int b, int e) {
    bool res = true;

    if (e - b == 1) {
        if ((a[b] & a[e]) != 0) {
            res = false;
        }
        return res;
    }

    // 立ったbitを更新していく
    int cur_bits = a[b];

    for (int i = b + 1; i < e; i++) {
        cur_bits |= a[i+1];
        int tmp = cur_bits & a[i+1];

        if (tmp != 0) {
            res = false;
            break;
        }
    }
    return res;
}

int main() {
    cin >> n;
    a.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // hypo
    // a と bをbit列にしたとき、各桁が1でbattingしない、このとき a xor b == a + b

    int res = n;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << "i: " << i << " j: " << j << endl;
            if (plusEqualXor(i, j)) {
                res++;
            } else {
                break;
            }
            cout << "res: " << res << endl;
        }
    }

    cout << res << endl;

    return 0;
}
