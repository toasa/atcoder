// Coins
#include <iostream>

using namespace std;

// 500, 100, 50円
int a, b, c;
int x;

bool check_sum(int i) {
    if (i == x) {
        return true;
    }
    return false;
}

int main() {
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;

    int total = 0;
    int tmp1, tmp2, tmp3;

    int count = 0;

    for (int i = 0; i <= a && i*500 <= x; i++) {
        tmp1 = 500 * i;
        if (check_sum(total + tmp1)) {
            count++;
            break;
        }
        total += tmp1;
        for (int j = 0; j <= b && total + j*100 <= x; j++) {
            tmp2 = 100 * j;
            if (check_sum(total + tmp2)) {
                count++;
                break;
            }
            total += tmp2;
            for (int k = 0; k <= c && total + k*50 <= x; k++) {
                tmp3 = 50 * k;
                if (check_sum(total + tmp3)) {
                    count++;
                    break;
                }
            }
            total -= tmp2;
        }
        total -= tmp1;
    }

    cout << count << endl;
    return 0;
}
