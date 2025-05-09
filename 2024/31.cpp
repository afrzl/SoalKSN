#include <iostream>
using namespace std;

int go(int N) {
    int s = 0;
    int f = 1;
    for (int i = 2; i <= N; i++) {
        if (N % i == 0) {
            if (i - f > s) {
                s = i - f;
            }
            f = i;
        }
    }
    return s;
}

int main() {
    bool is_true = true;
    
    for (int i = 2; i <= 100; i++) {
        if (go(i) < i/2.0) {
            is_true = false;
            cout << "Ditemukan: go(" << i << ") = " << go(i) << " < " << i/2.0 << endl;
            break;
        }
    }
    
    cout << "Apakah go(N) >= N/2 untuk semua N > 1? " << (is_true ? "BENAR" : "SALAH") << endl;
    
    return 0;
}