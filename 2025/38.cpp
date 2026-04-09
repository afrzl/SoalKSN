#include <iostream>
#include <string>
using namespace std;

int MERAH(int A, int B)
{
    if (B == 0)
    {
        return A;
    }
    else
    {
        return MERAH(B, A % B);
    }
}

int PUTIH(int A, int B, int C)
{
    if (C == 0)
    {
        return 0;
    }
    else if (MERAH(A, C) == B)
    {
        return 1 + PUTIH(A, B, C - 1);
    }
    else
    {
        return PUTIH(A, B, C - 1);
    }
}

int NUSANTARA(int A, int B)
{
    return PUTIH(A, B, A);
}

int main()
{
    cout << "A. MERAH(24, 4) = " << MERAH(24, 4) << endl;
    cout << "B. MERAH(24, 9) = " << MERAH(24, 9) << endl;
    cout << "C. MERAH(24, 17) = " << MERAH(24, 17) << endl;
    cout << "D. MERAH(24, 18) = " << MERAH(24, 18) << endl;
    cout << "E. MERAH(24, 34) = " << MERAH(24, 34) << endl;

    return 0;
}