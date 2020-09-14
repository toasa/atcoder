// AtCoder Beginner Contest 999

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
    int n;
    cin >> n;
    string str = to_string(n);
    for (int i = 0; i < 3; i++) {
        if (str[i] == '1') {
            str[i] = '9';
        } else {
            str[i] = '1';
        }
    }
    cout << str << endl;
}
