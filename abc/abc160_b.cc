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
    int X;
    cin >> X;

    int ureshisa = 0;

    ureshisa += (X / 500) * 1000;
    X %= 500;
    ureshisa += (X / 5) * 5;

    cout << ureshisa << endl;

    return 0;
}