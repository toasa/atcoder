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

int main() {
    int r, d, x_2000;
    cin >> r >> d >> x_2000;

    for (int i = 0; i < 10; i++) {
        int tmp = r * x_2000 - d;
        cout << tmp << endl;
        x_2000 = tmp;
    }
    

    return 0;
}