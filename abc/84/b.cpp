// Postal Code

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

int a, b;
string s;

int main() {
    cin >> a >> b;
    cin >> s;
    if (s[a] != '-') {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < a; i++) {
        if (s[i] == '-') {
            cout << "No" << endl;
            return 0;
        }
    }

    for (int i = a+1; i < a+b+1; i++) {
        if (s[i] == '-') {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
