// Daydream

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string input;
string str[4] = {"dream", "dreamer", "erase", "eraser"};

// eraserdreamerdreameraserdreameraserdreamdreamereraser
// dreamereraser
bool DFS(int n, int spaces) {
    // cout << string(spaces, ' ') << "\e[34mstartDFS()" << spaces << endl;

    if (n == input.size()) {
        // cout << string(spaces, ' ') << "\e[34mendDFS()" << spaces << endl;
        return true;
    }

    for (int i = 0; i < 4; i++) {
        // cout << "\e[m" << string(spaces, ' ') << str[i] << endl;
        if (n + str[i].size() <= input.size() && input.substr(n, str[i].size()) == str[i]) {
            if (DFS(n + str[i].size(), n+str[i].size())) {
                // cout << string(spaces, ' ') << "\e[34mendDFS()" << spaces << endl;
                return true;
            }
        }
    }
    // cout << string(spaces, ' ') << "\e[34mendDFS()" << spaces << endl;
    return false;
}

int main() {
    cin >> input;
    if (DFS(0, 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    // cout << "\e[m";
    return 0;
}
