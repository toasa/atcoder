#include <algorithm>
#include <bitset>
#include <cmath>
#include <functional>
#include <iomanip>
#include <ios>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, ans, i , j, val;
    cin >> N;
    int nums[N];
    rep(i, N) cin >> nums[i];

    // dp[i][tmp_result]: i番目の数までの演算で、その結果がtmp_resultとなる式の総数
    // dp[i+1][tmp_result] = dp[i][tmp_result - nums[i+1]] + 1
    ll dp[N][21];
    rep(i, N) rep(j, 21) dp[i][j] = 0;

    rep(i, N) {
        int num = nums[i];
        rep(val, 21) {
            if (val + nums[i+1] <= 20)  {
                dp[i+1][val] = dp[i][val+nums[i+1]] + 1;
            } else if (0 <= val + nums[i+1]) {
                dp[i+1][val] = dp[i][val-nums[i+1]] + 1;
            }
        }
    }

    return 0;
}