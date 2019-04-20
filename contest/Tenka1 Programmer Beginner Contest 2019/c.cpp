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

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    int count = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == '#' && s[i + 1] == '.') {
            s[i] = '.';
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
