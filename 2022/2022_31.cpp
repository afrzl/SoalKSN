#include <iostream>
using namespace std;

int jalanjalan(int kiri, int kanan)
{
    int energi = 0;
    while (kiri < kanan)
    {
        if (kiri % 7 == 0)
        {
            kiri++;
            energi++;
        }
        else if (kiri % 3 == 0)
        {
            kiri += 2;
            energi += 2;
        }
        else
        {
            kiri += 3;
            energi += 3;
        }
    }
    return energi;
}

int main()
{
    cout << jalanjalan(10, 1000) << endl;
}