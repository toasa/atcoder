// Something on It

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
    string s;
    cin >> s;
    int res = 700;

    if (s[0] == 'o') {
        res += 100;
    }
    if (s[1] == 'o') {
        res += 100;
    }
    if (s[2] == 'o') {
        res += 100;
    }

    cout << res << endl;

    return 0;
}
