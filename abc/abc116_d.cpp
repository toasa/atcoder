// Grand Garden

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

int n, k;
int t_i, d_i;

int main() {
    cin >> n >> k;

    // dp[i][j]: 寿司を計i個、j種類食べたときの満足ポイントの最大値
    // dp[i][j]:
    // 最終的に求めたい値は、max(dp[k][1], dp[k][2], ..., dp[k][k])
    int dp[n][k];

    vector<int> sushi[n];

    for (int i = 0; i < n; i++) {
        cin >> t_i >> d_i;
        sushi[t_i-1].push_back(d_i);
    }

    for (int i = 0; i < n; i++) {
        sort(sushi[i].begin(), sushi[i].end());
        reverse(sushi[i].begin(), sushi[i].end());
    }

    for (int i = 0; i < n; i++) {
        for (auto itr = sushi[i].begin(); itr != sushi[i].end(); itr++) {
            cout << *itr << " ";
        }
        cout << endl;
    }


    return 0;
}
