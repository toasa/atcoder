// String Rotation

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

string s, t;

string rotate() {
    return t.substr(1) + t[0];
}

int main() {
    cin >> s >> t;
    int l = s.size();

    for (int i = 0; i < l; i++) {
        if (s == t) {
            cout << "Yes" << endl;
        }
        t = rotate();
    }

    cout << "No" << endl;

    return 0;
}
