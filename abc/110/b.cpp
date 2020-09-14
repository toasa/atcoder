// 1 Dimensional World's Tale

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int N, M, X, Y;
    cin >> N >> M >> X >> Y;
    int x;
    int y;

    int x_max = -200;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x > x_max) {
            x_max = x;
        }
    }

    int y_min = 200;
    for (int i = 0; i < M; i++) {
        cin >> y;
        if (y < y_min) {
            y_min = y;
        }
    }

    bool war_happen = true;

    for (int i = X+1; i <= Y; i++) {
        if (x_max < i && i <= y_min) {
            war_happen = false;
            break;
        }
    }

    if (war_happen) {
        cout << "War" << endl;
    } else {
        cout << "No War" << endl;
    }

    return 0;
}
