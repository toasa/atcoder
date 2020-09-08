// Bingo

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
    int A[3][3];
    int N;
    bool bingoed[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
            bingoed[i][j] = false;
        }
    }

    cin >> N;
    vector <int> b(N);
    for (int h = 0; h < N; h++) {
        int n;
        cin >> n;
        b[h] = n;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (A[i][j] == n) {
                    bingoed[i][j] = true;
                }
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        // 横
        if (bingoed[i][0] && bingoed[i][1] && bingoed[i][2]) {
            cout << "Yes" << endl;
            return 0;
        }
        // 縦
        if (bingoed[0][i] && bingoed[1][i] && bingoed[2][i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    if (bingoed[0][0] && bingoed[1][1] && bingoed[2][2]) {
        cout << "Yes" << endl;
        return 0;
    }
    if (bingoed[2][0] && bingoed[1][1] && bingoed[0][2]) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
