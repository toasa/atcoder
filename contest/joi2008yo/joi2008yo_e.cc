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
    int R, C, i, j, n;
    cin >> R >> C;
    bitset<10000> senbei_state[R];
    rep(i, R) {
        rep(j, C) {
            cin >> n;
            senbei_state[i](n);
        }
    }

    return 0;
}
