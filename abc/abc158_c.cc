// 
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

int calc_tax(int val, float rate) {
    int tax = (float)val * rate;
    return tax;
}

int main() {
    double A, B;
    cin >> A >> B;
    
    int i;
    rep(i, 1000) {
        if ((calc_tax(i+1, 0.08) == A) && (calc_tax(i+1, 0.1) == B)) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
