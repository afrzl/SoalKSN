#include <iostream>
using namespace std;

int a, b, c, d;
int kiri()
{
    d--;
    return c - a / b;
}
int kanan()
{
    d--;
    return a + b - c;
}
void atas()
{
    c = c / 3;
    a -= 5;
}
int bawah(int x, int y, int z) //x = 42, y = 17, z = 265
{
    a = x; //a = 42
    b = y; //b = 17
    c = z; //c = 265
    d = 0;
    while (kiri() > kanan()) //selama  (c - a / b) > (a + b - c)
    {
        d = a + b + c + d;
        atas();
        b = b + 3;
        cout << a << " " << b << " " << c << " " << d << endl;
    }
    /*
    PENJELASAN:
    1. kiri() = 265 - 2 = 263 -> d = -1
        kanan() = -206 -> d = -2
        TRUE ->
            d = 322
            atas() -> c = 88, a = 37
            b = 20
    2. kiri() = 88 - 1 = 87 -> d = 321
        kanan() = -31 -> d = 320
        TRUE ->
            d = 465
            atas() -> c = 29, a = 32
            b = 23
    3. kiri() = 29 - 1 = 28 -> d = 464
        kanan() = 26 -> d = 463
        TRUE ->
            d = 547
            atas() -> c = 9, a = 27
            b = 26
    4. kiri() = 9 - 1 = 8 -> d = 546
        kanan() = 44 -> d = 545
        FALSE -> while berhenti
        a = 27
        b = 26
        c = 9
        d = 545
    */
    d += b * c; // d = 779
    d += x / y; // d = 781
    return d - 2 * a; //return 781 - 54 = 727
}

int main(int argc, char const *argv[])
{
    cout << bawah(42, 17, 265) << endl;
    return 0;
}
