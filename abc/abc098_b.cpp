// Cut and Count

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


int common_letter(string str1, string str2) {
    vector<int> v1(26, 0);
    vector<int> v2(26, 0);

    for (int i = 0; i < str1.size(); i++) {
        v1[str1[i] - 'a']++;
    }
    for (int i = 0; i < str2.size(); i++) {
        v2[str2[i] - 'a']++;
    }

    int res = 0;
    for (int i = 0; i < 26; i++) {
        if (v1[i] > 0 && v2[i] > 0) {
            res++;
        }
    }

    return res;
}


int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    int res = 0;
    for (int i = 1; i < n; i++) {
        int tmp = common_letter(s.substr(0, i), s.substr(i));
        if (tmp > res) {
            res = tmp;
        }
    }

    cout << res << endl;

    return 0;
}
