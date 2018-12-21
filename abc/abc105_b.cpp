// Cakes and Donuts

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

int main() {
    cin >> n;

    for (int cake = 0; cake <= 25; cake++) {
        for (int donuts = 0; donuts <= 18; donuts++) {
            if (cake * 4 + donuts * 7 == n) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
