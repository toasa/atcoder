// ID

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>

using namespace std;

int main() {
    // n: 県の数
    // m: 市の総計
    int n, m;
    cin >> n >> m;

    //pref[prefecture][sorted index] = year

    vector<int> pref[n];

    int p[m+1];
    int y[m+1];

    int p_i, y_i;
    for (int i = 1; i <= m; i++) {
        cin >> p_i >> y_i;
        p[i] = p_i;
        y[i] = y_i;
        pref[p_i].push_back(y_i);
    }

    for (int i = 1; i <= n && pref[i].size() != 0; i++) {
        sort(pref[i].begin(), pref[i].end());
    }

    for (int i = 1; i <= m; i++) {
        p_i = p[i];
        y_i = y[i];

        int j;
        for (j = 0; j < pref[p_i].size(); j++) {
            if (pref[p_i][j] == y_i) {
                break;
            }
        }
        //cout << "p_i: " << p_i << " id: " << j + 1 << endl;
        cout << setfill('0') << setw(6) << p_i;
        cout << setfill('0') << setw(6) << j + 1;
        cout << endl;
    }

    return 0;
}
