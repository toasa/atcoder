// Something on It

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

    vector<int> res;
    while (1) {
        cin >> n;
        if (n == 0) {
            return 0;
        }
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // dp[i]: 区間[x, i]での部分列の和の最大値
        // dp[i+1] = max(dp[i] + a[i], a[i])
        vector<int> dp(n, 0);
        for (int i = 1; i < n; i++) {
            dp[i+1] = max(dp[i] + a[i], a[i]);
        }

        sort(dp.begin(), dp.end());
        res.push_back(dp[n-1]);
    }

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }


    return 0;
}
