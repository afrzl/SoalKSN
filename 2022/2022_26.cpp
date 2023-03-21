#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    B = A - B; C = A - C; A = B + C;
    cout << (A + B) * C <<endl;
    return 0;
}
