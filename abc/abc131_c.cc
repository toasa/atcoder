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

long long A, B, C, D;

long long gcd(long long a, long long b) {
  return b != 0 ? gcd(b, a % b) : a;
}
long long lcm(long long a, long long b) {
  return a * b / gcd(a, b);
}

int main() {
    cin >> A >> B >> C >> D;
    A--;

    long long C_Divisor_num_zero_B = B / C;
    long long D_Divisor_num_zero_B = B / D;
    long long common_Div_toB = B / lcm(C, D);
    int DivCorD_toB = C_Divisor_num_zero_B + D_Divisor_num_zero_B - common_Div_toB;

    long long C_Divisor_num_zero_A = A / C;
    long long D_Divisor_num_zero_A = A / D;
    long long common_Div_toA = A / lcm(C, D);
    int DivCorD_toA = C_Divisor_num_zero_A + D_Divisor_num_zero_A - common_Div_toA;


    // if (A % C == 0 || A % D == 0) {
    //     cout << B - A  - (DivCorD_toB - DivCorD_toA) << endl;
    // } else {
    //     cout << B - A + 1 - (DivCorD_toB - DivCorD_toA) << endl;
    // }

    cout << B - A - (DivCorD_toB - DivCorD_toA) << endl;

    return 0;
}