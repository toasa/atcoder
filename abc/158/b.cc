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
    ll N, A, B, result;
    cin >> N >> A >> B;

    result = 0;
    result += N / (A + B) * A;

    ll mod = N % (A + B);
    if (mod <= A) {
        result += mod;
    } else {
        result += A;
    }

    cout << result << endl;

    return 0;
}
