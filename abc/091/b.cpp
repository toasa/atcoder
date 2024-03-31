// Two Colors Card Game

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
    int n, m;
    cin >> n;

    string s, t;
    unordered_map<string, int> map_s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        map_s[s]++;
    }

    cin >> m;
    unordered_map<string, int> map_t;
    for (int i = 0; i < m; i++) {
        cin >> t;
        map_t[t]++;
    }

    int res = 0;
    for(auto itr = map_s.begin(); itr != map_s.end(); itr++) {
        if (res < itr->second - map_t[itr->first]) {
            res = itr->second - map_t[itr->first];
        }
    }

    cout << res << endl;

    return 0;
}
