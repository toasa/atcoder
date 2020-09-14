// Skip

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

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    
    if (b > a) {
        int tmp = a;
        a = b;
        b = tmp;
    }

    int r = a % b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main() {
    int n, X;
    cin >> n >> X;

    int x[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        x[i] -= X;
    }

    int result;

    if (n > 1) {
        result = gcd(x[0], x[1]);
        for (int i = 2; i < n; i++) {
            result = gcd(result, x[i]);
        }
    } else {
        result = x[0];
    }

    cout << result << endl;

    return 0;
}
