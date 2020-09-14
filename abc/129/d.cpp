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
    int h, w;
    cin >> h >> w;
    string obs[h];
    int memo[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            memo[i][j] = 0;
        }
    }
    
    for (int i = 0; i < h; i++) {
        cin >> obs[i];
    }

    int max = -1;

    int id_max;
    if (h > w) {
        id_max = h;
    } else {
        id_max = w;
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (obs[i][j] == '.') {
                memo[i][j] = 1;
                bool N = true;
                bool W = true;                
                bool E = true;
                bool S = true;

                for (int k = 1; k <= id_max; k++) {
                    if (!(N || W || E || S)) {
                        break;
                    }
                    if (N) {
                        if (i - k >= 0) {
                            if (obs[i - k][j] == '.') {
                                memo[i][j]++;
                            } else {
                                N = false;
                            }
                        } else {
                            N = false;
                        }
                    }

                    if (S) {
                        if (i + k < h) {
                            if (obs[i + k][j] == '.') {
                                memo[i][j]++;
                            } else {
                                S = false;
                            }
                        } else {
                            S = false;
                        }
                    }

                    if (W) {
                        if (j - k >= 0) {
                            if (obs[i][j - k] == '.') {
                                memo[i][j]++;
                            } else {
                                W = false;
                            }
                        } else {
                            W = false;
                        }
                    }

                    if (E) {
                        if (j + k < w) {
                            if (obs[i][j + k] == '.') {
                                memo[i][j]++;
                            } else {
                                E = false;
                            }
                        } else {
                            E = false;
                        }
                    }
                }
            }
            if (memo[i][j] > max) {
                max = memo[i][j];
            }
        }
    }

    // for (int i = 0; i < h; i++) {
    //     for (int j = 0; j < w; j++) {
    //         cout << memo[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << max << endl;

    return 0;
}
