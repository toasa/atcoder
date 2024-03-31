// Special Trains

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
int cur_time = 0;

int main() {
    cin >> n;
    int memo[n];

    memo[n-1] = 0;

    // c[i]: 駅iからi+1にかかる時間
    // s[i]: 式開始後から駅iから列車が出発するまでの時間
    // f[i]: 駅iから定期的に出発するまでの時間
    // f[i] | s[i]
    int c[n-1];
    int s[n-1];
    int f[n-1];


    for (int i = 0; i < n-1; i++) {
        cin >> c[i] >> s[i] >> f[i];
    }

    if (n==1) {
        cout << '0' << endl;
        return 0;
    } else if (n == 2) {
        cout << s[0] + c[0] << endl;
        cout << 0 << endl;
        return 0;
    }


    // 駅n-2でのmemo[n-2]を考える
    memo[n-2] = s[n-2] + c[n-2];

    // int pass_time = s[n-3] + c[n-3];
    // if (pass_time >= s[n-2]) {
    //     memo[n-3] = pass_time + (((pass_time / f[n-2]) + 1) * f[n-2] - pass_time) + c[n-2];
    // } else {
    //     memo[n-3] = pass_time + (s[n-2] - pass_time) + c[n-2];
    // }

    // n >= 3は確定
    for (int i = n-3; i >= 0; i--) {
        int pass_time = s[i] + c[i];
        if (pass_time >= s[i+1]) {
            memo[i] = pass_time + (((pass_time / f[i+1]) + 1) * f[i+1] - pass_time) + c[i+1];
        } else {
            memo[i] = pass_time + (s[i+1] - pass_time) + c[n-2];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << memo[i] << endl;
    }

    return 0;
}
