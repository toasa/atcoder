// Triangular Relationship

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

int main() {
    int n, k;
    cin >> n >> k;
    // n以下の正の整数の組(a, b, c)でa+b, b+c, c+aが全てKの倍数であるもの

    // (a + b) % k == 0
    // (b + c) % k == 0
    // (c + a) % k == 0
    // k <= a + b <= 2 * n
    for (int i = k; i + k <= 2 * n; i += k) {
        a + b == i && b + c == i && c + a = iとなるabc
    }

    return 0;
}
