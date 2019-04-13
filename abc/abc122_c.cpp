// GeT AC

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
    int n, q;
    string s;    
    cin >> n >> q;
    cin >> s;


    // 8 3
    //  ACACTACG
    // [01122233]

    // 2 6 => 2
    // 1 2 => 0
    // 0 7 => 3


    int ac_count = 0;
    vector <int> memo(n, 0);
    for (int i = 1; i < n; i++) {
        if (s[i - 1] == 'A' && s[i] == 'C') {
            ac_count++;
        }
        memo[i] = ac_count;
    }
    memo[0] = 0;

    // for (int i = 0; i < n; i++) {
    //     cout << memo[i] << " ";
    // }
    // cout << endl;

    int l[n], r[n];
    int l_i, r_i;
    for (int i = 0; i < q; i++) {
        cin >> l_i >> r_i;
        l_i--;
        r_i--;
        l[i] = l_i;
        r[i] = r_i;
    }

    for (int i = 0; i < q; i++) {
        l_i = l[i];
        r_i = r[i];
        cout << memo[r_i] - memo[l_i] << endl;
    }

    return 0;
}
