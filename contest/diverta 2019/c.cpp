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

int ab_contain(string s) {
    int count = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == 'A' && s[i+1] == 'B') {
            i++;
            count++;
        }
    }
    return count;
}

int check_str(string s) {
    int state;
    if (s[0] == 'B' && s[s.size() - 1] != 'A') {
        state = 1;
    } else if (s[0] != 'B' && s[s.size() - 1] == 'A') {
        state = 2;
    } else if (s[0] == 'B' && s[s.size() - 1] == 'A') {
        state = 3;
    } else {
        state = 0;
    }
    return state;
}

int Min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main() {
    int n;
    cin >> n;

    int count = 0;
    string s;

    // 1: 先頭がBで末尾がA以外
    // 2: 先頭がB以外で末尾がA
    // 3: 先頭がBでかつ末尾がA
    // 0: else

    int state_count[4];

    for (int i = 0; i < n; i++) {
        cin >> s;
        count += ab_contain(s);
        int state = check_str(s);
        state_count[state]++;
    }

    if (state_count[3] > 0) {
       if (state_count[1] == 0 && state_count[2]) {
           count += (state_count[3] - 1);
       } else {
           count += (state_count[3] + Min(state_count[1], state_count[2]));
       }
    } else {
        count += Min(state_count[1], state_count[2]);        
    }


    cout << count << endl;    

    return 0;
}
