#include <iostream>

using namespace std;

int n;
bool is_all_even(int arr[]);

int main() {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;

    while (is_all_even(arr)) {
        count++;
        for (int i = 0; i < n; i++) {
            arr[i] /= 2;
        }
    }

    cout << count << endl;
    return 0;
}

bool is_all_even(int arr[]) {
    bool result = true;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            result = false;
        }
    }
    return result;
}
