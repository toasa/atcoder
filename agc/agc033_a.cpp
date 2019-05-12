// darker and darker

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
    char A[h][w];
    vector < pair<int, int> >memo;
    
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> A[i][j];
        }
    }
    
    int max = -99;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char c = A[i][j];
            if (c == '.') {
                for (int count = 1;; count++) {
                    if (i + count < h) {
                        if (A[i+count][j] == '#') {

                        }
                    }
                    
                    for (int len = 0; len < count; len++) {

                    }
                    return 30;
                }
            }
        }
    }


    return 0;
}
