// Ruined Square

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
    int x[4];
    int y[4];
    cin >> x[0] >> y[0] >> x[1] >> y[1];
    int x_l = x[1] - x[0];
    int y_l = y[1] - y[0];
    if (x_l >= 0 && y_l >= 0) {
        x[2] = x[1] - y_l;
        y[2] = y[1] + x_l;
        x[3] = x[2] - x_l;
        y[3] = y[2] - y_l;
    } else if (x_l >= 0 && y_l < 0){
        y_l = abs(y_l);
        x[2] = x[1] + y_l;
        y[2] = y[1] + x_l;
        x[3] = x[2] - x_l;
        y[3] = y[2] + y_l;
    } else if (x_l < 0 && y_l >= 0){
        x_l = abs(x_l);
        x[2] = x[1] - y_l;
        y[2] = y[1] - x_l;
        x[3] = x[2] + x_l;
        y[3] = y[2] - y_l;
    } else if (x_l < 0 && y_l < 0){
        x_l = abs(x_l);
        y_l = abs(y_l);
        x[2] = x[1] - y_l;
        y[2] = y[1] - x_l;
        x[3] = x[2] + x_l;
        y[3] = y[2] + y_l;
    }


    cout << x[2] << " " << y[2] << " " << x[3] << " " << y[3] << endl;

    return 0;
}
