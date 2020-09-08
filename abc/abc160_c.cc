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

int abs(int n) {
    if (n >= 0) return n;
    return -n;
}

int mid_dis(int a1, int a2, int K) {
    int dis1 = abs(a1 - a2);
    int dis2 = K - dis1;
    return (dis1 < dis2) ? dis1 : dis2;
}

int main() {
    int K, N, i, j;
    cin >> K >> N;
    int A[N];
    rep(i, N) cin >> A[i];

    int tmp_max = -1;

    for (i = 0; i < N; i++) {
        if (i == N - 1) {
            int tmp = A[0] + (K - A[N - 1]);
            if (tmp > tmp_max) {
                tmp_max = tmp;
            }
            break;
        }
        int tmp = A[i + 1] - A[i];
        if (tmp > tmp_max) {
            tmp_max = tmp;
        }
    }

    cout << K - tmp_max << endl;

    return 0;
}