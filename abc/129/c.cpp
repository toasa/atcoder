// 

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
    int n, m;
    cin >> n >> m;
    vector <int> a(m, 0);

    int tmp;
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        a[tmp]++;
    }

    vector <long long> memo(n + 1, 0);
    memo[0] = 1;

    memo[1] = 1;
    if (m > 0) {
        if (a[1] > 0) {
            memo[1] = 0;  
        }
    }

    if (n == 1) {
        if (m == 0) {
            cout << 1 << endl;
            return 0;
        } else {
            if (a[1] > 0) {
                cout << 0 << endl;;
                return 0;
            }
        }
        cout << 1 << endl;
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        if (a[i] > 0) {
            memo[i] = 0;
        } else {
            memo[i] = memo[i-1] + memo[i-2];
        }
        if (memo[i] > 1000000007) {
            memo[i] = memo[i] % 1000000007;
        }
    }

    // for (int i = 0; i <= n; i++) {
    //     cout << memo[i] << " ";
    // }
    // cout << endl;

    cout << memo[n] << endl;

    return 0;
}
