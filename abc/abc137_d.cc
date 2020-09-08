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

int N, M;

int main() {
    vector <int> available_works;

    cin >> N >> M;

    vector <int> works[M + 1];

    vector <int> A(N);
    vector <int> B(N);
    
    int a, b;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        A[i] = a;
        B[i] = b;
        works[a].push_back(b);
    }

    for (int day = M - 1; 0 <= day; day--) {
        vector <int> w = works[M - day];
        for (int i = 0; i < w.size(); i++) {
            available_works.push_back(w[i]);
        }

        vector<int>::iterator iter = max_element(available_works.begin(), available_works.end());
        size_t index = distance(available_works.begin(), iter);
        cout << *iter << endl;
    }

    return 0;
}
