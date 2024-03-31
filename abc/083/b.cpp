// Some Sums

#include <iostream>
#include <cmath>

using namespace std;

int sum_each_digit(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int total;
    for (int i = 1; i <= n; i++) {
        int n = sum_each_digit(i);
        if (a <= n && n <= b) {
            total += i;
        }
    }

    cout << total << endl;
    return 0;
}
