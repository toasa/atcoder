// ID

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> id_2_year(m);

    vector<int> city(n);

    int p_i, y;
    for (int i = 1; i <= m; i++) {
        cin >> p_i >> y;
        city[p_i].push_back(y);
        id_2_year[i] = year;
    }

    for (int i = 1; i <= n; i++) {
        sort(city[i].begin(), city[i].end());
    }



    return 0;
}
