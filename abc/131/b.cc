// Bite Eating

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

int N, L;

int Abs(int a, int b) {
    if (a < b) {
        return b - a;
    }
    return a - b;
}

int main() {
    cin >> N >> L;

    // n個のりんごでつくったときのパイの味
    int pieInAllApple = N * (L - 1) + N * (N + 1) / 2;

    int diff = 999999999;
    int res;

    for (int i = 1; i <= N; i++) {
        int tmpPieTaste = pieInAllApple - (L + i - 1);
        if (Abs(pieInAllApple, tmpPieTaste) < diff) {
            diff = Abs(pieInAllApple, tmpPieTaste);
            res = tmpPieTaste;
        }
    }

    cout << res << endl;

    return 0;
}
