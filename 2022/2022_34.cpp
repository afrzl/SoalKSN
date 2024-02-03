#include <iostream>
using namespace std;

int putih(int x)
{
    if (x > 0)
        return 1 + putih(x / 2);

    return 0;
}
int merah(int x, int y)
{
    if (x == y)
        return putih(x);

    if (x > y)
        return 1 + merah(x - 1, y);

    return 0;
}

int main()
{
    cout << merah(100, 50) << endl;
}