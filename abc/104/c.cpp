// All Green

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

int d, g;

int main() {
    cin >> d >> g;
    vector<int> p(d);
    vector<int> c(d);

    // 解いた数をindexに、値をその時の獲得点にする
    vector<int> table(1010, 0);

    for (int i = 0; i < d; i++) {
        cin >> p[i] >> c[i];
        table[p[i]] = max(p[i] * i + c[i], table[p[i]]);
     }

    return 0;
}
