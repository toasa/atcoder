// Attention

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>
#include <string>
#include <numeric>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    vector<int> east_ng(n, 0);
    vector<int> west_ng(n, 0);

    int east_ng_v = 0;
    int west_ng_v = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'W') {
            east_ng_v++;
        }
        east_ng[i] = east_ng_v;

        if (s[n - (i+1)] == 'E') {
            west_ng_v++;
        }
        west_ng[n - (i+1)] = west_ng_v;
    }

    int tmp = 100000000;
    for (int i = 0; i < n; i++) {
        if (east_ng[i] + west_ng[i] < tmp) {
            tmp = east_ng[i] + west_ng[i];
        }
    }

    cout << tmp - 1 << endl;

    return 0;
}
