// Islands War

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

    // int a[m][2];
    vector< vector<int> > a;
    a = vector< vector<int> >(m, vector<int>(2, 0));

    for (int i = 0; i < m; i++) {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        a[i][0] = tmp1;
        a[i][1] = tmp2;
    }

    // a は第一要素でソートしないといけない
    sort(a.begin(), a.end());

    int res = 1;
    for (int i = 0; i < m-1; i++) {
        int tmp_j = a[i][1];

        if (a[i][0] == a[i+1][0]) {
            while (a[i][0] == a[i+1][0]) {
                i++;
                if (a[i][1] < tmp_j) {
                    tmp_j = a[i][1];
                }
            }
        }

        if (a[i+1][0] < a[tmp_j][1]) {
            continue;
        }
        res++;
    }

    cout << res << endl;

    return 0;
}
