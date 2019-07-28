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
    string s;
    cin >> s;

    int memo[26];
    for (int i = 0; i < 26; i++) {
        memo[i] = 0;
    }

    memo[s[0] - 'A']++;
    memo[s[1] - 'A']++;
    memo[s[2] - 'A']++;
    memo[s[3] - 'A']++;

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (memo[i] > 0) {
            if (memo[i] != 2) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}
