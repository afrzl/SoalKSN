#include <iostream>
using namespace std;

int kwik(int mangga)
{
    int hasil = 0;
    for (int i = 0; i < mangga; i += 4)
    {
        hasil += i;
    }
    return hasil;
}
int kwek(int apel)
{
    int hasil = 0;
    for (int i = 0; i < apel; i += 3)
    {
        hasil += kwik(i * 3) * i;
    }
    return hasil;
}
int kwak(int jeruk)
{
    int hasil = 0;
    for (int i = 0; i < jeruk; i += 2)
    {
        hasil += kwek(i) + kwik(i * 2);
    }
    return hasil;
}

int main()
{
    cout << kwak(10) << endl;
}