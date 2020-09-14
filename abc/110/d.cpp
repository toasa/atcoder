// Factorization

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>
#include <string>

using namespace std;

void print_div(int divisor_count[100010]) {
    for (int i = 0; i < 100010; i++) {
        if (divisor_count[i] != 0) {
            cout << i << "**" << divisor_count[i] << " * ";
        }
    }
    cout << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    int divisor_count[100010];
    for (int i = 0; i < 100010; i++) {
        divisor_count[i] = 0;
    }

    int m_tmp = m;
    for (int i = 2; i * i < m; i++) {
        while (m_tmp % i == 0) {
            m_tmp /= i;
            divisor_count[i]++;
        }
    }

    cout << "mの約数は";
    print_div(divisor_count);

    int ans_count = 0;



    return 0;
}
