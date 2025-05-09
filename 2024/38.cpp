#include <iostream>
using namespace std;

int pndk(int N, int K) {
    if (N==1) return 1; 
    else return (pndk(N-1,K)+K-1)%N+1;
}

int main() {
    cout << "pndk(7, 7) = " << pndk(7, 7) << endl;
    return 0;
}