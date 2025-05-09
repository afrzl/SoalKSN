#include <iostream>
#include <cmath>
using namespace std;

int pndk(int N, int K) {
    if (N==1) return 1; 
    else return (pndk(N-1,K)+K-1)%N+1;
}

int main() {
    // Untuk K=2, nilai tertinggi dicapai pada N = 2^m - 1
    // di mana m adalah bilangan bulat positif terbesar sehingga 2^m - 1 ≤ 5000
  
    int m = log2(5000 + 1);
    int max_N = pow(2, m) - 1;
  
    cout << "Nilai N dengan pndk(N, 2) terbesar: " << max_N << endl;
    cout << "Nilai pndk(" << max_N << ", 2) = " << max_N << endl;
  
    return 0;
}