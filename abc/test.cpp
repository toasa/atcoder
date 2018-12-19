// Kagami Mochi

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int A[6] = {1, 3, 7, 2, 9, 5};
vector<int> B(A, A + 6);
int sum = 0;
vector<int> ans_vec;

void print_vec(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool b_t(int i, int sum) {
    if (i > 6 || sum > 9) {
        return false;
    }
    if (sum == 9) {
        print_vec(ans_vec);
        return true;
    }

    ans_vec.push_back(A[i]);
    sum += A[i];

    if (b_t(i+1, sum)) {
        sum -= ans_vec.back();
        ans_vec.pop_back();
        return true;
    }
    sum -= ans_vec.back();
    ans_vec.pop_back();
    b_t(i+1, sum);
    return false;
}

bool b_t_better(int i, int sum) {
    if (i > 6 || sum > 9) {
        return false;
    }
    if (sum == 9) {
        print_vec(ans_vec);
        return true;
    }

    ans_vec.push_back(A[i]);
    sum += A[i];

    for (int j = 1; j + i < 6; j++) {
        if (b_t(i+j, sum)) {
            sum -= ans_vec.back();
            ans_vec.pop_back();
            return true;
        }
        sum -= ans_vec.back();
        ans_vec.pop_back();
    }

    return false;
}

int main() {
    //b_t(0, sum);
    sort(B.begin(), B.end());
    reverse(B.begin(), B.end());

    b_t_better(0, sum);
    return 0;
}
