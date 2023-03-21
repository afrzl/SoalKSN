#include <iostream>
using namespace std;

int hitung(int x, int y)
{
    if (x + y == 0)
        return y;

    if (x >= 0)
        return hitung(x - 1, 2 * y);

    return (x - 1, y - 1) + 1;
}

int main()
{
    cout << hitung(10, 5) << endl;
}