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

int gcd(long long m, long long n) {

	if ((0 == m) || (0 == n))
		return 0;

	// ユークリッドの方法
	while(m != n) {
		if ( m > n ) m = m - n;
		else         n = n - m;
	}
	return m;
}

int lcm(long long m, long long n) {
	// 引数に０がある場合は０を返す
	if ( ( 0 == m ) || ( 0 == n ) )
		return 0;

	return ((m / gcd(m, n)) * n); // lcm = m * n / gcd(m,n)
}

int main() {
    cin >> n;
    long long res = lcm(n, 2);

    cout << res << endl;

    return 0;
}
