// Knapsack 2

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

long long n, w;
long long w_i, v_i;

int main() {
    cin >> n >> w;

    // dp[i][j]: 重さがj以下になるように、i番目までの品物の中から選んだときの価値の最大値
    long long dp[n+1][w+1];


    for (int j = 0; j <= w; j++) {
        dp[0][j] = 0;
    }

    for (int i = 1; i <= n; i++) {
        cin >> w_i >> v_i;
        for (int j = 0; j <= w; j++) {
            if (w_i <= j) {
                dp[i][j] = max(dp[i-1][j-w_i] + v_i, dp[i-1][j]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    // for (int i = 0; i <= n; i++) {
    //     for (int j = 0; j <= w; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << dp[n][w] << endl;

    return 0;
}
