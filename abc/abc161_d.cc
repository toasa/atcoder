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

bool is_lunlun(ll n) {
    string s;
    s = to_string(n);
    int s_len = s.length();

    for (int i = 0; i < s_len - 1; i++) {
        int abs_val = abs(s[i] - s[i + 1]);
        if (abs_val > 1) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int K;
    cin >> K;

    int count = 0;
    for (ll i = 1; i < 2305843009213693951; i++) {
        if (is_lunlun(i)) {
            count++;
        }
        if (count == K) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}