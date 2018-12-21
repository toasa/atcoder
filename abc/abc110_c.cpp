// String Transformation

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    vector<int> s_count(26);
    vector<int> t_count(26);
    for (int i = 0; i < 26; i++) {
        s_count[i] = 0;
        t_count[i] = 0;
    }

    for (int i = 0; i < s.size(); i++) {
        s_count[s[i] - 'a']++;
        t_count[t[i] - 'a']++;
    }

    sort(s_count.begin(), s_count.end());
    sort(t_count.begin(), t_count.end());

    // 任意の置換は互換の積で表される
    for (int i = 0; i < 26; i++) {
        if (s_count[i] != t_count[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
