// AcCepted

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

string s;

int main() {
    cin >> s;
    bool cond1 = false;
    bool cond2 = false;
    bool cond3 = false;

    if (s[0] == 'A') {
        cond1 = true;
    }
    int capitals[26];
    for (int i = 0; i < 26; i++) {
        capitals[i] = 0;
    }


    for (int i = 2; i < s.size() - 1; i++) {
        if (0 <= s[i] - 'a' && s[i] - 'a' <= 25) {
            continue;
        }
        if (0 <= s[i] - 'A' && s[i] - 'A' <= 25) {
            capitals[s[i] - 'A']++;
        }
    }

    if (capitals[2] == 1 && 0 <= s[1]-'a' && s[1] - 'a' <= 25 && 0 <= s[s.size()-1] - 'a' && s[s.size()-1] - 'a' <= 25) {
        cond2 = true;
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        count += capitals[i];
    }
    if (count == 1) {
        cond3 = true;
    }

    if (cond1 && cond2 && cond3) {
        cout << "AC" << endl;
    } else {
        cout << "WA" << endl;
    }

    return 0;
}
