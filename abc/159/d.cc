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

int combi(int n) {
    if (n <= 0) { return 0; }
    return n * (n-1) / 2;
}

int main() {
    int N, i, j, h;
    cin >> N;
    vector <int> A(N);
    rep(i, N) cin >> A[i];

    // nums_count[i]: A1, ... , ANに含まれる i の個数
    int nums_count[N+1];
    int pairs_count[N+1];
    rep(i, N+1) {
        nums_count[i] = 0;
        pairs_count[i] = 0;
    }
    rep(i, N) {
        int tmp = A[i];
        nums_count[tmp]++;
    }

    int total_pairs = 0;
    for (i = 1; i <= N; i++) {
        if (nums_count[i] == 0) continue;
        pairs_count[i] = combi(nums_count[i]);
        total_pairs += pairs_count[i];
    }

    rep(i, N) {
        int a_i = A[i];
        int count = nums_count[a_i];
        cout << total_pairs - pairs_count[a_i] + combi(count-1) << endl;
    }

    return 0;
}