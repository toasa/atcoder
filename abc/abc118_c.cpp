// Monsters Battle Royale

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

int gcd( int m, int n ){
	// 引数に０がある場合は０を返す
	if ( ( 0 == m ) || ( 0 == n ) )
		return 0;

	// ユークリッドの方法
	while(m != n){
		if ( m > n ) m = m - n;
		else         n = n - m;
	}
	return m;
}

int main() {
    cin >> n;
    vector<long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 1; i < n; i++) {
        long tmp = a[i] % a[0];
        if (tmp == 0) {
            a[i] = a[0];
        } else {
            a[i] = tmp;
        }
    }

    // for (int i = 0; i < n; i++) {
    //     cout << a[i] << " ";
    // }
    // cout << endl;


    int tmp = a[0];
    for (int i = 1; i < n; i++) {
        tmp = gcd(tmp, a[i]);
    }

    cout << tmp << endl;

    return 0;
}
