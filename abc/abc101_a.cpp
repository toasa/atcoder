// Eating Symbols Easy

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

    int res = 0;
    for (int i = 0; i < 4; i++) {
        if (s[i] == '+') {
            res++;
        } else {
            res--;
        }
    }

    cout << res << endl;

    return 0;
}
