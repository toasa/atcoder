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

// ll abs(ll a) {
//     if (a >= 0) { return a; }
//     return -a;
// }

ll min(ll a, ll b) {
    if (a < b) { return a; }
    return b;
}

int main() {
    ll N, K, big, small;
    cin >> N >> K;

    ll div = N / K;
    ll num1 = abs(N - (K * div));
    // if (num1 < 0) { num1 = 2305843009213693951; }
    
    ll num2 = abs(N - (K * (div + 1)));
    // if (num2 < 0) { num2 = 2305843009213693951; }

    ll m = min(min(num1, num2), N);

    cout << m << endl;
    return 0;
}