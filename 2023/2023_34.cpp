#include <iostream>
using namespace std;

int info(int x);
int format(int x);
int matika(int x);

int info(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return info(x - 1) + format(x - 1);
    }
}

int format(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return info(x - 1) + matika(x - 1);
    }
}

int matika(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return format(x - 1) + matika(x - 1);
    }
}

int main(int argc, char const *argv[])
{
    cout << info(9) << endl;
    return 0;
}

/*
    PENJELASAN:
    info(9) = info(8) + format(8) ... = 512
    info(8) = info(7) + format(7) ... = 256
    info(7) = info(6) + format(6) ... = 128
    info(6) = info(5) + format(5) ... = 64
    info(5) = info(4) + format(4)
            = 16 + info(3) + matika(3)
            = 16 + 8 + format(2) + matika(2)
            = 16 + 8 + 4 + 4 = 32
    info(4) = info(3) + format(3)
            = 8 + info(2) + matika(2)
            = 8 + 4 + format(1) + matika(1)
            = 8 + 4 + 2 + 2 = 16
    info(3) = info(2) + format(2)
            = 4 + info(1) + matika(1)
            = 4 + 2 + format(0) + matika(0)
            = 4 + 2 + 1 + 1 = 8
    info(2) = info(1) + format(1)
            = 2 + info(0) + matika(0)
            = 2 + 1 + 1 = 4
    info(1) = info(0) + format(0)
            = 1 + 1 = 2
*/
