#include <iostream>
using namespace std;

int bersih(int x, int y)
{
    return x + y;
}

int hijau(int x, int y)
{
    return x - y;
}

int berhiber(int x, int y)
{
    if (y == 0)
    {
        return 0;
    }
    else
    {
        return bersih(x, y) + hijau(x, y) + berhiber(x - 1, y - 1);
    }
}

int main(int argc, char const *argv[])
{
    cout << berhiber(20, 15) << endl;
    return 0;
}

/*
    PENJELASAN:
    dengan rekursif

    berhiber(20, 15) = bersih(20, 15) + hijau(20, 15) + berhiber(119, 14)
                        = 35 + 5 + berhiber(19, 14) = 390 -> hasil akhir
    berhiber(19, 14) = bersih(19, 14) + hijau (19, 14) + berhiber(18, 13)
                        = 33 + 5 + berhiber(18, 13) = 350
    berhiber(18, 13) = 31 + 5 + berhiber(17, 12) = 312
    berhiber(17, 12) = 29 + 5 + berhiber(16, 11) = 276
    berhiber(16, 11) = 27 + 5 + berhiber(15, 10) = 242
    berhiber(15, 10) = 25 + 5 + berhiber(14, 9) = 210
    berhiber(14, 9) = 23 + 5 + berhiber(13, 8) = 180
    berhiber(13, 8) = 21 + 5 + berhiber(12, 7) = 152
    berhiber(12, 7) = 19 + 5 + berhiber(11, 6) = 126
    berhiber(11, 6) = 17 + 5 + berhiber(10, 5) = 102
    berhiber(10, 5) = 15 + 5 + berhiber(9, 4) = 80
    berhiber(9, 4) = 13 + 5 + berhiber(8, 3) = 60
    berhiber(8, 3) = 11 + 5 + berhiber(7, 2) = 42
    berhiber(7, 2) = 9 + 5 + berhiber(6, 1) = 26
    berhiber(6, 1) = 7 + 5 + berhiber(5, 0) = 12

*/