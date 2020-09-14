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

ll abs_(ll n) {
    if (n >= 0) {
        return n;
    }
    return -n;
}

ll min_(ll x, ll y) {
    if (x <= y) {
        return x;
    }
    return y;
}

int main() {
    ll X, K, D;
    cin >> X >> K >> D;

    ll cur_dis = abs_(X);

    ll max_dis = K * D;

    if (X == 0) {
        if (K % 2 == 0) {
            cout << 0 << endl;
            return 0;
        } else {
            cout << D << endl;
            return 0;
        }
    }

    if (cur_dis >= max_dis) {
        cout << cur_dis - max_dis << endl;
        return 0;
    }

    ll d = X % D;
    if ()
    cout << d << endl;

    return 0;
}

1000000000000000
1000000000000000
1000000000000000