// Five Antennas

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

long long ceil_up(long long n, long long div) {
    if (n % div == 0) {
        return n / div;
    }
    return (n / div) + 1;
}

int main() {
    long long n, a, b, c, d, e;
    cin >> n >> a >> b >> c >> d >> e;

    long long arr[5] = {a, b, c, d, e};

    long long min = 1000000000000001;
    for (int i = 0; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << ceil_up(n, min) + 4 << endl;
    return 0;
}
