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
    int n;
    cin >> n;
    int h[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    //vector< vector<int> > dp = vector< vector<int> >(n, vector<int>(n, 0));

    // dp[i]: 足場iに着くまでにかかる最小コスト
    int *dp;
    dp = (int*)malloc(sizeof(int) * n);

    dp[0] = 0;
    dp[1] = abs(h[0] - h[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
    }

    cout << dp[n-1] << endl;

    return 0;
}
