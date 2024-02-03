#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 0;
    int y = 0;
    while (x * 7 < 986 && y * 4 <= 876 && x - y > -67)
    {
        x += 2;
        y += 3;
    }
    cout << y << endl;
    return 0;
}

/*
    PENJELASAN:
    1. 0 < 986 (T) && 0 <= 876 (T) && 0 > -67 (T)
        x = 2
        y = 3
    2. 14 < 986 (T) && 12 <= 876 (T) && -1 > -67 (T)
        x = 4
        y = 6
    3. 28 < 986 (T) && 24 <= 876 (T) && -2 > -67 (T)
        x = 6
        y = 9
    4. 42 < 986 (T) && 36 <= 876 (T) && -3 > -67 (T)
        x = 8
        y = 12
    dst.
    
    - suku pertama
        0, 14, 28, 42, ...
        Un = (n-1) * 2 * 7
        n max = 71 -> U71 = 70 * 2 * 7 = 980
    - suku kedua
        0, 12, 24, 36, ...
        Un = (n-1) * 3 * 4
        n max = 74 -> U74 = 73 * 3 * 4 = 876
    - suku ketiga
        0, -1, -2, -3, ...
        Un = (n-1) * -1
        n max = 67 -> U67 = 66 * -1 = -66
    
    Jadi, n terkecil = 67
    y = 67 * 3 = 201
*/
