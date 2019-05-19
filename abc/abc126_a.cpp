// button

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

    s[k-1] = s[k-1] + 32;
    cout << s << endl;

    return 0;
}
