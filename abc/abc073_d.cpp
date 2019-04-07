// joisino's travel

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

const int INF = 100000000;

vector<vector<int> > d;

int n, m, R;

int main() {
    cin >> n >> m >> R;
    d = vector<vector<int> >(n, vector<int>(n, INF));
    int r[R];
    for (int i = 0; i < R; i++) {
        cin >> r[i];
    }
    int a[m], b[m], c[m];
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    return 0;
}
