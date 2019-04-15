// Coloring Colorfully

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

    int len = (int)s.length();

    bool is_black;
    if (s[0] == '0') {
        is_black = true;
    } else {
        is_black = false;
    }
    
    int cost = 0;
    for (int i = 1; i < len; i++) {
        if (is_black) {
            if (s[i] == '0') {
                cost++;
            }
            is_black = false;
        } else {
            if (s[i] == '1') {
                cost++;
            }
            is_black = true;
        }
    }

    cout << cost << endl;

    return 0;
}
