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

int N;

int main() {
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    string type;
    if (((N - 1) / 2) % 2 == 0) {
        type = "even";
    } else {
        type = "odd";
    }

    int midDum = A[N / 2];
    
    int tmp = 0;
    for (int i = 0; i < N / 2; i++) {
        if (i % 2 == 0) {
            tmp += A[i];
            tmp += A[N - 1 - i];
        } else {
            tmp -= A[i];
            tmp -= A[N - 1 - i];
        }
    }

    int firstMount;
    if (type == "even") {
        firstMount = (midDum - tmp);
    } else {
        firstMount = (tmp - midDum);
    }

    int M[N];
    M[0] = firstMount;
    for (int i = 1; i < N; i++) {
        M[i] = 2 * (A[i - 1] - M[i - 1]);
    }

    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            cout << M[i] << endl;
        } else {
            cout << M[i] << " ";
        }
    }

    return 0;
}
