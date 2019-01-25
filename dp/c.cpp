// Vacation

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
int a, b, c;

int main() {
    cin >> n;
    cin >> a >> b >> c;

    // dp[i][j]: i-2日目までの幸福の最大値 + i-1日目に選択肢jを選んだ時の幸福量
    int dp[n][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            dp[i][j] = 0;
        }
    }

    dp[0][0] = a;
    dp[0][1] = b;
    dp[0][2] = c;
    for (int i = 1; i < n; i++) {
        cin >> a >> b >> c;
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                dp[i][j] = max(dp[i-1][1], dp[i-1][2]) + a;
            } else if (j == 1) {
                dp[i][j] = max(dp[i-1][0], dp[i-1][2]) + b;
            } else {
                dp[i][j] = max(dp[i-1][0], dp[i-1][1]) + c;
            }
        }
    }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int res = max(dp[n-1][0], dp[n-1][1]);
    cout << max(res, dp[n-1][2]) << endl;

    return 0;
}
