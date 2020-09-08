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
    return (n >= 0) ? n : -n;
}

int calc_min_dis(int left, int right, int X, int Y) {
    int dis1 = right - left;
    int dis2 = abs(X - left) + abs(Y - right) + 1;
    return (dis1 < dis2) ? dis1 : dis2;
}

int main() {
    int N, X, Y, i, j;
    cin >> N >> X >> Y;
    
    int distance_count[N];
    rep(i, N) distance_count[i] = 0;

    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            int d = calc_min_dis(i + 1, j + 1, X, Y);
            distance_count[d]++;
        }
    }

    for (i = 1; i < N; i++) {
        cout << distance_count[i] << endl;
    }

    return 0;
}
