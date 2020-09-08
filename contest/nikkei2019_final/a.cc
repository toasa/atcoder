// 

// g++ -std=c++11 abc145_c.cc && ./a.out 
#include <algorithm>
#include <bitset>
#include <cmath>
#include <functional>
#include <iomanip>
#include <ios>
#include <iostream>
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
    int N, i, j;
    long tmp;
    cin >> N;
    int A[N];
    rep(i, N) cin >> A[i];

    ll cumulative_sums[N + 1];
    tmp = 0;
    cumulative_sums[0] = 0;
    rep(i, N) {
        tmp += A[i];
        cumulative_sums[i+1] = tmp;
    }

    rep(i, N) {
        ll tmp_max = -1;
        int diff = i + 1;
        for (j = diff; j <= N; j++) {
            tmp = cumulative_sums[j] - cumulative_sums[j - diff];
            if (tmp > tmp_max) {
                tmp_max = tmp;
            }
        }
        cout << tmp_max << endl;
    }

    return 0;
}
