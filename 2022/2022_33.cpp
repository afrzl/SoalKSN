#include <iostream>
using namespace std;

int bahagia(int A)
{
    if (A > 0)
    {
        int B = A / 2;
        int C = A - (B * 2);
        cout << C;
        bahagia(B);
    }
}

int main()
{
    bahagia(1111);
}