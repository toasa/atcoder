// Multiple of 2 and N

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

int n;

int main() {
    cin >> n;
    int res = lcm(n, 2);

    cout << res << endl;

    return 0;
}
