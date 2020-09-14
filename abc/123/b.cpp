// Five Dishes

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

int last_menu(int arr[5]) {
    int min = 20;
    int ret;
    for (int i = 0; i < 5; i++) {
        int tmp = arr[i] % 10;
        if (0 < tmp && tmp < min) {
            min = tmp;
            ret = i;
        }
    }

    return ret;
}

int ceil_up(int n) {
    return (n + 9) - ((n + 9) % 10);
}

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int arr[5] = {a, b, c, d, e};

    int last = last_menu(arr);
    int ret = 0;
    for (int i = 0; i < 5; i++) {
        if (i == last) {
            continue;
        }
        ret += ceil_up(arr[i]);
    }
    ret += arr[last];

    cout << ret << endl;
    return 0;
}
