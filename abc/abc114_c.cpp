// 755

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool check_753(int i) {
    bool flg7 = false;
    bool flg5 = false;
    bool flg3 = false;

    while (i > 0) {
        int tmp = i % 10;
        if (tmp != 7 && tmp != 5 && tmp != 3) {
            return false;
        }
        i /= 10;
        if (tmp == 7) {
            flg7 = true;
            continue;
        } else if (tmp == 5) {
            flg5 = true;
            continue;
        } else {
            flg3 = true;
            continue;
        }
    }
    if (flg7 && flg5 && flg3) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (check_753(i)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
