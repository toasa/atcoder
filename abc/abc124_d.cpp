// Handstand

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
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    vector <int> memo(n, 0);

    int hs_count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            hs_count++;
            if (i == n - 1) {
                for (int j = n - 1; i >= 0 && s[j] == '1'; j--) {
                    memo[j] = hs_count;
                }
            }
        } else {
            if (i >= 1) {
                for (int j = i - 1; i >= 0 && s[j] == '1'; j--) {
                    memo[j] = hs_count;
                }
                hs_count = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << memo[i] << " ";
    }
    cout << endl;


    return 0;
}
