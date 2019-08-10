// 

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

int retMax(int a, int b, int c) {
    if (b <= a && c <= a) {
        return a;
    }
    if (a <= b && c <= b) {
        return b;
    }
    if (a <= c && b <= c) {
        return c;
    }
    return 0;
}

int main() {
    int A, B;
    cin >> A >> B;
    cout << retMax(A+B, A-B, A*B) << endl;

    return 0;
}
