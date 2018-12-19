// /\/\/\/

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

    // あとで、数値の類出度を求める
    vector<int> even(100010);
    vector<int> even_count(100010);
    vector<int> odd(100010);
    vector<int> odd_count(100010);
    for (int i = 0; i <= 100010; i++) {
        even[i] = 0;
        even_count[i] = 0;
        odd[i] = 0;
        odd_count[i] = 0;
    }

    int v;
    for (int i = 0; i < n; i++) {
        cin >> v;
        if (i % 2 == 0) {
            even.push_back(v);
            even_count[v]++;
        } else {
            odd.push_back(v);
            odd_count[v]++;
        }
    }

    // even, oddを降順にソート
    sort(even.begin(), even.end());
    sort(even_count.begin(), even_count.end());
    sort(odd.begin(), odd.end());
    sort(odd_count.begin(), odd_count.end());
    reverse(even.begin(), even.end());
    reverse(even_count.begin(), even_count.end());
    reverse(odd.begin(), odd.end());
    reverse(odd_count.begin(), odd_count.end());

    // for (int i = 0; i < 5; i++) {
    //     cout << odd[i] << " " << odd_count[i] << endl;
    // }

    // 数列内の頻度が最も多い偶数番目と奇数番目の数が違う場合
    if (even[0] != odd[0]) {
        int even_change_count = 0;
        int odd_change_count = 0;
        // 次点以降に頻度が多い数値の登場回数を求める
        for (int i = 1; i < n && even_count[i] != 0; i++) {
            even_change_count += even_count[i];
        }
        for (int i = 1; i < n && odd_count[i] != 0; i++) {
            even_change_count += odd_count[i];
        }
        cout << even_change_count + odd_change_count << endl;
    }

    return 0;
}
