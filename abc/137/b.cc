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
int K, X;
int main() {
    cin >> K >> X;

    for (int i = X - K + 1; i < K + X; i++) {
        if (i == K + X - 1) {
            cout << i << endl;
        } else {
            cout << i << " ";
        }
        
    }

    return 0;
}
