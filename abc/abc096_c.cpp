// Grid Repainting 2

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

int h, w;
vector< vector<char> > s;

bool check_adj(int i, int j) {
    if (i >= 1) {
        if (s[i-1][j] == '#') {
            return true;
        }
    }
    if (i < h-1) {
        if (s[i+1][j] == '#') {
            return true;
        }
    }
    if (j >= 1) {
        if (s[i][j-1] == '#') {
            return true;
        }
    }
    if (j < w-1) {
        if (s[i][j+1] == '#') {
            return true;
        }
    }

    return false;
}

int main() {

    cin >> h >> w;
    s = vector< vector<char> >(h, vector<char>(w, 0));

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> s[i][j];
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '#') {
                if(!check_adj(i, j)) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}
