// スフィンクスのなぞなぞ

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

// n: 人間の数, m: 足の総数
int n, m;

int main() {
    cin >> n >> m;
    int adult = 0;
    int old = 0;
    int baby = 0;

    if (m % 2 != 0) {
        old++;
        n--;
        if (m >= 3) {
            m -= 3;
        }
        if (!(2 * n <= m && m <= n * 4 )) {
            cout << "-1 " << "-1 " << "-1" << endl;
            return 0;
        }

        // adult + baby = n
        // 2 * adult + 4 * baby = m
        // となるadult, baby の組を見つける
        adult = (4 * n - m) / 2;
        baby = (m - 2 * n) / 2;

    } else {
        if (!(2 * n <= m && m <= n * 4 )) {
            cout << "-1 " << "-1 " << "-1" << endl;
            return 0;
        }
        adult = (4 * n - m) / 2;
        baby = (m - 2 * n) / 2;
    }

    cout << adult << " " << old << " " << baby << endl;

    return 0;
}
