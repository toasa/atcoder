//

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

    int r_count = 0;
    int b_count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            r_count++;
        } else {
            b_count++;
        }
    }

    if (r_count > b_count) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
