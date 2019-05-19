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
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 1; i * i < n; i++) {
        if (n % (i + 1) == 0) {
            if (n / i == n % i) {
                sum += i;
            }
            int oth = n / (i + 1) - 1;
            if (n / oth == n % oth) {
                sum += oth;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
