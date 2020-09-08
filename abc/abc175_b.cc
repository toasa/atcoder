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

int main() {
    int N;
    cin >> N;
    ll lines[N];
    rep(i, N) {
        cin >> lines[i];
    }

    int result = 0;
    for (int i = 0; i < N-2; i++) {
        ll l1 = lines[i];
        for (int j = i+1; j < N-1; j++) {
            ll l2 = lines[j];
            if (l1 == l2) continue;
            for (int k = j+1; k < N; k++) {
                ll l3 = lines[k];
                if (l1 == l3) continue;
                if (l2 == l3) continue;
                if (abs_(l2 - l3) < l1 && l1 < l2 + l3) {
                    result++;
                }
            }
        }
    }

    cout << result << endl;
    return 0;
}