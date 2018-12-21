// AtCoder Express 2

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

int n, m, Q;

int main() {
    cin >> n >> m >> Q;
    int l[m];
    int r[m];
    int p[Q];
    int q[Q];

    for (int i = 0; i < m; i++) {
        cin >> l[i] >> r[i];
    }

    for (int i = 0; i < Q; i++) {
        cin >> p[i] >> q[i];
    }

    int ans[Q];

    for (int i = 0; i < Q; i++) {
        // 初期化
        ans[i] = 0;
        for (int j = 0; j < m; j++) {
            // p[i] <= ? <= q[i]となる列車はあるか？
            if (p[i] <= l[j] && r[j] <= q[i]) {
                ans[i]++;
            }
        }
        cout << ans[i] << endl;
    }


    return 0;
}
