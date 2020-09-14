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
    int N, M, i, j;
    cin >> N >> M;
    int A[N];

    int total = 0;
    rep (i, N) {
        cin >> A[i];
        total += A[i];
    };

    int count = 0;
    rep (i, N) {
        int a = A[i];
        if (a * 4 * M >= total) {
            count++;
        }
    }

    if (count >= M) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}