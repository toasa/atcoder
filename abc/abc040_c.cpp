// 柱柱柱柱柱

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

int main() {
    cin >> n;

    int hashira[n];
    for (int i = 0; i < n; i++) {
        cin >> hashira[i];
    }

    // dp[i]: i+1番目の柱へ移動するときの最小コスト
    int dp[n+1];
    dp[0] = 0;
    dp[1] = abs(hashira[0] - hashira[1]);

    for (int i = 2; i < n; i++) {
        int jmp1_cost = abs(hashira[i-1] - hashira[i]);
        int jmp2_cost = abs(hashira[i-2] - hashira[i]);

        dp[i] = min(dp[i-1] + jmp1_cost, dp[i-2] + jmp2_cost);
    }

    cout << dp[n-1] << endl;

    return 0;
}
