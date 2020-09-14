// 
#include <algorithm>
#include <bitset>
#include <cmath>
#include <functional>
#include <iomanip>
#include <ios>
#include <iostream>
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

double distance(P p1, P p2) {
    int n = (p1.first - p2.first) * (p1.first - p2.first);
    int m = (p1.second - p2.second) * (p1.second - p2.second);
    cout << "moy" << endl;
    return sqrt(n + m);
}

double total_distance(vector<P> &p_vec) {
    double total = 0;
    for (auto p = p_vec.begin(); p < p_vec.end(); p++) {
        auto p_succ = p + 1;
        total += distance(p, p_succ);
    }
    return total;
}

int fac(int n) {
    if (n == 1) {
        return 1;
    }
    return n * fac(n - 1);
}

int main() {
    int x, y, N, i;
    cin >> N;
    vector<P> p_vec(N);
    rep(i, N) {
        cin >> x >> y;
        p_vec[i] = make_pair(x, y);
    }

    double sum = 0;
    do {
        sum += total_distance(p_vec);
        cout << "hey" << endl;
    } while ( next_permutation(p_vec.begin(), p_vec.end()) );

    cout << sum / (double)fac(N) << endl;
    return 0;
}