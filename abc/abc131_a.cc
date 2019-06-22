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

string s;

int main() {
    cin >> s;
    if (s[0] == s[1] || s[1] == s[2] || s[2] == s[3]) {
        cout << "Bad" << endl;
    } else {
        cout << "Good" << endl;
    }

    return 0;
}
