#include <iostream>
using namespace std;

int pndk(int N, int K) {
    if (N==1) return 1; 
    else return (pndk(N-1,K)+K-1)%N+1;
}

int main() {
    // Menggunakan memoization untuk efisiensi
    int memo[71][4] = {0};
  
    // Kasus dasar
    for (int k = 1; k <= 3; k++) {
        memo[1][k] = 1;
    }
  
    // Menghitung nilai pndk untuk K=3 dan berbagai N
    for (int n = 2; n <= 70; n++) {
        memo[n][3] = (memo[n-1][3] + 3 - 1) % n + 1;
    }
  
    cout << "pndk(30, 3) = " << memo[30][3] << endl;
    cout << "pndk(40, 3) = " << memo[40][3] << endl;
    cout << "pndk(50, 3) = " << memo[50][3] << endl;
    cout << "pndk(60, 3) = " << memo[60][3] << endl;
    cout << "pndk(70, 3) = " << memo[70][3] << endl;
  
    return 0;
}