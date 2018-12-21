// 105

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
    int odds[6] = {3, 5, 7, 9, 11, 13};
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = j + 1; k < 6; k++) {
                if (odds[i] * odds[j] * odds[k] <= n) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
