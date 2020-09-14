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
    int n, m;
    long long ans;
    cin >> n >> m;

    // long long 必要？
    vector <int> A(n);
    vector < pair<int, int> > B_C(m);
    
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < m; i++) {
        cin >> B_C[i].second >> B_C[i].first;
    }
    sort(B_C.begin(), B_C.end(), greater<pair<int,int> >());

    int B_Ci = 0;
    int b_tmp = B_C[B_Ci].second;
    int c_tmp = B_C[B_Ci].first;
    for (int i = n - 1; i >= 0; i--) {
        
        if (b_tmp <= 0 && B_Ci < m - 1) {
            B_Ci++;
            b_tmp = B_C[B_Ci].second;
            c_tmp = B_C[B_Ci].first;
        }
        if (b_tmp > 0 && A[i] < c_tmp) {
            if (B_Ci < m - 1) {
                if (B_C[B_Ci+1].first >= A[i]) {
                    A[i] = c_tmp;
                    b_tmp--;
                    ans += c_tmp;
                }
            }
        } else {
            ans += A[i];
        }

        //cout << "A[i]: " << A[i] << " b_tmp: " << b_tmp << " c_tmp: " << c_tmp << endl; 
    }

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << ans << endl;
    

    return 0;
}