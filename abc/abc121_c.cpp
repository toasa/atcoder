// Energy Drink Collector

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

int n, m;

int main() {
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    // pair<int, int>はint２つの型
    vector<pair<int, int> > ab(n);
    for (int i = 0; i < n; i++) {
        ab[i] = make_pair(a[i], b[i]);
    }

    // pairのsortは前にある要素からsortされていく
    // aは値段なのでおｋ
    sort(ab.begin(), ab.end());

    long long ans = 0;
    for (int i = 0; i < n && m != 0; i++) {
        int buy = min(ab[i].second, m);

        // ans += buy * ab[i].first ではoverflowしてします
        ans += (long long)buy * ab[i].first;

        m -= buy;
    }

    cout << ans << endl;

    return 0;
}
