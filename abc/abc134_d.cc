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

int N;

int main() {
    cin >> N;
    int a[N + 1];
    int b[N + 1];
    int count = 0;
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
        if (N / 2 < i) {
            if (a[i] == 1) {
                count++;
            }
            b[i] = a[i];
        }
    }

    for (int i = N / 2; 0 < i; i--) {
        int tmp = a[i];
        for (int j = 2 * i; j <= N; j += i) {
            tmp ^= b[j];
        }
        b[i] = tmp;
        if (b[i] == 1) {
            count++;
        }
    }

    cout << count << endl;

    int printCount = 0;
    for (int i = 1; i <= N; i++) {
        if (b[i] == 1) {
            printCount++;
            if (printCount == count) {
                cout << i << endl;
            } else {
                cout << i << " ";
            }
            
        }
    }


    return 0;
}

// 10
// 1 0 1 1 0 1 0 1 1 0