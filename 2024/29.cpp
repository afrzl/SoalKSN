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
    cout << "go(30) = " << go(30) << endl;
    return 0;
}