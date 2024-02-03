#include <iostream>
using namespace std;

int a = 0, b = 0, c = 0, d = 0;
int ans = 0;

void kebersamaan(int x)
{
    ans += a;
    a = b;
    b = c;
    c = d;
    d = x;
}

int main()
{
    a += 4;         // a = 4
    b += 3;         // b = 3
    c += 7;         // c = 7
    d += 2;         // d = 2
    kebersamaan(5); // ans = 4, a = 3, b = 7, c = 2, d = 5
    kebersamaan(2); // ans = 7, a = 7, b = 2, c = 5, d = 2
    a += 2;         // a = 9
    c += 3;         // c = 8
    kebersamaan(3); // ans = 16, a = 2, b = 8, c = 2, d = 3
    d += 4;         // d = 7
    c += 4;         // c = 6
    kebersamaan(0); // ans = 18, a = 8, b = 6, c = 7, d = 0
    a += 5;         // a = 13
    b += 6;         // b = 12
    kebersamaan(1); // ans = 31
    c += 9;
    a += 7;
    c += 2;
    cout << ans << endl;
    return 0;
}
