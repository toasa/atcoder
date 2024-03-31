#include <iostream>

using namespace std;

int main() {
    string in;
    cin >> in;
    int count = 0;
    if (in[0] == '1') {
        count++;
    }
    if (in[1] == '1') {
        count++;
    }
    if (in[2] == '1') {
        count++;
    }
    cout << count << endl;
    return 0;
}
