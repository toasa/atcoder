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

vector<char> StoVec(string s) {
    int len = s.length();
    vector<char> v(len);
    int i;
    rep(i, len) {
        v[i] = s[i];
    }
    return v;
}

string VectoStr(vector<char> v) {
    int len = v.size();
    string s;
    int i;
    rep(i, len) {
        s += v[i];
    }
    return s;
}

int main() {
    string S;
    int Q, i, T, F;
    char C;
    cin >> S;

    vector<char> v = StoVec(S);
    bool is_reverse = false;
    cin >> Q;

    for (i = 0; i < Q; i++) {
        cin >> T;
        if (T == 1) {
            is_reverse = !is_reverse;
        } else if (T == 2) {
            cin >> F >> C;
            if (F == 1) {
                if (is_reverse) {
                    v.push_back(C);
                } else {
                    v.insert(v.begin(), C);
                }
            } else if (F == 2) {
                if (is_reverse) {
                    v.insert(v.begin(), C);
                } else {
                    v.push_back(C);
                }
            }
        }
    }

    if (is_reverse) {
        reverse(v.begin(), v.end());
    }

    cout << VectoStr(v) << endl;

    return 0;
}
