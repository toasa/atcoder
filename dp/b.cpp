// Frog 1

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
    int n, k;
    cin >> n >> k;
    int h[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    // dp[i]: 足場iに着くまでにかかる最小コスト
    int *dp;
    dp = (int*)malloc(sizeof(int) * n);

    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        int tmp = 1000000000;
        for (int j = i - k; j < i; j++) {
            if (dp[j] + abs(h[i] - h[j]) < tmp) {
                tmp = dp[j] + abs(h[i] - h[j]);
            }
        }
        dp[i] = tmp;
    }

    cout << dp[n-1] << endl;

    return 0;
}
