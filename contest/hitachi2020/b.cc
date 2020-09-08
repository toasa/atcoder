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
    int A, B, M, i, x, y, c;
    cin >> A >> B >> M;
    vector<int> a(A);
    vector<int> b(B);


    int a_min = 1000000;
    int b_min = 1000000;

    rep(i, A) {
        int tmp;
        cin >> tmp;
        a[i] = tmp;
        if (tmp < a_min) {
            a_min = tmp;
        }
    }
    rep(i, B) {
        int tmp;
        cin >> tmp;
        b[i] = tmp;
        if (tmp < b_min) {
            b_min = tmp;
        }
    }

    int total_val = 1000000;
    rep(i, M) {
        cin >> x >> y >> c;
        x--;
        y--;
    
        int tmp_val = a[x] + b[y] - c;
        if (tmp_val < total_val) {
            total_val = tmp_val;
        }
    }

    if (a_min + b_min < total_val) {
        total_val = a_min + b_min;
    }

    cout << total_val << endl;
    return 0;
}
