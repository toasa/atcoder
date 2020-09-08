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

int main() {
    string s;
    cin >> s;

    if (s[0] == 'R') {
        if (s[1] == 'R') {
            if (s[2] == 'R') {
                cout << 3 << endl;
                return 0;
            } else {
                cout << 2 << endl;
                return 0;
            }
        } else {
            cout << 1 << endl;
            return 0;
        }
    }

    if (s[1] == 'R') {
        if (s[2] == 'R') {
            cout << 2 << endl;
            return 0;
        } else {
            cout << 1 << endl;
            return 0;
        }
    }

    if (s[2] == 'R') {
        cout << 1 << endl;
        return 0;
    }

    cout << 0 << endl;
    return 0;
}