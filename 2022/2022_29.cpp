#include <iostream>
using namespace std;

int A, B, C, D;

int main()
{
    cin >> A >> B;
    C = A;
    D = B;
    while (C != D)
    {
        if (C < D)
            C += A;
        if (C > D)
            D += B;
    }
    while (A != B)
    {
        if (A < B)
            B -= A;
        if (A > B)
            A -= B;
    }
    cout << (C + D) / (A + B);
}