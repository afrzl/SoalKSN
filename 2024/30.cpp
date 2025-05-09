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
    int max_go = 0;
    int max_n = 0;
    
    for (int i = 1; i <= 100; i++) {
        int result = go(i);
        if (result > max_go) {
            max_go = result;
            max_n = i;
        }
        
        cout << "go(" << i << ") = " << result << endl;
    }
    
    cout << "Nilai terbesar dari go(1) sampai go(100) = " << max_go << endl;
    cout << "Diperoleh dari go(" << max_n << ")" << endl;
    
    return 0;
}