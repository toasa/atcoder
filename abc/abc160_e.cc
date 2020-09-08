#include <algorithm>
#include <bitset>
#include <cmath>
#include <functional>
#include <iomanip>
#include <ios>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int X, Y, A, B, C, i, j, k;
    cin >> X >> Y >> A >> B >> C;
    vector<int> apples(A + B + C);
    rep(i, A + B + C) cin >> apples[i];
    sort(apples.begin(), apples.end());
    // rep(i, A + B + C) cout << apples[i] << " ";

    ll result = 0;
    int count = 0;
    for (i = A + B + C - 1; i >= 0; i--) {
        result += apples[i];
        count++;
        if (count == X + Y) {
            break;
        }
    }

    cout << result << endl;

    return 0;
}