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

int h, w, H, W;

int main() {
    cin >> H >> W;
    cin >> h >> w;
    cout << (H-h) * (W-w) << endl;

    return 0;
}
