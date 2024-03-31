// Static Sushi

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
    // c: カウンターの外周の長さ
    // x_i: 現在地から、時計回りにx_i(m)離れている
    // v_i: 寿司iのカロリー
    int n, c;
    cin >> n >> c;
    vector<int> x(n);
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> v[i];
    }


    return 0;
}
